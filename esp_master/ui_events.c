// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
bool dark_mode = false;

void switch_theme(lv_event_t* e) {
  dark_mode = !dark_mode;
  if (dark_mode) {
    lv_imgbtn_set_src(ui_darkandlight, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_84851999, NULL);
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x222222), LV_PART_MAIN);
    lv_obj_set_style_text_color(lv_scr_act(), lv_color_hex(0xFFFFFF), LV_PART_MAIN);
  } else {
    lv_imgbtn_set_src(ui_darkandlight, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_432815713, NULL);
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0xFFFFFF), LV_PART_MAIN);
    lv_obj_set_style_text_color(lv_scr_act(), lv_color_hex(0x000000), LV_PART_MAIN);
  }
}
