// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_ekran_screen_init(void)
{
    ui_ekran = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ekran, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ekran, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ekran, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ekran, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temperature = lv_arc_create(ui_ekran);
    lv_obj_set_width(ui_temperature, 101);
    lv_obj_set_height(ui_temperature, 137);
    lv_obj_set_x(ui_temperature, -105);
    lv_obj_set_y(ui_temperature, -47);
    lv_obj_set_align(ui_temperature, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_temperature, LV_STATE_DISABLED);       /// States
    lv_arc_set_value(ui_temperature, 50);
    lv_obj_set_style_bg_img_src(ui_temperature, &ui_img_temperature_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_temperature, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_temperature, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_templabel = lv_label_create(ui_temperature);
    lv_obj_set_width(ui_templabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_templabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_templabel, 0);
    lv_obj_set_y(ui_templabel, 47);
    lv_obj_set_align(ui_templabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_templabel, "17.0");
    lv_obj_set_style_text_font(ui_templabel, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_humidity = lv_arc_create(ui_ekran);
    lv_obj_set_width(ui_humidity, 101);
    lv_obj_set_height(ui_humidity, 137);
    lv_obj_set_x(ui_humidity, -1);
    lv_obj_set_y(ui_humidity, -47);
    lv_obj_set_align(ui_humidity, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_humidity, LV_STATE_DISABLED);       /// States
    lv_arc_set_value(ui_humidity, 50);
    lv_obj_set_style_bg_img_src(ui_humidity, &ui_img_humidity_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_humidity, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_humidity, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_humidtylabel = lv_label_create(ui_humidity);
    lv_obj_set_width(ui_humidtylabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_humidtylabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_humidtylabel, 1);
    lv_obj_set_y(ui_humidtylabel, 47);
    lv_obj_set_align(ui_humidtylabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_humidtylabel, "50.0");
    lv_obj_set_style_text_font(ui_humidtylabel, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_light = lv_arc_create(ui_ekran);
    lv_obj_set_width(ui_light, 101);
    lv_obj_set_height(ui_light, 137);
    lv_obj_set_x(ui_light, 105);
    lv_obj_set_y(ui_light, -47);
    lv_obj_set_align(ui_light, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_light, LV_STATE_DISABLED);       /// States
    lv_arc_set_range(ui_light, 0, 1000);
    lv_arc_set_value(ui_light, 100);
    lv_obj_set_style_bg_img_src(ui_light, &ui_img_1536731275, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_light, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_light, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_lightlabel = lv_label_create(ui_light);
    lv_obj_set_width(ui_lightlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lightlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lightlabel, 0);
    lv_obj_set_y(ui_lightlabel, 47);
    lv_obj_set_align(ui_lightlabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lightlabel, "500");
    lv_obj_set_style_text_font(ui_lightlabel, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colors = lv_roller_create(ui_ekran);
    lv_roller_set_options(ui_colors, "RED\nGREEN\nBLUE", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_colors, 132);
    lv_obj_set_height(ui_colors, 41);
    lv_obj_set_x(ui_colors, -89);
    lv_obj_set_y(ui_colors, 97);
    lv_obj_set_align(ui_colors, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_colors, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_colors, 100, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_colors, lv_color_hex(0x632DEC), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colors, 200, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_colors, lv_color_hex(0x4D0BC7), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_colors, 40, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_colors, 5, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_alarmbutton = lv_imgbtn_create(ui_ekran);
    lv_imgbtn_set_src(ui_alarmbutton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_781912046, NULL);
    lv_imgbtn_set_src(ui_alarmbutton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_bell_png, NULL);
    lv_obj_set_width(ui_alarmbutton, 30);
    lv_obj_set_height(ui_alarmbutton, 31);
    lv_obj_set_x(ui_alarmbutton, -133);
    lv_obj_set_y(ui_alarmbutton, 54);
    lv_obj_set_align(ui_alarmbutton, LV_ALIGN_CENTER);

    ui_restartButton = lv_imgbtn_create(ui_ekran);
    lv_imgbtn_set_src(ui_restartButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_restart_png, NULL);
    lv_imgbtn_set_src(ui_restartButton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1257822616, NULL);
    lv_obj_set_width(ui_restartButton, 32);
    lv_obj_set_height(ui_restartButton, 31);
    lv_obj_set_x(ui_restartButton, -94);
    lv_obj_set_y(ui_restartButton, 54);
    lv_obj_set_align(ui_restartButton, LV_ALIGN_CENTER);

    ui_graph = lv_chart_create(ui_ekran);
    lv_obj_set_width(ui_graph, 174);
    lv_obj_set_height(ui_graph, 97);
    lv_obj_set_x(ui_graph, 67);
    lv_obj_set_y(ui_graph, 66);
    lv_obj_set_align(ui_graph, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_graph, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui_graph, 5, 5);
    lv_chart_set_axis_tick(ui_graph, LV_CHART_AXIS_PRIMARY_X, 1, 0, 0, 0, false, 50);
    lv_chart_set_axis_tick(ui_graph, LV_CHART_AXIS_PRIMARY_Y, 0, 5, 0, 0, false, 50);
    lv_chart_set_axis_tick(ui_graph, LV_CHART_AXIS_SECONDARY_Y, 0, 0, 0, 0, false, 25);
    lv_obj_set_style_bg_img_recolor(ui_graph, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_graph, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_graph, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_graph, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_size(ui_graph, 3, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_darkandlight = lv_imgbtn_create(ui_ekran);
    lv_imgbtn_set_src(ui_darkandlight, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_432815713, NULL);
    lv_imgbtn_set_src(ui_darkandlight, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_84851999, NULL);
    lv_imgbtn_set_src(ui_darkandlight, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_84851999, NULL);
    lv_obj_set_width(ui_darkandlight, 32);
    lv_obj_set_height(ui_darkandlight, 32);
    lv_obj_set_x(ui_darkandlight, -49);
    lv_obj_set_y(ui_darkandlight, 54);
    lv_obj_set_align(ui_darkandlight, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_colors, ui_event_colors, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_alarmbutton, ui_event_alarmbutton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_restartButton, ui_event_restartButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_darkandlight, ui_event_darkandlight, LV_EVENT_ALL, NULL);

}
