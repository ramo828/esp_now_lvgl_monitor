/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --font /home/ramiz/SquareLine/assets/Roboto-VariableFont_wdth,wght.ttf -o /home/ramiz/SquareLine/assets/ui_font_Font1.c --format lvgl -r 0x20-0x7f --symbols Ç,ç,Ğ,ğ,Ş,ş,Ü,ü,İ,ı,Ə,ə,Ö,ö --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfe, 0x20,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x13, 0x12, 0x12, 0xff, 0x26, 0x24, 0x24, 0xff,
    0x44, 0x4c, 0x48,

    /* U+0024 "$" */
    0x10, 0x20, 0xf3, 0xf4, 0x28, 0x48, 0xc, 0x5,
    0x6, 0xf, 0xf7, 0xc2, 0x4, 0x0,

    /* U+0025 "%" */
    0x60, 0x24, 0x9, 0x22, 0x58, 0x64, 0x2, 0x0,
    0xb8, 0x51, 0x24, 0x49, 0x10, 0x38,

    /* U+0026 "&" */
    0x38, 0x22, 0x11, 0x9, 0x83, 0x83, 0x83, 0x65,
    0x1a, 0x86, 0x63, 0x1f, 0x40,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x2, 0x44, 0x88, 0x88, 0x88, 0x84, 0x46, 0x20,

    /* U+0029 ")" */
    0x4, 0x22, 0x11, 0x11, 0x11, 0x12, 0x24, 0x40,

    /* U+002A "*" */
    0x10, 0x47, 0xc4, 0x29, 0xb0,

    /* U+002B "+" */
    0x10, 0x20, 0x40, 0x8f, 0xe2, 0x4, 0x8, 0x10,

    /* U+002C "," */
    0x54,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0xc, 0x20, 0x84, 0x10, 0xc2, 0x8, 0x41, 0x4,
    0x20,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0031 "1" */
    0x1f, 0x91, 0x11, 0x11, 0x11, 0x10,

    /* U+0032 "2" */
    0x79, 0x9a, 0x10, 0x20, 0x41, 0x4, 0x18, 0x60,
    0x83, 0xf8,

    /* U+0033 "3" */
    0x7b, 0x18, 0x41, 0xc, 0xe0, 0xc1, 0x87, 0x37,
    0x80,

    /* U+0034 "4" */
    0x4, 0x18, 0x50, 0xa2, 0x4c, 0x91, 0x7f, 0x4,
    0x8, 0x10,

    /* U+0035 "5" */
    0x7f, 0xc, 0x30, 0xfa, 0x30, 0x41, 0x87, 0x37,
    0x80,

    /* U+0036 "6" */
    0x1c, 0xc1, 0x4, 0xb, 0xd8, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0037 "7" */
    0xfe, 0xc, 0x10, 0x20, 0x81, 0x6, 0x8, 0x30,
    0x40, 0x80,

    /* U+0038 "8" */
    0x7b, 0x38, 0x61, 0xcd, 0xec, 0xe1, 0x87, 0x37,
    0x80,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0xde, 0x81, 0x4,
    0x19, 0xc0,

    /* U+003A ":" */
    0x81,

    /* U+003B ";" */
    0x40, 0x15, 0x40,

    /* U+003C "<" */
    0x4, 0x76, 0x30, 0x70, 0x30, 0x0,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x81, 0xe0, 0x70, 0x73, 0x9c, 0x0, 0x0,

    /* U+003F "?" */
    0x7b, 0x18, 0x41, 0xc, 0x63, 0x8, 0x0, 0x2,
    0x0,

    /* U+0040 "@" */
    0xf, 0x83, 0x4, 0x60, 0x24, 0x72, 0x89, 0x18,
    0x91, 0x99, 0x19, 0x11, 0x91, 0x19, 0xb2, 0x4c,
    0xe4, 0x0, 0x30, 0x1, 0xf0,

    /* U+0041 "A" */
    0xc, 0x7, 0x1, 0xc0, 0x58, 0x36, 0xc, 0x82,
    0x31, 0xfc, 0x61, 0x90, 0x2c, 0x8,

    /* U+0042 "B" */
    0xfd, 0xe, 0xc, 0x18, 0x5f, 0x21, 0xc1, 0x83,
    0xf, 0xf0,

    /* U+0043 "C" */
    0x3c, 0x46, 0x83, 0x83, 0x80, 0x80, 0x80, 0x80,
    0x83, 0x46, 0x3c,

    /* U+0044 "D" */
    0xf8, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0x86, 0xf8,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xe8, 0x20, 0x82, 0x8,
    0x0,

    /* U+0047 "G" */
    0x3c, 0x42, 0xc1, 0x80, 0x80, 0x80, 0x8f, 0x81,
    0xc1, 0x61, 0x3e,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xe0,

    /* U+004A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x83,
    0x8d, 0xf0,

    /* U+004B "K" */
    0x86, 0x8c, 0x88, 0x90, 0xb0, 0xf0, 0xd0, 0x98,
    0x8c, 0x86, 0x82,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+004D "M" */
    0xc0, 0xf0, 0x3c, 0xe, 0x85, 0xa1, 0x6c, 0xd9,
    0x26, 0x49, 0x8c, 0x63, 0x18, 0xc4,

    /* U+004E "N" */
    0x81, 0xc1, 0xe1, 0xa1, 0xb1, 0x99, 0x8d, 0x8d,
    0x87, 0x83, 0x81,

    /* U+004F "O" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc3, 0x42, 0x3c,

    /* U+0050 "P" */
    0xfd, 0xa, 0xc, 0x18, 0x30, 0xff, 0x40, 0x81,
    0x2, 0x0,

    /* U+0051 "Q" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc3, 0x42, 0x3e, 0x3, 0x0,

    /* U+0052 "R" */
    0xfd, 0xe, 0xc, 0x18, 0x30, 0xbe, 0x46, 0x85,
    0xe, 0x8,

    /* U+0053 "S" */
    0x3c, 0x63, 0x41, 0x40, 0x70, 0x1c, 0x7, 0x1,
    0x41, 0x63, 0x3e,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0xc0, 0xa0, 0xd8, 0x4c, 0x22, 0x31, 0x90, 0x48,
    0x2c, 0x1c, 0x6, 0x3, 0x0,

    /* U+0057 "W" */
    0x42, 0x1a, 0x18, 0xd1, 0xc4, 0xca, 0x26, 0x59,
    0x12, 0x58, 0xb2, 0x87, 0x14, 0x38, 0xe0, 0xc3,
    0x4, 0x18,

    /* U+0058 "X" */
    0x41, 0xb1, 0x8c, 0x82, 0xc1, 0xc0, 0x60, 0x70,
    0x2c, 0x32, 0x31, 0x90, 0x60,

    /* U+0059 "Y" */
    0x41, 0x31, 0x88, 0x86, 0xc1, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0xc, 0xc, 0x18, 0x30, 0x30,
    0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xb0,

    /* U+005C "\\" */
    0xc1, 0x6, 0x8, 0x20, 0xc1, 0x6, 0x8, 0x20,
    0xc1,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0x70,

    /* U+005E "^" */
    0x10, 0xc3, 0x1a, 0x49, 0x30,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x44,

    /* U+0061 "a" */
    0x7b, 0x10, 0x5f, 0xc6, 0x18, 0xdd,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x8a, 0xe0,

    /* U+0063 "c" */
    0x38, 0x8a, 0x14, 0x8, 0x10, 0xd1, 0x1c,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8,

    /* U+0065 "e" */
    0x3c, 0x8e, 0xf, 0xf8, 0x10, 0x11, 0x9e,

    /* U+0066 "f" */
    0x3a, 0x11, 0xe4, 0x21, 0x8, 0x42, 0x10,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x3,
    0x8d, 0xe0,

    /* U+0068 "h" */
    0x82, 0x8, 0x2e, 0xc6, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+0069 "i" */
    0x9f, 0xe0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x93, 0x80,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x9a, 0xce, 0x3c, 0x92, 0x68,
    0xc0,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xb9, 0xd8, 0xc6, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21,

    /* U+006E "n" */
    0xbb, 0x18, 0x61, 0x86, 0x18, 0x61,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0070 "p" */
    0xbd, 0x8a, 0xc, 0x18, 0x30, 0x71, 0x5c, 0x81,
    0x2, 0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x2,
    0x4, 0x8,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x7b, 0x1c, 0x1c, 0x1c, 0x1c, 0x5e,

    /* U+0074 "t" */
    0x44, 0xe4, 0x44, 0x44, 0x47,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0xdd,

    /* U+0076 "v" */
    0xc6, 0x89, 0x13, 0x62, 0x85, 0x6, 0x8,

    /* U+0077 "w" */
    0xc4, 0x68, 0xcd, 0x29, 0x35, 0x22, 0xbc, 0x73,
    0xc, 0x61, 0x8c,

    /* U+0078 "x" */
    0x46, 0xc8, 0xa0, 0xc1, 0x85, 0x19, 0x23,

    /* U+0079 "y" */
    0xc6, 0x89, 0x13, 0x62, 0x85, 0xe, 0x8, 0x10,
    0x61, 0x80,

    /* U+007A "z" */
    0xfc, 0x21, 0x8c, 0x21, 0xc, 0x3f,

    /* U+007B "{" */
    0x0, 0x88, 0x42, 0x10, 0x98, 0x21, 0x8, 0x42,
    0x8, 0x0,

    /* U+007C "|" */
    0xff, 0xf8,

    /* U+007D "}" */
    0x43, 0x8, 0x42, 0x10, 0xc3, 0x31, 0x8, 0x42,
    0x31, 0x0,

    /* U+007E "~" */
    0x71, 0x6c, 0xa1, 0x80,

    /* U+00C7 "Ç" */
    0x3c, 0x42, 0xc3, 0x81, 0x80, 0x80, 0x80, 0x80,
    0xc3, 0x42, 0x3c, 0x18, 0x8, 0x18,

    /* U+00D6 "Ö" */
    0x24, 0x0, 0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81,
    0x81, 0x81, 0xc3, 0x42, 0x3c,

    /* U+00DC "Ü" */
    0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00E7 "ç" */
    0x38, 0x8a, 0x14, 0x8, 0x10, 0xd1, 0x1c, 0x30,
    0x30, 0xc0,

    /* U+00F6 "ö" */
    0x44, 0x0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00FC "ü" */
    0x48, 0x0, 0x21, 0x86, 0x18, 0x61, 0x86, 0x37,
    0x40,

    /* U+011E "Ğ" */
    0x64, 0x24, 0x38, 0x3c, 0x42, 0xc1, 0x80, 0x80,
    0x80, 0x8f, 0x81, 0xc1, 0x61, 0x3e,

    /* U+011F "ğ" */
    0x44, 0x70, 0x1, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8, 0x1c, 0x6f, 0x0,

    /* U+0130 "İ" */
    0xbf, 0xf8,

    /* U+0131 "ı" */
    0xff,

    /* U+015E "Ş" */
    0x3c, 0x63, 0x41, 0x40, 0x70, 0x1c, 0x7, 0x1,
    0x41, 0x63, 0x3e, 0xc, 0x4, 0xc,

    /* U+015F "ş" */
    0x7b, 0x1c, 0x1c, 0x1c, 0x1c, 0x5e, 0x18, 0x21,
    0x80,

    /* U+018F "Ə" */
    0x7c, 0x1, 0x80, 0x40, 0x10, 0xf, 0xfe, 0x3,
    0x1, 0x81, 0x21, 0x8f, 0x80,

    /* U+0259 "ə" */
    0x72, 0x20, 0x41, 0xfe, 0x1c, 0x9c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 148, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 135, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 30, .adv_w = 176, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 42, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 58, .adv_w = 82, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 66, .adv_w = 84, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 74, .adv_w = 103, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 79, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 87, .adv_w = 47, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 88, .adv_w = 66, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 89, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 99, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 99, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 135, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 58, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 51, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 196, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 202, .adv_w = 132, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 205, .adv_w = 126, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 212, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 216, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 242, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 150, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 136, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 133, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 163, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 171, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 65, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 129, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 210, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 171, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 165, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 151, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 419, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 213, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 150, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 144, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 64, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 533, .adv_w = 99, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 542, .adv_w = 64, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 546, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 551, .adv_w = 108, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 552, .adv_w = 74, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 553, .adv_w = 131, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 610, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 58, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 57, .box_w = 3, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 627, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 58, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 210, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 133, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 672, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 682, .adv_w = 81, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 124, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 79, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 132, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 180, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 738, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 81, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 754, .adv_w = 59, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 756, .adv_w = 81, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 766, .adv_w = 163, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 770, .adv_w = 156, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 784, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 156, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 820, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 163, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 135, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 866, .adv_w = 65, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 59, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 143, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 883, .adv_w = 124, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 892, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 127, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0xf, 0x15, 0x20, 0x2f, 0x35, 0x57, 0x58,
    0x69, 0x6a, 0x97, 0x98, 0xc8, 0x192
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 199, .range_length = 403, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 14, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 3,
    3, 8,
    8, 3,
    8, 8,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -13, -13, -13, -13, -20, -20, -20, -20,
    -26
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 9,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT1*/

