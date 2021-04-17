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


//#define DEVICE_VER      0x0001


//#define SPLIT_HAND_MATRIX_GRID B2, B4
//#define SPLIT_HAND_MATRIX_GRID_LOW_IS_RIGHT

#undef EE_HANDS
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#undef MATRIX_ROW_PINS_RIGHT
#undef MATRIX_COL_PINS_RIGHT
#undef LED_CAPS_LOCK_PIN
#undef LED_SCROLL_LOCK_PIN


#define SPLIT_HAND_PIN A0
#define SOFT_SERIAL_PIN B6  // USART TX pin
#define SERIAL_USART_SPEED 921600

#define LED_CAPS_LOCK_PIN C13
#define LED_PIN_ON_STATE 0

//No-Go pins: A8, A9, A11, A12, B2
/* pin-out */
#define MATRIX_ROW_PINS { B14, B15, A10, A15, B3, B4, B5 }
#define MATRIX_COL_PINS { B0, A7, A6, A5, A4, A3 }
#define MATRIX_ROW_PINS_RIGHT { B0, A7, A6, A5, A4, A3, A2}
#define MATRIX_COL_PINS_RIGHT { B14, B15, A10, A15, B3, B4}

#define I2C1_SCL 8
#define I2C1_SDA 9
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

#define EEPROM_I2C_24LC256
#define OLED_DISPLAY_128X64