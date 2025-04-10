/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

// TODO: redefine keymaps to use more semantic names

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC, 
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              KC_LGUI,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
                                          //`--------------------------'  `--------------------------'
    ),

    //                                         LAYER 0
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  q  |  w  |  e  |  r  |  t  |            |  y  |  u  |  i  |  o  |  p  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |  a  |  s  |  d  |  f  |  g  |            |  h  |  j  |  k  |  l  |  ñ  |  ´  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |  z  |  x  |  c  |  v  |  b  |            |  n  |  m  |  ,  |  .  |  -  | ESC |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI   LY1   SPC    ENT   LY2   ALT
    //                          ----- ----- -----  ----- ----- ----- 


    //                                     SHIFTED LAYER 0
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  Q  |  W  |  E  |  R  |  T  |            |  Y  |  U  |  I  |  O  |  P  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |  A  |  S  |  D  |  F  |  G  |            |  H  |  J  |  K  |  L  |  Ñ  |  ¨  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |  Z  |  X  |  C  |  V  |  B  |            |  N  |  M  |  ;  |  :  |  _  | ESC |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI   LY1   SPC    ENT   LY2   ALT
    //                          ----- ----- -----  ----- ----- ----- 

    //                                       ALT LAYER 0
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  œ  |  æ  |  €  |  ®  |  †  |            |  ¥  |     |     |  ø  |  π  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |  å  |  ∫  |  ∂  |  ƒ  |    |            |  ™  |  ¶  |  §  |     |  ~  |  {  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |  ∑  |  ©  |  √  |  ß  |            |     |  µ  |  „  |  …  |  –  | ESC |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI   LY1   SPC    ENT   LY2   ALT
    //                          ----- ----- -----  ----- ----- ----- 

    [1] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL,   KC_NO,   KC_NO,   KC_NO, MS_BTN1, MS_BTN2,                        KC_NO,   KC_NO,   KC_UP,   KC_NO, KC_MINS, KC_LBRC, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO, KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_NO, 
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                          //`--------------------------'  `--------------------------'
    ),

    //                                         LAYER 1
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  1  |  2  |  3  |  4  |  5  |            |  6  |  7  |  8  |  9  |  0  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |     |     |     | RCK | LCK |            |     |     |  UP |     |  '  |  `  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |     |     |     |     |            |     | LFT | DWN | RGT |     |     |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI         SPC    ENT   LY3   ALT
    //                          ----- ----- -----  ----- ----- ----- 


    //                                     SHIFTED LAYER 1
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  !  |  "  |  ·  |  $  |  %  |            |  &  |  /  |  (  |  )  |  =  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |     |     |     | RCK | LCK |            |     |     |  UP |     |  ?  |  ^  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |     |     |     |     |            |     | LFT | DWN | RGT |     |     |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI         SPC    ENT   LY3   ALT
    //                          ----- ----- -----  ----- ----- ----- 

    //                                       ALT LAYER 1
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  |  |  @  |  #  |  ¢  |  ∞  |            |  ¬  |  ÷  |  “  |  ”  |  ≠  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |     |     |     | RCK | LCK |            |     |     |  UP |     |  ´  |  [  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |     |     |     |     |            |     | LFT | DWN | RGT |     |     |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI         SPC    ENT   LY3   ALT
    //                          ----- ----- -----  ----- ----- ----- 

    [2] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_TAB,  KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL,   KC_NO, KC_NUBS, LSFT(KC_NUBS), LSFT(KC_EQL), LSFT(KC_MINS),     KC_RBRC, KC_RCBR, RALT(KC_LBRC), RALT(KC_RBRC), KC_AT, KC_EXLM, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT,   RALT(KC_SCLN), RALT(KC_GRV), KC_AMPR, KC_EQL, KC_EXLM,          KC_SLSH, RALT(KC_GRV), RALT(KC_QUOT), RALT(KC_NUHS), KC_LCBR, KC_PMNS, 
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                                          //`--------------------------'  `--------------------------'
    ),

    //                                         LAYER 2
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  !  |  "  |  ·  |  $  |  %  |            |  &  |  /  |  (  |  )  |  =  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |     |  <  |  >  |  ¿  |  ?  |            |  +  |  *  |  [  |  ]  |  "  |  !  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |  \  |  /  |  ¡  |  !  |            |  -  |  \  |  {  |  }  |  ^  | ESC |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI   LY3   SPC    ENT         ALT
    //                          ----- ----- -----  ----- ----- ----- 


    //                                     SHIFTED LAYER 2
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  !  |  "  |  ·  |  $  |  %  |            |  &  |  /  |  (  |  )  |  =  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |     |  >  |  >  |  ¿  |  ?  |            |  *  |  *  |  ˆ  |  ±  |  "  |  !  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |  °  |  /  |  ¿  |  !  |            |  _  |  °  |  «  |  »  |  ^  | ESC |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI   LY3   SPC    ENT         ALT
    //                          ----- ----- -----  ----- ----- ----- 

    //                                       ALT LAYER 2
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | TAB |  ı  |  ˝  |  •  |  £  |  ‰  |            |     |  ⁄  |  ‘  |  ’  |  ≈  | BSP |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | CTR |     |  ≤  |  ≥  |  ˛  |  ¸  |            |  ]  |  ±  |  [  |  ]  |  ˝  |  ı  |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | SFT |     |  \  |  ⁄  |  ‚  |  ı  |            |  –  |  \  |  {  |  }  |  ˆ  | ESC |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI   LY3   SPC    ENT         ALT
    //                          ----- ----- -----  ----- ----- ----- 

    [3] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,   KC_NO,   KC_NO,                      KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY,   KC_NO,   KC_NO, 
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          RM_NEXT, RM_HUED, RM_SATD, RM_VALD,   KC_NO,   KC_NO,                      KC_MPRV, KC_MNXT,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                                          //`--------------------------'  `--------------------------'
    )

    //                                         LAYER 3
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | RST | F01 | F02 | F03 | F04 | F05 |            | F06 | F07 | F08 | F09 | F10 | F11 |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // |     |     |     |     |     |     |            | VDN | VUP | MUT | PLY |     |     |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // |     |     |     |     |     |     |            | PRV | NXT |     |     |     |     |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI         SPC    ENT         ALT
    //                          ----- ----- -----  ----- ----- ----- 


    //                                     SHIFTED LAYER 3
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | RST | F01 | F02 | F03 | F04 | F05 |            | F06 | F07 | F08 | F09 | F10 | F11 |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // |     |     |     |     |     |     |            | VDN | VUP | MUT | PLY |     |     |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // |     |     |     |     |     |     |            | PRV | NXT |     |     |     |     |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI         SPC    ENT         ALT
    //                          ----- ----- -----  ----- ----- ----- 

    //                                       ALT LAYER 3
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // | RST | F01 | F02 | F03 | F04 | F05 |            | F06 | F07 | F08 | F09 | F10 | F11 |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // |     |     |     |     |     |     |            | VDN | VUP | MUT | PLY |     |     |
    //  ----- ----- ----- ----- ----- -----              ----- ----- ----- ----- ----- -----
    // |     |     |     |     |     |     |            | PRV | NXT |     |     |     |     |
    //  ----- ----- ----- ----- ----- ----- -----  ----- ----- ----- ----- ----- ----- -----
    //                           GUI         SPC    ENT         ALT
    //                          ----- ----- -----  ----- ----- ----- 
};

/** DEFAULT */
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
//                                       //`--------------------------'  `--------------------------'

//   ),

//     [1] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//        KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
//                                       //`--------------------------'  `--------------------------'
//   ),

//     [2] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//        KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
//                                       //`--------------------------'  `--------------------------'
//   ),

//     [3] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//       QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
//                                       //`--------------------------'  `--------------------------'
//   )
// };

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
