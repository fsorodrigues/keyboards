/* Copyright 2023 ~ 2025 @ Keychron (https://www.keychron.com)
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
    MAC_BASE,
    MAC_FN,
    MAC_NUMPAD,
    WIN_BASE,
    WIN_FN,
    WIN_NUMPAD,
};


#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_90_ansi(
        KC_MUTE,    KC_CAPS,  KC_BRID,      KC_BRIU,      KC_MCTL,      KC_LPAD,      UG_VALD,              UG_VALU,              KC_MPRV,      KC_MPLY,      KC_MNXT,      KC_MUTE,         KC_VOLD, KC_VOLU,    KC_INS,  KC_DEL,
        LCMD(KC_C), KC_GRV,   KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                 KC_6,                 KC_7,         KC_8,         KC_9,         KC_0,            KC_MINS, KC_EQL,     KC_BSPC, KC_PGUP,
        LCMD(KC_V), KC_TAB,   KC_Q,         KC_W,         KC_E,         KC_R,         LT(MAC_FN, KC_T),     LT(MAC_NUMPAD, KC_Y), KC_U,         KC_I,         KC_O,         KC_P,            KC_LBRC, KC_RBRC,    KC_BSLS, KC_PGDN,
        LCMD(KC_X), KC_ESC,   LCMD_T(KC_A), LOPT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), LT(MAC_NUMPAD, KC_G), LT(MAC_FN, KC_H),     RCTL_T(KC_J), RSFT_T(KC_K), ROPT_T(KC_L), RCMD_T(KC_SCLN), KC_QUOT, KC_ENT,              KC_HOME,
        LCMD(KC_Z), KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                 KC_B,                 KC_N,         KC_M,         KC_COMM,      KC_DOT,          KC_SLSH, MO(MAC_FN), KC_UP,
        LSG(KC_Z),  KC_LCTL,  KC_LOPTN,                   KC_LCMMD,     KC_SPC,       MO(MAC_NUMPAD),       KC_SPC,               KC_RCMMD,                   KC_RCTL,                                KC_LEFT,    KC_DOWN, KC_RGHT),

    [MAC_FN] = LAYOUT_90_ansi(
        UG_TOGG,    _______,  KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,                KC_F6,                KC_F7,         KC_F8,       KC_F9,         KC_F10,         KC_F11,  KC_F12,     _______, _______,
        _______,    _______,  BT_HST1,      BT_HST2,      BT_HST3,      _______,      _______,              _______,              _______,       _______,     _______,       _______,        _______, _______,    _______, _______,
        _______,    _______,  S(KC_4),      KC_MINS,      S(KC_LBRC),   S(KC_RBRC),   S(KC_EQL),            _______,              _______,       _______,     _______,       _______,        _______, _______,    _______, _______,
        _______,    _______,  S(KC_7),      S(KC_8),      S(KC_9),      S(KC_0),      KC_EQL,               KC_LEFT,              KC_DOWN,       KC_UP,       KC_RGHT,       _______,        _______, _______,             _______,
        _______,    _______,  S(KC_2),      S(KC_1),      KC_LBRC,      KC_RBRC,      S(KC_MINS),           BAT_LVL,              NK_TOGG,       _______,     _______,       _______,        _______, _______,    _______,
        _______,    _______,  _______,                    _______,      _______,      _______,              _______,                             _______,                    _______,                 _______,    _______, _______),

    [MAC_NUMPAD] = LAYOUT_90_ansi(
        _______,    _______,  _______,      _______,      _______,      _______,      _______,              _______,              _______,       _______,     _______,       _______,        _______, _______, _______,  _______,
        _______,    _______,  _______,      _______,      _______,      _______,      _______,              _______,              _______,       _______,     KC_ASTR,       KC_SLSH,        _______, _______, _______,  _______,
        _______,    UG_TOGG,  UG_NEXT,      UG_VALU,      UG_HUEU,      UG_SATU,      UG_SPDU,              _______,              KC_7,          KC_8,        KC_9,          KC_MINS,        _______, _______, _______,  _______,
        _______,    _______,  UG_PREV,      UG_VALD,      UG_HUED,      UG_SATD,      UG_SPDD,              _______,              KC_4,          KC_5,        KC_6,          S(KC_EQL),      _______, _______,           KC_END,
        _______,    _______,  _______,      NK_TOGG,      _______,      _______,      _______,              _______,              KC_COMM,       KC_1,        KC_2,          KC_3,           KC_ENT,  _______, _______,
        _______,    _______,  _______,                    _______,      _______,      _______,                                    KC_0,          KC_DOT,                     _______,                 _______, _______,  _______),

    [WIN_BASE] = LAYOUT_90_ansi(
        KC_MUTE,    KC_CAPS,  KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,                KC_F6,                KC_F7,        KC_F8,        KC_F9,        KC_F10,          KC_F11,  KC_F12,     KC_INS,  KC_DEL,
        LCTL(KC_C), KC_GRV,   KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                 KC_6,                 KC_7,         KC_8,         KC_9,         KC_0,            KC_MINS, KC_EQL,     KC_BSPC, KC_PGUP,
        LCTL(KC_V), KC_TAB,   KC_Q,         KC_W,         KC_E,         KC_R,         LT(WIN_FN, KC_T),     LT(WIN_NUMPAD, KC_Y), KC_U,         KC_I,         KC_O,         KC_P,            KC_LBRC, KC_RBRC,    KC_BSLS, KC_PGDN,
        LCTL(KC_X), KC_ESC,   LWIN_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), LT(WIN_NUMPAD, KC_G), LT(WIN_FN, KC_H),     RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RWIN_T(KC_SCLN), KC_QUOT, KC_ENT,              KC_HOME,
        LCTL(KC_Z), KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                 KC_B,                 KC_N,         KC_M,         KC_COMM,      KC_DOT,          KC_SLSH, MO(WIN_FN), KC_UP,
        LCTL(KC_Y), KC_LCTL,  KC_LWIN,                    KC_LALT,      KC_SPC,       MO(WIN_NUMPAD),       KC_SPC,               KC_RALT,                    KC_RCTL,                                KC_LEFT,    KC_DOWN, KC_RGHT),

    [WIN_FN] = LAYOUT_90_ansi(
        UG_TOGG,    _______,  KC_BRID,      KC_BRIU,      KC_TASK,      KC_FILE,      UG_VALD,              UG_VALU,              KC_MPRV,       KC_MPLY,     KC_MNXT,       KC_MUTE,        KC_VOLD, KC_VOLU,    _______, _______,
        _______,    _______,  BT_HST1,      BT_HST2,      BT_HST3,      _______,      _______,              _______,              _______,       _______,     _______,       _______,        _______, _______,    _______, _______,
        _______,    _______,  S(KC_4),      KC_MINS,      S(KC_LBRC),   S(KC_RBRC),   S(KC_EQL),            _______,              _______,       _______,     _______,       _______,        _______, _______,    _______, _______,
        _______,    _______,  S(KC_7),      S(KC_8),      S(KC_9),      S(KC_0),      KC_EQL,               KC_LEFT,              KC_DOWN,       KC_UP,       KC_RGHT,       _______,        _______, _______,             _______,
        _______,    _______,  S(KC_2),      S(KC_1),      KC_LBRC,      KC_RBRC,      S(KC_MINS),           BAT_LVL,              NK_TOGG,       _______,     _______,       _______,        _______, _______,    _______,
        _______,    _______,  _______,                    _______,      _______,      _______,              _______,                             _______,                    _______,                 _______,    _______, _______),

    [WIN_NUMPAD] = LAYOUT_90_ansi(
        _______,    _______,  _______,      _______,      _______,      _______,      _______,              _______,              _______,       _______,     _______,       _______,        _______, _______, _______,  _______,
        _______,    _______,  _______,      _______,      _______,      _______,      _______,              _______,              _______,       _______,     KC_ASTR,       KC_SLSH,        _______, _______, _______,  _______,
        _______,    UG_TOGG,  UG_NEXT,      UG_VALU,      UG_HUEU,      UG_SATU,      UG_SPDU,              _______,              KC_7,          KC_8,        KC_9,          KC_MINS,        _______, _______, _______,  _______,
        _______,    _______,  UG_PREV,      UG_VALD,      UG_HUED,      UG_SATD,      UG_SPDD,              _______,              KC_4,          KC_5,        KC_6,          S(KC_EQL),      _______, _______,           KC_END,
        _______,    _______,  _______,      NK_TOGG,      _______,      _______,      _______,              _______,              KC_COMM,       KC_1,        KC_2,          KC_3,           KC_ENT,  _______, _______,
        _______,    _______,  _______,                    _______,      _______,      _______,                                    KC_0,          KC_DOT,                     _______,                 _______, _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]     = { ENCODER_CCW_CW(UG_VALD, UG_VALU) },
    [MAC_NUMPAD] = { ENCODER_CCW_CW(UG_VALD, UG_VALU) },
    [WIN_BASE]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]     = { ENCODER_CCW_CW(UG_VALD, UG_VALU) },
    [WIN_NUMPAD] = { ENCODER_CCW_CW(UG_VALD, UG_VALU) },
};
#endif // ENCODER_MAP_ENABLE
