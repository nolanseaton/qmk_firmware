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
  NAV,
  NUM,
  SYM
};

// Left-hand home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LGUI_T(KC_F)
#define HOME_G LT(2, KC_G)

// Right-hand home row mods
#define HOME_H LT(2, KC_H)
#define HOME_J RGUI_T(KC_J)
#define HOME_K LALT_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SC RSFT_T(KC_SCLN)

// Thumb mods
#define BSPC_LYR LT(1, KC_BSPC)
#define SPC_LYR LT(1, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    HOME_A,  HOME_S,  HOME_D,  HOME_F,  HOME_G,  HOME_H,  HOME_J,  HOME_K,  HOME_L,  HOME_SC,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                            MO(3),  BSPC_LYR, SPC_LYR,  KC_QUOT
  ),

  [NAV] = LAYOUT(
    KC_ESC,  KC_NO,   KC_ENT,  KC_TAB,  KC_LPRN, KC_RPRN, KC_NO,   KC_UP,   KC_NO,    KC_NO,   KC_TRNS,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LCBR, KC_RCBR, KC_NO,   KC_NO,   KC_NO,    KC_NO,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [NUM] = LAYOUT(
    KC_GRV,  KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_7,    KC_8,    KC_9,    KC_EQL,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_4,    KC_5,    KC_6,    KC_MINS,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_0,    KC_1,    KC_2,    KC_3,    KC_BSLS,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [SYM] = LAYOUT(
    KC_TILD, KC_NO,   KC_NO,   RESET,   KC_NO,   KC_NO,   KC_AMPR, KC_ASTR, KC_LPRN, KC_PLUS, KC_DEL,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_DLR,  KC_PERC, KC_CIRC, KC_UNDS,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RPRN, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

};

const uint16_t PROGMEM quote_combo[] = {HOME_F, HOME_J, COMBO_END};
const uint16_t PROGMEM dquote_combo[] = {HOME_D, HOME_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(quote_combo, KC_QUOT),
    COMBO(dquote_combo, KC_DQT)
};
