#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"
#include <myconfig.h>

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

// #define USE_I2C

// #define MASTER_LEFT
// #define _MASTER_RIGHT
#define EE_HANDS


#endif
