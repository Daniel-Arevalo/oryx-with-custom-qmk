#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,       
    KC_MINUS,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    CW_TOGG,        KC_A,           MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_RALT, KC_I),KC_O,           KC_QUOTE,       
    KC_TRANSPARENT, MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         MT(MOD_RGUI, KC_SLASH),KC_DELETE,      
                                                    LT(1,KC_ENTER), LT(2,KC_TAB),                                   LT(4,KC_BSPC),  LT(3,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,                                        KC_NO,          LCTL(LSFT(KC_LBRC)),KC_NO,          KC_NO,          LCTL(LSFT(KC_RBRC)),KC_NO,          
    KC_CAPS,        LCTL(KC_A),     KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_NO,                                          KC_NO,          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TAB,                                         KC_BSPC,        LT(5,KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,                                        KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_SLASH,       KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_DOT,         KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT, 
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_BSPC,        KC_0
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TILD,        KC_DQUO,        KC_LBRC,        KC_ASTR,        KC_RBRC,                                        QK_LLCK,        KC_AT,          KC_PERC,        KC_AMPR,        KC_PIPE,        KC_NO,          
    KC_NO,          KC_QUES,        KC_DLR,         KC_LPRN,        KC_QUOTE,       KC_RPRN,                                        KC_SLASH,       KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_CIRC,        KC_NO,          
    KC_NO,          KC_LABK,        KC_EXLM,        KC_MINUS,       KC_EQUAL,       KC_PLUS,                                        KC_BSLS,        KC_UNDS,        KC_COMMA,       KC_HASH,        KC_RIGHT_GUI,   KC_TRANSPARENT, 
                                                    LT(5,KC_SPACE), KC_RABK,                                        KC_BSPC,        KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    LGUI(LCTL(KC_Q)),ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,RGB_TOG,                                        QK_LLCK,        RGB_HUI,        RGB_HUD,        RGB_SAI,        RGB_SAD,        KC_NO,          
    QK_DYNAMIC_TAPPING_TERM_PRINT,KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,RGB_MODE_FORWARD,                                KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_NO,          KC_NO,          
    QK_DYNAMIC_TAPPING_TERM_DOWN,KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_GUI,   KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,                                        KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_INSERT,      KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_BSPC,        KC_ENTER
  ),
};

const uint16_t PROGMEM combo0[] = { KC_EQUAL, KC_BSLS, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_Q, MT(MOD_RCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_L, MT(MOD_LCTL, KC_S), COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_LCTL, KC_S), MT(MOD_LSFT, KC_T), MT(MOD_LALT, KC_R), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(6)),
    COMBO(combo1, ST_MACRO_0),
    COMBO(combo2, ST_MACRO_1),
    COMBO(combo3, ST_MACRO_2),
    COMBO(combo4, LCTL(KC_S)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,188}, {217,255,255}, {217,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {217,255,255}, {217,255,255}, {217,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {179,255,255}, {0,0,0}, {0,0,0}, {179,255,255}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {169,168,255}, {169,168,255}, {169,168,255}, {169,168,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,188}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {172,255,255}, {198,255,255}, {220,255,255}, {0,0,255}, {0,0,0}, {0,0,255}, {80,255,255}, {123,255,255}, {153,255,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,255,255}, {19,255,255}, {45,255,255}, {0,0,255}, {0,0,0}, {0,255,255}, {200,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {139,255,255}, {18,255,255}, {79,255,255}, {18,255,255}, {0,0,0}, {139,255,255}, {139,255,255}, {18,255,255}, {139,255,255}, {18,255,255}, {0,0,0}, {217,255,255}, {217,255,255}, {79,255,255}, {217,255,255}, {79,255,255}, {0,0,0}, {217,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,188}, {139,255,255}, {139,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {18,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {139,255,255}, {0,0,0}, {18,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {43,255,255}, {0,0,0}, {0,255,255}, {0,0,0} },

    [4] = { {0,255,255}, {96,255,255}, {96,255,255}, {134,255,255}, {134,255,255}, {176,255,255}, {0,0,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {129,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {129,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {189,255,255}, {189,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,188}, {18,255,255}, {18,255,255}, {18,200,255}, {18,200,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {0,0,188}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,184,252}, {219,184,252}, {219,184,252}, {219,255,255}, {0,0,0}, {0,0,0}, {219,96,255}, {219,96,255}, {219,96,255}, {219,255,255}, {0,0,0}, {0,0,255}, {218,22,255}, {218,22,255}, {218,22,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {0,0,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {79,255,255}, {0,255,255}, {41,255,255}, {152,255,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_TAP(X_L)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_4));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_SCRL) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RIGHT_ALT) SS_DELAY(100) SS_TAP(X_RIGHT_ALT));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



