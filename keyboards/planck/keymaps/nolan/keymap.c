#include "planck.h"
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_F1,    KC_F5,    KC_F9,    KC_TOGG,  KC_LSFT,  KC_DEL,   KC_BSPC,    KC_ESC,     KC_7,     KC_8,     KC_9,     KC_F1,
		KC_F2,    KC_F6,    KC_F10,   KC_VOLU,  KC_TAB,   KC_UP,    KC_ENT,     KC_LCTRL,   KC_4,     KC_5,     KC_6,     KC_F2,
		KC_F3,    KC_F7,    KC_F11,   KC_VOLD,  KC_LEFT,  KC_DOWN,  KC_RIGHT,   KC_LALT,    KC_1,     KC_2,     KC_3,     KC_F3,
		KC_F4,    KC_F8,    KC_F12,   MO(1),    MO(2),    KC_SPC,               KC_LGUI,    KC_0,     KC_ENT,   KC_DOT,   KC_F4),

	KEYMAP(
		KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPLY,  KC_TRNS,  KC_PGUP,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MSTP,  KC_HOME,  KC_PGDN,  KC_END,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,              KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

	KEYMAP(
		KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPLY,  KC_TRNS,  KC_PGUP,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MSTP,  KC_HOME,  KC_PGDN,  KC_END,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,              KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
