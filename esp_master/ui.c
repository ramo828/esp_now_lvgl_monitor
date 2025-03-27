// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_ekran
void ui_ekran_screen_init(void);
lv_obj_t * ui_ekran;
lv_obj_t * ui_temperature;
lv_obj_t * ui_templabel;
lv_obj_t * ui_temperaturelogo;
lv_obj_t * ui_humidity;
lv_obj_t * ui_humidtylabel;
lv_obj_t * ui_humiditylogo;
lv_obj_t * ui_light;
lv_obj_t * ui_lightlogo;
lv_obj_t * ui_lightlabel;
void ui_event_colors(lv_event_t * e);
lv_obj_t * ui_colors;
void ui_event_alarmbutton(lv_event_t * e);
lv_obj_t * ui_alarmbutton;
void ui_event_ImgButton1(lv_event_t * e);
lv_obj_t * ui_ImgButton1;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_colors(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        set_colors(e);
    }
}

void ui_event_alarmbutton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        set_alarm(e);
    }
}

void ui_event_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        slave_restart(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ekran_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_ekran);
}
