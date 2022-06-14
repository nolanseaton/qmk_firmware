/* Copyright 2021 projectcain
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
enum layers{
  BASE,
  NUM,
  SYM,
  META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOTE,   
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  
                            MO(1),  SFT_T(KC_BSPC), KC_SPACE,   MO(2)        
  ),

  [NUM] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_KP_SLASH,    KC_7,    KC_8,    KC_9,    KC_MINUS,    KC_BSPC,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_KP_ASTERISK,    KC_4,    KC_5,    KC_6,    KC_PLUS,   
     KC_LCPO,    KC_X,    KC_C,    KC_V,    KC_B,    KC_0,    KC_1,    KC_2, KC_3,  KC_RAPC,  
                                 MO(1),  SFT_T(KC_BSPC), KC_SPACE,   MO(2)
  ),
  
  [SYM] = LAYOUT(
    S(KC_GRV),    KC_GRV,    KC_TRNS,    S(KC_BSLS),    KC_BSLS,    KC_TRNS,    S(KC_MINS),    KC_EQL,    KC_TRNS,    C(KC_W),    RESET,
    S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    S(KC_5),    S(KC_6),    S(KC_7),    S(KC_8),    KC_SCLN,    S(KC_SCLN),   
     S(KC_LBRC),    KC_LBRC,    RGB_TOG,    RGB_VAI,    RGB_HUI,    RGB_SAI,    RGB_MOD,    KC_F8,    KC_RBRC,    S(KC_RBRC),  
                                   MO(1),  SFT_T(KC_BSPC), KC_SPACE,   MO(2)
  ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    return true;
}

enum combos {
  KL_SLSH,
  JK_MINUS,
  LQUOTE_ENTER,
  QW_ESC,
  AS_TAB
};

const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM lquote_combo[] = {KC_L, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [KL_SLSH] = COMBO(kl_combo, S(KC_SLSH)),
  [JK_MINUS] = COMBO(jk_combo, KC_MINUS),
  [LQUOTE_ENTER] = COMBO(lquote_combo, KC_ENTER),
  [QW_ESC] = COMBO(qw_combo, KC_ESC),
  [AS_TAB] = COMBO(as_combo, KC_TAB)
};
