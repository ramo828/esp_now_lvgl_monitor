#include <esp_now.h>
#include <WiFi.h>
#include <DHT11.h>

DHT11 sensor(7);

#define RED 6
#define GREEN 5
#define BLUE 4
#define BUZZER 8
#define LDR 17
// Gönderilecek veri yapısı
typedef struct {
  int id;
  float temperature;
  float humidity;
  int ldr;
} DataPacket;

typedef struct {
  int id;
  uint8_t red;  // bool yerine uint8_t kullan
  uint8_t green;
  uint8_t blue;
  uint8_t alarm;
  uint8_t reboot_status;
} ReceivePacket;

ReceivePacket receive_msg;
DataPacket send_msg;

uint8_t masterAddress[] = { 0x24, 0xDC, 0xC3, 0x4B, 0x06, 0x5C };

void onReceive(const esp_now_recv_info_t *info, const uint8_t *incomingData, int len) {
  memcpy(&receive_msg, incomingData, sizeof(receive_msg));  // Gelen veriyi al

  Serial.print("Red: ");
  Serial.println(receive_msg.red);
  Serial.print("Green: ");
  Serial.println(receive_msg.green);
  Serial.print("Blue: ");
  Serial.println(receive_msg.blue);

  // LED renklerini güncelle
  digitalWrite(RED, receive_msg.red == 1 ? HIGH : LOW);
  digitalWrite(GREEN, receive_msg.green == 1 ? HIGH : LOW);
  digitalWrite(BLUE, receive_msg.blue == 1 ? HIGH : LOW);
  Serial.println(receive_msg.alarm);
  if (receive_msg.alarm == 1) {
    tone(BUZZER, 600);
    delay(50);
  } else noTone(BUZZER);
  if(receive_msg.reboot_status == 1){
    esp_restart();
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(LDR, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW başlatılamadı!");
    return;
  }

  esp_now_register_recv_cb(onReceive);

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, masterAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("ESP-NOW peer eklenemedi!");
    return;
  }
}

void loop() {
  int istilik, nemlik;
  int result = sensor.readTemperatureHumidity(istilik, nemlik);

  if (result == 0) {  // Okuma başarılıysa güncelle
    send_msg.temperature = istilik;
    send_msg.humidity = nemlik;
  }

  send_msg.ldr = map(analogRead(LDR), 0, 4095, 0, 1000);
  send_msg.id = 1;

  esp_now_send(masterAddress, (uint8_t *)&send_msg, sizeof(send_msg));

  delay(1000);  // Sensör okumasını stabilize etmek için 1 saniye bekle
}
