#include <esp_now.h>
#include <WiFi.h>
#include <lvgl.h>
#include <TFT_eSPI.h>
#include "ui.h"

uint8_t slaveAddress[] = { 0xF0, 0x9E, 0x9E, 0x20, 0xE5, 0x3C };

// Gönderilecek veri yapısı
typedef struct {
  int id;
  float temperature;
  float humidity;
  int ldr;
} DataPacket;

typedef struct {
  int id;
  uint8_t red;  // bool yerine uint8_t kullanıldı
  uint8_t green;
  uint8_t blue;
  uint8_t alarm;
  uint8_t reboot_status;
} SendPacket;

SendPacket send_msg;
DataPacket dataReceived;

int id = 0;
float temp = 0;
float humidity = 0;
int ldr = 0;

#define LV_HOR_RES 320
#define LV_VER_RES 240
#define LV_COLOR_DEPTH 16

TFT_eSPI tft = TFT_eSPI();
TFT_eSPI *lcd = &tft;

static lv_color_t buf[LV_HOR_RES * LV_VER_RES / 3];
static lv_disp_draw_buf_t disp_buf;

lv_chart_series_t *ui_graph_series_1;
lv_chart_series_t *ui_graph_series_2;
lv_chart_series_t *ui_graph_series_3;

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  uint32_t w = area->x2 - area->x1 + 1;
  uint32_t h = area->y2 - area->y1 + 1;

  lcd->startWrite();
  lcd->setAddrWindow(area->x1, area->y1, w, h);
  lcd->pushColors((uint16_t *)color_p, w * h, true);
  lcd->endWrite();

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev, lv_indev_data_t *data) {
  uint16_t touchX, touchY;
  bool touched = tft.getTouch(&touchX, &touchY);
  if (touched) {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = touchX;
    data->point.y = touchY;
  } else {
    data->state = LV_INDEV_STATE_REL;
  }
}

void onReceive(const esp_now_recv_info_t *info, const uint8_t *incomingData, int len) {
  memcpy(&dataReceived, incomingData, sizeof(dataReceived));  // Gelen veriyi al
  id = dataReceived.id;
  temp = dataReceived.temperature;
  humidity = dataReceived.humidity;
  ldr = dataReceived.ldr;
}


void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("❌ ESP-NOW başlatılamadı!");
    return;
  }

  esp_now_register_recv_cb(onReceive);  // Veri alımını başlat

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, slaveAddress, 6);
  peerInfo.channel = 0;  // Kanal bilgisi ekle
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("❌ ESP-NOW peer eklenemedi!");
    return;
  } else {
    Serial.println("✅ ESP-NOW Peer eklendi.");
  }

  tft.begin();
  tft.setRotation(1);
  uint16_t touch_cal_data[5] = { 260, 3375, 378, 3366, 1 };
  tft.setTouch(touch_cal_data);

  lv_init();
  lv_disp_draw_buf_init(&disp_buf, buf, NULL, LV_HOR_RES * LV_VER_RES / 10);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.draw_buf = &disp_buf;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.hor_res = LV_HOR_RES;
  disp_drv.ver_res = LV_VER_RES;
  lv_disp_drv_register(&disp_drv);

  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
  ui_init();
  ui_graph_series_1 = lv_chart_add_series(ui_graph, lv_color_hex(0xFF0000), LV_CHART_AXIS_PRIMARY_Y);  // Kırmızı
  ui_graph_series_2 = lv_chart_add_series(ui_graph, lv_color_hex(0x00FF00), LV_CHART_AXIS_PRIMARY_Y);  // Yeşil
  ui_graph_series_3 = lv_chart_add_series(ui_graph, lv_color_hex(0x0000FF), LV_CHART_AXIS_PRIMARY_Y);  // Mavi
}
void set_alarm(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  if (code == LV_EVENT_PRESSED) {  //  Butona basıldığında
    Serial.println("Butona basıldı!");
    send_msg.alarm = 1;
  } else if (code == LV_EVENT_RELEASED) {  // Buton bırakıldığında
    Serial.println("Buton bırakıldı!");
    send_msg.alarm = 0;
  }
}

void set_colors(lv_event_t *e) {
  uint16_t index = lv_roller_get_selected(ui_colors);
  if (index == 0) {
    send_msg.red = 1;
    send_msg.green = 0;
    send_msg.blue = 0;
  } else if (index == 1) {
    send_msg.red = 0;
    send_msg.green = 1;
    send_msg.blue = 0;
  } else if (index == 2) {
    send_msg.red = 0;
    send_msg.green = 0;
    send_msg.blue = 1;
  }
}

void slave_restart(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  if (code == LV_EVENT_PRESSED) {  // Butona basıldığında
    send_msg.reboot_status = 1;
  } else if (code == LV_EVENT_RELEASED) {  // Buton bırakıldığında
    send_msg.reboot_status = 0;
  }
}

void update_chart(float temp, float hum, int ldr) {
  lv_chart_set_next_value(ui_graph, ui_graph_series_1, temp);                       // Sıcaklık verisini ekle
  lv_chart_set_next_value(ui_graph, ui_graph_series_2, hum);                        // Nem verisini ekle
  lv_chart_set_next_value(ui_graph, ui_graph_series_3, map(ldr, 0, 1000, 0, 100));  // Nem verisini ekle

  lv_chart_refresh(ui_graph);  // Grafiği güncelle
}

void loop() {
  lv_timer_handler();

  // Verileri UI'ya yansıtma
  lv_label_set_text(ui_templabel, String(temp, 1).c_str());
  lv_label_set_text(ui_lightlabel, String(ldr).c_str());

  lv_label_set_text(ui_humidtylabel, String(humidity, 1).c_str());
  lv_arc_set_value(ui_temperature, int(temp));
  lv_arc_set_value(ui_humidity, int(humidity));
  lv_arc_set_value(ui_light, int(ldr));
  update_chart(temp, humidity, ldr);
  lv_obj_add_event_cb(ui_alarmbutton, set_alarm, LV_EVENT_PRESSED, NULL);
  lv_obj_add_event_cb(ui_alarmbutton, set_alarm, LV_EVENT_RELEASED, NULL);
  lv_obj_add_event_cb(ui_restartButton, slave_restart, LV_EVENT_PRESSED, NULL);
  lv_obj_add_event_cb(ui_restartButton, slave_restart, LV_EVENT_RELEASED, NULL);
  send_msg.id = 1;
  esp_now_send(slaveAddress, (uint8_t *)&send_msg, sizeof(send_msg));  // veriyi gönder
  delay(1);                                                            // UI'nin güncellenmesi için ufak bir gecikme
}
