/* Copyright 2020 Dimitris Papavasiliou <dpapavas@protonmail.ch>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x2718
#define DEVICE_VER      0x0001
#define MANUFACTURER    Nisker
#define PRODUCT         Keeb

//#define SPLIT_HAND_MATRIX_GRID B2, B4
//#define SPLIT_HAND_MATRIX_GRID_LOW_IS_RIGHT

#define SPLIT_HAND_PIN A0
#define SOFT_SERIAL_PIN B6  // USART TX pin
#define SERIAL_USART_SPEED 921600

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 6


//No-Go pins: A8, A9, A11, A12
/* pin-out */
#define MATRIX_ROW_PINS { B14, B15, A10, A15, B3, B4, B5 }
#define MATRIX_COL_PINS { B2, B1, B0, A7, A6, A5 }
#define MATRIX_ROW_PINS_RIGHT { B2, B1, B0, A7, A6, A5, A4 }
#define MATRIX_COL_PINS_RIGHT { B14, B15, A10, A15, B3, B4}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5