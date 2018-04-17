#include "fourier.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

enum {
  TD_BR = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_BR]  = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC)
};

#define KC_ KC_TRNS
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_FN1 MO(_FN1)
#define KC_FN2 MO(_FN2)
#define KC_SPFN1 LT(_FN1, KC_SPACE)
#define KC_SPFN2 LT(_FN2, KC_SPACE)
#define KC_ENFN1 LT(_FN1, KC_ENTER)
#define KC_ENFN2 LT(_FN2, KC_ENTER)
#define KC_QUOTFN1 LT(_FN1, KC_QUOT)
#define KC_RST RESET
#define KC_DBUG DEBUG
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_TDBRC TD(0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = KC_KEYMAP(
 //,----+----+----+----+----+----|----+----+----+----+----+----+----.
    TAB , Q  , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,TDBRC,BSPC,
 //|----`----`----`----`----`----|----`----`----`----`----`----`----|
    LCTL  , A  , S  , D  , F  , G  , H  , J  , K  , L  ,SCLN,QUOTFN1,
 //|-----`----`----`----`----`----|----`----`----`----`----`--------|
    LSFT   , Z  , X  , C  , V  , B  , N  , M  ,COMM, DOT ,SLSH, FN2 ,
 //|-------`----`----`----`----`----|----`----`----`----`----`------|
    FN1, LALT, LGUI ,SPACE , ENFN1  ,  SPFN1, RGUI , GRV , DEL , ESC
 //`-----+----+-----+----+--------|--------+-----+-----+-----+------'
  ),

  [_FN1] = KC_KEYMAP(
 //,----+----+----+----+----+----|----+----+----+----+----+----+----.
    GRV , 1  , 2  , 3  , 4  , 5  , 6  , 7  , 8  , 9  , 0  ,MINS,EQL ,
 //|----`----`----`----`----`----|----`----`----`----`----`----`----|
      , , , ,              ,LBRC,   RBRC, 4  , 5  , 6  ,   ,        ,
 //|-----`----`----`----`----`----|----`----`----`----`----`--------|
       , , , ,               ,LCBR,  RCBR,   1  , 2  , 3  , UP ,    ,
 //|-------`----`----`----`----`----|----`----`----`----`----`------|
     ,    ,   ,    ,        ,              ,  0  ,LEFT ,DOWN , RGHT
 //`-----+----+-----+----+--------|--------+-----+-----+-----+------'
  ),

  [_FN2] = KC_KEYMAP(
 //,----+----+----+----+----+----|----+----+----+----+----+----+----.
    TILD,EXLM, AT ,HASH,DLR ,PERC,CIRC,AMPR,ASTR,LPRN,RPRN,UNDS,PLUS,
 //|----`----`----`----`----`----|----`----`----`----`----`----`----|
         ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,
 //|-----`----`----`----`----`----|----`----`----`----`----`--------|
           ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,      ,
 //|-------`----`----`----`----`----|----`----`----`----`----`------|
         ,    ,     ,    ,        ,        ,     ,     ,     ,
 //`-----+----+-----+----+--------|--------+-----+-----+-----+------'
  )

};
