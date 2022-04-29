/* Copyright 2021 KnoblesseOblige
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

enum layer_names {
    _BASE,
    _NAV,
    _NUM,
    _SYM
};

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
    /* Base */
    [_BASE] = LAYOUT_default(
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        KC_TAB, HOME_A, HOME_S, HOME_D, HOME_F, HOME_G, HOME_H, HOME_J, HOME_K, HOME_L, HOME_SC, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, HOME_B, HOME_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_RSFT,
        KC_ESC, KC_LCTL, KC_LALT, KC_LGUI, BSPC_LYR, SPC_LYR, KC_TAB, KC_RGUI, KC_RALT, KC_RCTL
    ),
    [_NAV] = LAYOUT_default(
        _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_NUM] = LAYOUT_default(
        _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_SYM] = LAYOUT_default(
        _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
