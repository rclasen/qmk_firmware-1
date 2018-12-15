#include <mykeys.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* keymap: BASE
 *
 * .-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |
 * |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |
 * |------+------+------+------+------+------|
 * | GHK  |   q  |   w  |   e  |   e  |   r  |
 * |------+------+------+------+------+------|
 * | tab  |   a  |   s  |   d  |   d  |   f  |
 * |------+------+------+------+------|------|
 * |      |   z  |   x  |   c  |   v  |   b  |
 * | lsft |------+------+------+------+------'
 * |      | tab  |      |      | fMOS |
 * '----------------------------------'
 *                                           .--------------------.
 *                                           |      | MENU |      |
 *                                           |------+------+------|
 *                                           |      |      |      |
 *                                           | LSFT | fNAV |------|
 *                                           |      |      | ESC  |
 *                                           '--------------------'

 * .------------------------------------------------.
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      | PgUp |BSpace|  up  | Del  | PgDn |      |
 * |------+------+------+------+------+------+------|
 * | GHK  | Home | left | down | right| End  | Print|
 * |------+------+------+------+------+------+------|
 * | sIns | Esc  | Tab  | Ins  | Enter| Space| BASE |
 * '------------------------------------------------'

 *                      .-----------------------------------------.
 *                      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 *                      |------+------+------+-------------+------|
 *                      |   6  |   7  |   8  |   9  |   0  | volup|
 *                      |------+------+------+-------------+------|
 *                      |   y  |   u  |   i  |   o  |   p  | vold |
 *                      |------+------+------+-------------+------|
 *                      |   j  |   k  |   k  |   l  | COMP |      |
 *                      |------+------+------+------|------+------|
 *                      |   n  |   m  |   ,  |   ,  | enter|      |
 *                      '------+------+------+------+------| rsft |
 *                             | fSYM |      | rctl | lgui |      |
 *                             '----------------------------------'
 * .--------------------.
 * |  up  |      |      |
 * |------+------+------|
 * | down |      |      |
 * |------| BSPC | Space|
 * |      |      |      |
 * '--------------------'
 */

[BASE] = KEYMAP( \
        // left well
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,
        XM_GHK,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,
        KC_TAB,     TX_A,       TX_S,       TX_D,       TX_F,       KC_G,
        XM_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,
                    KC_TAB,     XXXXXXX,    XXXXXXX,    XL_MOS,
        // left thumb
                                                        XXXXXXX,    KC_APP,     XXXXXXX,
                                                        XM_LSFT,    XL_NAV,     XXXXXXX,
                                                                                KC_ESC,

        // center
        RGB_TOG,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    RGB_VAD,
        RGB_MOD,    KC_PGUP,    KC_BSPC,    KC_UP,      KC_DEL,     KC_PGDN,    XXXXXXX,
        XM_GHK,     KC_HOME,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_END,     KC_PSCR,
        S_INS,      KC_ESC,     KC_TAB,     KC_INS,     KC_ENTER,   KC_SPACE,   MC_BASE,

        // right hand
                    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
                    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_VOLU,
                    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_VOLD,
                    KC_H,       TX_J,       TX_K,       TX_L,       TX_COMP,    XXXXXXX,
                    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_ENTER,   XM_RSFT,
                                XL_SYM,     XXXXXXX,    XM_RCTL,    XM_LGUI,
        // right thumb
        KC_UP,      XXXXXXX,    XXXXXXX,
        KC_DOWN,    KC_BSPC,    KC_SPACE,
        XXXXXXX
 ),

/* keymap: Symbol Layer
 *
 * .-----------------------------------------.
 * |      |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * |      |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * |      |  @   |  _   |  [   |  ]   |   ^  |
 * |------+------+------+------+------+------|
 * |      |  \   |  /   |  {   |  }   |   *  |
 * |------+------+------+------+------+------|
 * |      |  #   |  $   |  |   |  ~   |   `  |
 * |      |------+------+------+------+------'
 * |      |      |      |      |      |
 * '----------------------------------'
 *                                           .--------------------.
 *                                           |      |      |      |
 *                                           |------+------+------|
 *                                           |      |      |      |
 *                                           |      |      |------|
 *                                           |      |      |      |
 *                                           '--------------------'

 * .------------------------------------------------.
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * '------------------------------------------------'

 *                      .-----------------------------------------.
 *                      |      |      |      |      |      |      |
 *                      |------+------+------+------+------+------|
 *                      |      |      |      |      |      |      |
 *                      |------+------+------+------+------+------|
 *                      |  !   |  <   |  >   |  =   |  &   |      |
 *                      |------+------+------+------+------+------|
 *                      |  ?   |  (   |  )   |  -   |  :   |      |
 *                      |------+------+------+------+------+------|
 *                      |  +   |  %   |  "   |  '   |  ;   |      |
 *                      '------+------+------+------+------|      |
 *                             |      |      |      |      |      |
 *                             '----------------------------------'
 * .--------------------.
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * |------|      |      |
 * |      |      |      |
 * '--------------------'
 */

[SYM] = KEYMAP(
       // left well
       _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______,
       _______, KC_AT,   KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC,
       _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR,
       _______, KC_HASH, KC_DLR,  KC_PIPE, KC_TILD, KC_GRV,
                _______, _______, _______, _______,
       // left thumb
                                           _______, _______, _______,
                                           _______, _______, _______,
                                                             _______,

       // center
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,

       // right well
                _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______,
                KC_EXLM, KC_LABK, KC_RABK, KC_EQL,  KC_AMPR, _______,
                KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, _______,
                KC_PLUS, KC_PERC, KC_DQT,  KC_QUOT, KC_SCLN, _______,
                         _______, _______, _______, _______,
       // right thumb
       _______, _______, _______,
       _______, _______, _______,
       _______
),

/* keymap: navigation and keypad
 *
 * .-----------------------------------------.
 * |      |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * |      |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * |      | PgUp | BSpac| up   | Del  | PgDn |
 * |------+------+------+------+------+------|
 * |      | Home | left | down | right| End  |
 * |------+------+------+------+------+------|
 * |      | Esc  | sIns | Ins  | Enter| space|
 * |      |------+------+------+------+------'
 * |      | GHK  |      |      |      |
 * '----------------------------------'
 *                                           .--------------------.
 *                                           |      |      |      |
 *                                           |------+------+------|
 *                                           |      |      |      |
 *                                           |      |      |------|
 *                                           |      |      |      |
 *                                           '--------------------'

 * .------------------------------------------------.
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * '------------------------------------------------'

 *                      .-----------------------------------------.
 *                      |      |      |      |      |      |      |
 *                      |------+------+------+------+------+------|
 *                      | Tab  |NumLck|  /   |  *   |      |      |
 *                      |------+------+------+------+------+------|
 *                      |  -   |  7   |  8   |  9   |  +   |      |
 *                      |------+------+------+------+------+------|
 *                      |  .   |  4   |  5   |  6   |  ,   |      |
 *                      |------+------+------+------+------+------|
 *                      |  :   |  1   |  2   |  3   |  ;   |      |
 *                      '------+------+------+------+------|      |
 *                             |  0   |  0   |      |      |      |
 *                             '----------------------------------'
 * .--------------------.
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * |------|      |      |
 * |      |      |      |
 * '--------------------'
 */

[NAV] = KEYMAP(
       // left well
       _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______,
       _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN,
       _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT,KC_END,
       _______, KC_ESC,  S_INS,   KC_INS,  KC_ENTER,KC_SPACE,
                XM_GHK,  _______, _______, _______,
       // left thumb
                                           _______, _______, _______,
                                           _______, _______, _______,
                                                             _______,

       // center
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,

       // right well
                _______, _______, _______, _______, _______, _______,
                KC_TAB,  KC_NLCK, KC_SLSH, KC_ASTR, _______, _______,
                MC_MINS, MC_7,    MC_8,    MC_9,    MC_PLUS, _______,
                MC_DOT,  TX_4,    TX_5,    TX_6,    TX_COMM, _______,
                MC_COLN, MC_1,    MC_2,    MC_3,    MC_SCLN, _______,
                         KC_0,    KC_0,    _______, _______,
       // right thumb
       _______, _______, _______,
       _______, _______, _______,
       _______
),

/* keymap: Media and mouse keys
 *
 * .-----------------------------------------.
 * |      |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * |      |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * | RESET|  F1  |  F2  |  F3  |  F4  |  F5  |
 * |------+------+------+------+------+------|
 * |      |  F6  |  F7  |  F8  |  F9  |  F10 |
 * |------+------+------+------+------+------|
 * |      |  F11 |  F12 | MENU | print| CAPS |
 * |      |------+------+------+------+------'
 * |      |      |      |      |      |
 * '----------------------------------'
 *                                           .--------------------.
 *                                           |      |      |      |
 *                                           |------+------+------|
 *                                           |      |      |      |
 *                                           |      |      |------|
 *                                           |      |      |      |
 *                                           '--------------------'

 * .------------------------------------------------.
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |
 * '------------------------------------------------'

 *                      .-----------------------------------------.
 *                      |      |      |      |      |      |      |
 *                      |------+------+------+------+------+------|
 *                      |      |      |      |      |      |      |
 *                      |------+------+------+------+------+------|
 *                      |NumLck| vold | volu | mute | Mclk | RESET|
 *                      |------+------+------+------+------+------|
 *                      | Mleft| Mdown| Mup  | Mrigh| Lclk |      |
 *                      |------+------+------+------+------+------|
 *                      | mprev| mstop| mplay| mnext| Rclk |      |
 *                      '------+------+------+------+------|      |
 *                             |      |      |      |      |      |
 *                             '----------------------------------'
 * .--------------------.
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * |------|      |      |
 * |      |      |      |
 * '--------------------'
*/

[MOS] = KEYMAP(
       // left well
       _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______,
       KC_RST,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
       _______, TX_F6,   TX_F7,   TX_F8,   TX_F9,   KC_F10,
       _______, KC_F11,  KC_F12,  KC_APP,  KC_PAUS, KC_CAPS,
                _______, _______, _______, _______,
       // left thumb
                                           _______, _______, _______,
                                           _______, _______, _______,
                                                             _______,

       // center
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______,

       // right well
                _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______,
                KC_NLCK, KC_VOLD, KC_VOLU, KC_MUTE, KC_BTN3, KC_RST,
                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1, _______,
                KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_BTN2, _______,
                         _______, _______, _______, _______,
       // right thumb
       _______, _______, _______,
       _______, _______, _______,
       _______
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    // not sufficient to set debug_enable from matrix_init
    debug_enable=true;

    return true;
}