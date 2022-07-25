// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "config_common.h"

#define MATRIX_ROWS 10
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS {C6, D7, E6, B4, B5}

// wiring of each half
#define MATRIX_COL_PINS {F6, F7, B1, B3, B2, B6}
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define SPLIT_USB_DETECT
#define RGB_DI_PIN D3
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#define DRIVER_LED_TOTAL 70
#define RGB_MATRIX_SPLIT { 35, 35 }
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
