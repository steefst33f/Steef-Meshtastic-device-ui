#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BATTERY_EMPTY_WARN_IMAGE
#define LV_ATTRIBUTE_IMG_BATTERY_EMPTY_WARN_IMAGE
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY_EMPTY_WARN_IMAGE
uint8_t img_battery_empty_warn_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xd9,0xd9,0xd9,0x00,0xff,0xff,0xff,0x00,0xdd,0xdd,0xdd,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x00,0xf2,0xf2,0xf2,0x00,0xdc,0xdc,0xdc,0x00,0xdd,0xdd,0xdd,0x00,0xdc,0xdc,0xdc,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x00,0xdc,0xdc,0xdc,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x00,0xd9,0xd9,0xd9,0x00,0xda,0xda,0xda,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xdc,0xdc,0xdc,0x00,0xdb,0xdb,0xdb,0x00,0xe0,0xe0,0xe0,0x00,0xdc,0xdc,0xdc,0x04,0xde,0xde,0xde,0x0b,0xdd,0xdd,0xdd,0x0c,0xdc,0xdc,0xdc,0x06,0xe1,0xe1,0xe1,0x00,0xff,0xff,0xff,0x00,0xdc,0xdc,0xdc,0x06,0xd6,0xd6,0xd6,0x01,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x05,0xdd,0xdd,0xdd,0x0c,0xde,0xde,0xde,0x0c,0xdd,0xdd,0xdd,0x06,0xe1,0xe1,0xe1,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x00,0x00,0x00,0x00,0x00,
    0xda,0xda,0xda,0x00,0xe8,0xe8,0xe8,0x00,0xdf,0xdf,0xdf,0x42,0xe0,0xe0,0xe0,0xac,0xe0,0xe0,0xe0,0xc8,0xe0,0xe0,0xe0,0xcb,0xdf,0xdf,0xdf,0xa6,0xde,0xde,0xde,0x12,0xdf,0xdf,0xdf,0x25,0xe0,0xe0,0xe0,0xac,0xdf,0xdf,0xdf,0x3e,0xdc,0xdc,0xdc,0x05,0xdf,0xdf,0xdf,0x8f,0xe0,0xe0,0xe0,0xcc,0xe0,0xe0,0xe0,0xc9,0xe0,0xe0,0xe0,0xb6,0xdf,0xdf,0xdf,0x57,0xdb,0xdb,0xdb,0x02,0xdd,0xdd,0xdd,0x00,0x00,0x00,0x00,0x00,
    0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x24,0xe0,0xe0,0xe0,0xdb,0xe0,0xe0,0xe0,0xf1,0xe0,0xe0,0xe0,0xcc,0xe0,0xe0,0xe0,0xcb,0xe0,0xe0,0xe0,0xa6,0xde,0xde,0xde,0x10,0xe0,0xe0,0xe0,0x48,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0x6d,0xda,0xda,0xda,0x03,0xdf,0xdf,0xdf,0x8f,0xe0,0xe0,0xe0,0xcc,0xe0,0xe0,0xe0,0xca,0xe0,0xe0,0xe0,0xe9,0xe0,0xe0,0xe0,0xed,0xdf,0xdf,0xdf,0x3e,0xdf,0xdf,0xdf,0x00,0x00,0x00,0x00,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x52,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x76,0xdd,0xdd,0xdd,0x0a,0xde,0xde,0xde,0x0c,0xdd,0xdd,0xdd,0x06,0xe0,0xe0,0xe0,0x00,0xe0,0xe0,0xe0,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0x6d,0xe0,0xe0,0xe0,0x00,0xdd,0xdd,0xdd,0x05,0xde,0xde,0xde,0x0c,0xdd,0xdd,0xdd,0x09,0xdf,0xdf,0xdf,0x55,0xe0,0xe0,0xe0,0xfc,0xdf,0xdf,0xdf,0x77,0xe1,0xe1,0xe1,0x00,0xd8,0xd8,0xd8,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x00,0xe0,0xe0,0xe0,0x00,0xe0,0xe0,0xe0,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0x6d,0xe0,0xe0,0xe0,0x00,0xdd,0xdd,0xdd,0x00,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x38,0xe0,0xe0,0xe0,0xf6,0xdf,0xdf,0xdf,0x80,0xe1,0xe1,0xe1,0x00,0xe1,0xe1,0xe1,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x5b,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xe0,0xe0,0x00,0xe0,0xe0,0xe0,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0x6d,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x39,0xe0,0xe0,0xe0,0xf5,0xe0,0xe0,0xe0,0xc6,0xdf,0xdf,0xdf,0x23,0xdf,0xdf,0xdf,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x5b,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xe0,0xe0,0x00,0xe0,0xe0,0xe0,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0x6d,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x39,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x59,0xe0,0xe0,0xe0,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x5b,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xe0,0xe0,0x00,0xe0,0xe0,0xe0,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0x6d,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x39,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x59,0xe0,0xe0,0xe0,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x5b,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xe0,0xe0,0x00,0xe0,0xe0,0xe0,0x4a,0xe0,0xe0,0xe0,0xfc,0xe0,0xe0,0xe0,0x6e,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x39,0xe0,0xe0,0xe0,0xf5,0xe0,0xe0,0xe0,0xc6,0xdf,0xdf,0xdf,0x23,0xdf,0xdf,0xdf,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x5a,0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x40,0xe0,0xe0,0xe0,0xf0,0xdf,0xdf,0xdf,0x62,0xe0,0xe0,0xe0,0x00,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x38,0xe0,0xe0,0xe0,0xf6,0xdf,0xdf,0xdf,0x80,0xe1,0xe1,0xe1,0x00,0xe1,0xe1,0xe1,0x00,
    0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x52,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0x76,0xdd,0xdd,0xdd,0x0a,0xdf,0xdf,0xdf,0x0c,0xde,0xde,0xde,0x06,0xe0,0xe0,0xe0,0x00,0xde,0xde,0xde,0x0c,0xdf,0xdf,0xdf,0x4b,0xde,0xde,0xde,0x15,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x05,0xdf,0xdf,0xdf,0x0c,0xde,0xde,0xde,0x09,0xdf,0xdf,0xdf,0x55,0xe0,0xe0,0xe0,0xfc,0xdf,0xdf,0xdf,0x77,0xe1,0xe1,0xe1,0x00,0xd8,0xd8,0xd8,0x00,
    0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x24,0xe0,0xe0,0xe0,0xdb,0xe0,0xe0,0xe0,0xf1,0xe0,0xe0,0xe0,0xcb,0xe0,0xe0,0xe0,0xcb,0xe0,0xe0,0xe0,0xa6,0xde,0xde,0xde,0x12,0xdf,0xdf,0xdf,0x25,0xe0,0xe0,0xe0,0xac,0xdf,0xdf,0xdf,0x3f,0xdc,0xdc,0xdc,0x05,0xdf,0xdf,0xdf,0x8f,0xe0,0xe0,0xe0,0xcb,0xe0,0xe0,0xe0,0xca,0xe0,0xe0,0xe0,0xe8,0xe0,0xe0,0xe0,0xee,0xdf,0xdf,0xdf,0x3e,0xdf,0xdf,0xdf,0x00,0x00,0x00,0x00,0x00,
    0xda,0xda,0xda,0x00,0xe8,0xe8,0xe8,0x00,0xdf,0xdf,0xdf,0x42,0xe0,0xe0,0xe0,0xad,0xe0,0xe0,0xe0,0xc8,0xe0,0xe0,0xe0,0xcb,0xe0,0xe0,0xe0,0xa6,0xde,0xde,0xde,0x12,0xdf,0xdf,0xdf,0x26,0xe0,0xe0,0xe0,0xb0,0xdf,0xdf,0xdf,0x40,0xdc,0xdc,0xdc,0x05,0xdf,0xdf,0xdf,0x8f,0xe0,0xe0,0xe0,0xcc,0xe0,0xe0,0xe0,0xc9,0xe0,0xe0,0xe0,0xb6,0xdf,0xdf,0xdf,0x57,0xdb,0xdb,0xdb,0x02,0xdd,0xdd,0xdd,0x00,0x00,0x00,0x00,0x00,
    0xdc,0xdc,0xdc,0x00,0xdb,0xdb,0xdb,0x00,0xe0,0xe0,0xe0,0x00,0xdc,0xdc,0xdc,0x04,0xde,0xde,0xde,0x0b,0xdf,0xdf,0xdf,0x0c,0xde,0xde,0xde,0x06,0xe2,0xe2,0xe2,0x00,0xff,0xff,0xff,0x00,0xdd,0xdd,0xdd,0x06,0xd8,0xd8,0xd8,0x01,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x05,0xdf,0xdf,0xdf,0x0c,0xde,0xde,0xde,0x0c,0xdd,0xdd,0xdd,0x06,0xe1,0xe1,0xe1,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xd9,0xd9,0xd9,0x00,0xff,0xff,0xff,0x00,0xdd,0xdd,0xdd,0x00,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xff,0xff,0xff,0x00,0xdc,0xdc,0xdc,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x00,0xd9,0xd9,0xd9,0x00,0xda,0xda,0xda,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_battery_empty_warn_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 20,
  .header.h = 20,
  .header.stride = 80,
  .data_size = sizeof(img_battery_empty_warn_image_map),
  .data = img_battery_empty_warn_image_map,
};

