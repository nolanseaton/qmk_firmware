/* Copyright 2022 Nathan Spears
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

// Left-hand home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LGUI_T(KC_F)
#define HOME_G LT(2, KC_G)
#define HOME_B LT(3, KC_B)

// Right-hand home row mods
#define HOME_H LT(1, KC_H)
#define HOME_J RGUI_T(KC_J)
#define HOME_K LALT_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SC RSFT_T(KC_SCLN)
#define HOME_N LT(3, KC_N)

// Thumb mods
#define BSPC_LYR LT(1, KC_BSPC)
#define SPC_LYR LT(2, KC_SPC)
#define QT_LYR LT(3, KC_QUOT)
#define TAB_SHFT LSFT_T(KC_TAB)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


  [0] = LAYOUT_2x3u(
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_LCTL, HOME_A,  HOME_S,  HOME_D,  HOME_F,  HOME_G,  HOME_H,  HOME_J,  HOME_K,  HOME_L,  HOME_SC, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    HOME_B,  HOME_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
      KC_LALT, KC_LGUI,          BSPC_LYR,         KC_ENT,           SPC_LYR,          KC_RGUI, KC_RALT, KC_RCTL
    ),


  [1] = LAYOUT_2x3u(
      KC_TRNS, KC_ESC,  KC_NO,   KC_ENT,  KC_TAB,  KC_NO,   KC_PGUP, KC_NO,   KC_UP,   KC_NO,   KC_HOME, KC_TRNS,
      KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,   KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_TRNS,
      KC_TRNS, KC_DEL,  KC_INS,  KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
      KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),


  [2] = LAYOUT_2x3u(
      KC_TRNS, KC_GRV,  KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_7,    KC_8,    KC_9,    KC_EQL,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_4,    KC_5,    KC_6,    KC_MINS, KC_TRNS,
      KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_0,    KC_1,    KC_2,    KC_3,    KC_BSLS, KC_TRNS,
      KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),

  [3] = LAYOUT_2x3u(
      RESET,   KC_TILD, KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_AMPR, KC_ASTR, KC_LPRN, KC_PLUS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_DLR,  KC_PERC, KC_CIRC, KC_UNDS, KC_TRNS,
      KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_RPRN, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_TRNS,
      KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),
  };


const uint16_t PROGMEM lparen_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM rparen_combo[] = {KC_M, KC_COMM, COMBO_END};

const uint16_t PROGMEM lbracket_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM rbracket_combo[] = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM lcbracket_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM rcbracket_combo[] = {KC_DOT, KC_SLSH, COMBO_END};

const uint16_t PROGMEM quote_combo[] = {HOME_F, HOME_J, COMBO_END};
const uint16_t PROGMEM dquote_combo[] = {HOME_D, HOME_K, COMBO_END};
const uint16_t PROGMEM grv_combo[] = {HOME_S, HOME_L, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(lparen_combo, KC_LPRN),
    COMBO(rparen_combo, KC_RPRN),

    COMBO(lbracket_combo, KC_LBRC),
    COMBO(rbracket_combo, KC_RBRC),

    COMBO(lcbracket_combo, KC_LCBR),
    COMBO(rcbracket_combo, KC_RCBR),

    COMBO(quote_combo, KC_QUOT),
    COMBO(dquote_combo, KC_DQT),
    COMBO(grv_combo, KC_GRV)
};

/* The encoder_update_user is a function.
 * It'll be called by QMK every time you turn the encoder.
 *
 * The index parameter tells you which encoder was turned. If you only have
 * one encoder, the index will always be zero.
 *
 * The clockwise parameter tells you the direction of the encoder. It'll be
 * true when you turned the encoder clockwise, and false otherwise.
 */
bool encoder_update_user(uint8_t index, bool clockwise) {
  /* With an if statement we can check which encoder was turned. */
  if (index == 1) {
    if (clockwise) {
      tap_code(KC_LEFT);
    } else {
      tap_code(KC_RIGHT);
    }
  }
  return false;
}
