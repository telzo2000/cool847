/* Copyright 2021 m.ki
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _LOWER,
    _UPPER
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    /* +------------------------------------------------------------------------+
    * | esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | [ | ] |
    * |-------------------------------------------------------------------------|
    * | ctrl|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  -  |enter  |
    * |-------------------------------------------------------------------------|
    * |shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  | up  |shift  |
    * |-------------------------------------------------------------------------|
    * | gui | alt |     |space|space|     |enter|space|     | left| down|right  |
    * +-----------+     +-----+-----+     +-----------+     +-------------------+
    */
    
    [_BASE] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,\
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS, KC_BSPC, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    LT(_UPPER,KC_V),LT(_LOWER,KC_B),LT(_LOWER,KC_B),LT(_FN,KC_N),KC_M,    KC_COMM, KC_DOT,  KC_UP,  KC_ENT,  \
        KC_LGUI, KC_LALT,          KC_SPACE,LT(_FN,KC_SPACE),LT(_LOWER,KC_ENTER),LSFT_T(KC_SPACE),  KC_LEFT,KC_DOWN,KC_RIGHT  ,KC_RSFT\
    ),
   /* FN */
    /* +-----------------------------------------------------------------------+
    * | esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | BS  |
    * |-----------------------------------------------------------------------|
    * | ctrl|  !  |  @  |  #  |  $  |  %  |  +  |  -  |  *  |  /  |  =  |enter|
    * |-----------------------------------------------------------------------|
    * |shift|  no |  no |  no |  no |  no  |  no  |  no | [ |  ]  | up  |shift|
    * |-----------------------------------------------------------------------|
    * | alt | gui |           |space|     |enter|space|     | left| down|right|
    * +-----------+           +-----+     +-----------+     +-----------------+
    */  
    [_FN] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,\
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS, KC_BSPC, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    LT(_UPPER,KC_V),LT(_LOWER,KC_B),LT(_LOWER,KC_B),LT(_FN,KC_N),KC_M,    KC_COMM, KC_DOT,  KC_UP,  KC_ENT,  \
        KC_LGUI, KC_LALT,          KC_SPACE,LT(_FN,KC_SPACE),LT(_LOWER,KC_ENTER),LSFT_T(KC_SPACE),  KC_LEFT,KC_DOWN,KC_RIGHT,  KC_RSFT \
    ),
    /* LOWER */
    /* +-----------------------------------------------------------------------+
    * | esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | BS  |
    * |-----------------------------------------------------------------------|
    * | ctrl|  [  |  ]  |  \  |  ;  |  :  | left| down|  up |right|  ?  |enter|
    * |-----------------------------------------------------------------------|
    * |shift|  -  |  |  |  ^  |  ~  | no  |  no |  no |  no |  no | up  |shift|
    * |-----------------------------------------------------------------------|
    * | alt | gui |           |space|     | no  |space|     | left| down|right|
    * +-----------+           +-----+     +-----------+     +-----------------+
    */  
    [_LOWER] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,\
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS, KC_BSPC, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    LT(_UPPER,KC_V),LT(_LOWER,KC_B),LT(_LOWER,KC_B),LT(_FN,KC_N),KC_M,    KC_COMM, KC_DOT,  KC_UP, KC_ENT,   \
        KC_LGUI, KC_LALT,          KC_SPACE,LT(_FN,KC_SPACE),LT(_LOWER,KC_ENTER),LSFT_T(KC_SPACE),  KC_LEFT,KC_DOWN,KC_RIGHT,KC_RSFT\
    ),
    /* UPPER */
    /* +----------------------------------------------------------------------------------------+
    * | esc |  !     |  @     |  #    |   $   |  %    |  ^    |  &    |  *    |  (  |  )  | BS  |
    * |-----------------------------------------------------------------------------------------|
    * | ctrl|RGB TOG |RGB MOD |RGB HUI|RGB HUD|RGB SAI|RGB SAD|RGB VAI|RGB VAD|  no |  no |enter|
    * |-----------------------------------------------------------------------------------------|
    * |shift|  no    |  no    |  no   |  no   |  no   |  no   |  no   |  no   |  no | up  |shift|
    * |-----------------------------------------------------------------------------------------|
    * | alt | gui    |                |space  |       |reset  |space  |       | left| down|right|
    * +--------------+                +-------+       +---------------+       +-----------------+
    */  
    [_UPPER] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,\
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS, KC_BSPC, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    LT(_UPPER,KC_V),LT(_LOWER,KC_B),LT(_LOWER,KC_B),LT(_FN,KC_N),KC_M,    KC_COMM, KC_DOT,  KC_UP,  KC_ENT,  \
        KC_LGUI, KC_LALT,          KC_SPACE,LT(_FN,KC_SPACE),LT(_LOWER,KC_ENTER),LSFT_T(KC_SPACE),  KC_LEFT,KC_DOWN,KC_RIGHT,  KC_RSFT\
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

