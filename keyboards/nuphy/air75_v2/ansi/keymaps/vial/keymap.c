/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer 0
[0] = LAYOUT_ansi_84(
	KC_ESC, 	TD(1),  	TD(2),  	TD(3), 	TD(4), TD(5),  TD(6),  	TD(7),  	TD(8),  	TD(9), 	TD(10), 	TD(11), 	TD(12), 	TD(13),	TD(14),		TD(15),
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	TD(0), 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_CAPS,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LGUI,	KC_LALT,	KC_LCTL,										KC_SPC, 							KC_RGUI,	TO(0),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),

// layer 1
[1] = LAYOUT_ansi_84(
	KC_ESC, 	KC_BRID,  	KC_BRIU,  	MAC_TASK, 	MAC_SEARCH, MAC_VOICE,  MAC_DND,  	KC_MPRV,  	KC_MPLY,  	KC_MNXT, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	MAC_PRTA,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_CAPS,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LGUI,	KC_LALT,	KC_LCTL,										KC_SPC, 							KC_RGUI,	TO(0),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),

// layer 2
[2] = LAYOUT_ansi_84(
	KC_ESC, 	KC_BRID,  	KC_BRIU,  	MAC_TASK, 	MAC_SEARCH, MAC_VOICE,  MAC_DND,  	KC_MPRV,  	KC_MPLY,  	KC_MNXT, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	MAC_PRTA,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_CAPS,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LGUI,	KC_LALT,	KC_LCTL,										KC_SPC, 							KC_RGUI,	TO(0),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),

// layer 3
[3] = LAYOUT_ansi_84(
	KC_ESC, 	KC_BRID,  	KC_BRIU,  	MAC_TASK, 	MAC_SEARCH, MAC_VOICE,  MAC_DND,  	KC_MPRV,  	KC_MPLY,  	KC_MNXT, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	MAC_PRTA,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_CAPS,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LGUI,	KC_LALT,	KC_LCTL,										KC_SPC, 							KC_RGUI,	TO(0),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),

// layer 4
[3] = LAYOUT_ansi_84(
	KC_ESC, 	KC_BRID,  	KC_BRIU,  	MAC_TASK, 	MAC_SEARCH, MAC_VOICE,  MAC_DND,  	KC_MPRV,  	KC_MPLY,  	KC_MNXT, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	MAC_PRTA,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_CAPS,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LGUI,	KC_LALT,	KC_LCTL,										KC_SPC, 							KC_RGUI,	TO(0),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),	

};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 0:
	    rgblight_sethsv_noeeprom(HSV_BLACK);	
        rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
        break;
    case 1:
        rgblight_sethsv_noeeprom(HSV_RED);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
        rgb_matrix_set_speed_noeeprom(50);
        break;
    case 2:
        rgblight_sethsv_noeeprom(HSV_GREEN);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_PIXEL_FRACTAL);	
        rgb_matrix_set_speed_noeeprom(40);
        break;
    case 3:
        rgblight_sethsv_noeeprom(HSV_BLUE);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_PIXEL_FRACTAL);	
        rgb_matrix_set_speed_noeeprom(40);
        break;		
    default: //  for any other layers, or the default layer
	    rgblight_sethsv_noeeprom(HSV_BLACK);	
        rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
        break;				
    }
  return state;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = 32; i < 35; i++) {             // Q = 32
                rgb_matrix_set_color(i, 99,114,255);
        }
        for (uint8_t i = 47; i < 50; i++) {             // A = 47
                rgb_matrix_set_color(i, 99,114,255);
        }
        for (uint8_t i = 61; i < 64; i++) {             // Z = 61
                rgb_matrix_set_color(i, 99,114,255);
        }
        for (uint8_t i = 35; i < 38; i++) {             // R = 35
                rgb_matrix_set_color(i, 170,255,254);
        }
        for (uint8_t i = 50; i < 53; i++) {             // F = 50
                rgb_matrix_set_color(i, 6,0,255);
        }
        for (uint8_t i = 64; i < 67; i++) {             // V = 64
                rgb_matrix_set_color(i, 170,255,254);
        }
        for (uint8_t i = 38; i < 42; i++) {             // U = 38
                rgb_matrix_set_color(i, 6,0,255);
        }
        for (uint8_t i = 53; i < 56; i++) {             // J = 53
                rgb_matrix_set_color(i, 170,255,254);
        }
        for (uint8_t i = 67; i < 68; i++) {             // M = 67
                rgb_matrix_set_color(i, 6,0,255);
        }
    }
    return false;
}





