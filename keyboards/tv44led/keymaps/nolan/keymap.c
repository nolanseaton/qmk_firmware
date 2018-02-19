#include "tv44.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _QW 0
#define _L1 1
#define _L2 2

// Macro name shortcuts
#define QWERTY M(_QW)

// Curly braces have their own keys. These are defined to make them not mess up
// the grid in layer 2.
#define L_CURBR LSFT(KC_LBRC)
#define R_CURBR LSFT(KC_RBRC)

// Fillers to make layering more clear
#define _______ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = KEYMAP_ARROW( /* Qwerty */
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  LT(_L1, KC_QUOT),
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  MO(_L2),
    MO(_L1),  KC_LALT,  KC_LGUI,  KC_ENT,             KC_SPC,             KC_ESC,             KC_GRV,   KC_LBRC,  KC_RBRC
  ),
  [_L1] = KEYMAP_ARROW( /* LAYER 1 */
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    _______,  KC_VOLU, KC_VOLD, KC_MPLY,  _______,  _______,  _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_UP,    _______,
    _______,  _______,  _______,  _______,            _______,            _______,            KC_LEFT,  KC_DOWN,  KC_RIGHT
  ),
  [_L2] = KEYMAP_ARROW( /* LAYER 2 */
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_DEL,
    _______,  KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  BL_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,  _______,
    _______,  _______,  _______,  _______,            _______,            _______,            KC_HOME,  KC_PGDN,  KC_END
  )
};

const uint16_t PROGMEM fn_actions[] = {

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case _QW:
          if (record->event.pressed) {
            persistent_default_layer_set(1UL<<_QW);
          }
          break;
      }
    return MACRO_NONE;
};
