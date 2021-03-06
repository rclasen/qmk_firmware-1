#include <mykeys.h>

// TODO keys: (ESC), (sIns), (GHK), (print), base, (menu)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* keymap: BASE
 *
 * .-----------------------------------------.
 * |      |   q  |   w  |   e  |   e  |   r  |
 * |------+------+------+------+------+------|        .------.
 * |      |   a  |   s  |   d  |   f  |   g  |        |      |
 * '------+------+------+------+------+------+------. '------'
 *        |   z  |   x  |   c  |   v  |   b  |      |
 *        '------+------+------+------+------+------|
 *                             | fMOS | lsft | fNAV |
 *                             '--------------------'

 *        .-----------------------------------------.
 *        |   y  |   u  |   i  |   o  |   p  |      |
 *        +------+------+------+------+------+------|
 *        |   j  |   k  |   k  |   l  | COMP |      |
 * .------+------+------+------+------+------+------.
 * |      |   n  |   m  |   ,  |   ,  | Enter|
 * |------+------+------+------+------+------'
 * | BSPC | space| fSYM |
 * '--------------------'
 */

[BASE] = KEYMAP( \
        // left hand
        XM_GHK,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_TAB,  TX_A,    TX_S,    TX_D,    TX_F,    KC_G,              XXXXXXX,
                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     XXXXXXX,
                                            XL_MOS,  XM_LSFT,  XL_NAV,

        // right hand
                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     XXXXXXX,
                 KC_H,    TX_J,    TX_K,    TX_L,    TX_COMP,  XXXXXXX,
        XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_ENTER,
        KC_BSPC, KC_SPC,  XL_SYM
 ),

/* keymap: Symbol Layer
 *
 * .-----------------------------------------.
 * |      |  @   |  _   |  [   |  ]   |   ^  |
 * |------+------+------+------+------+------|        .------.
 * |      |  \   |  /   |  {   |  }   |   *  |        |      |
 * '------+------+------+------+------+------+------. '------'
 *        |  #   |  $   |  |   |  ~   |   `  |      |
 *        '------+------+------+------+------+------|
 *                             |      |      |      |
 *                             '--------------------'

 *        .-----------------------------------------.
 *        |  !   |  <   |  >   |  =   |  &   |      |
 *        |------+------+------+------+------+------|
 *        |  ?   |  (   |  )   |  -   |  :   |      |
 *        |------+------+------+------+------+------'
 *        |  +   |  %   |  "   |  '   |  ;   |
 * .------+------+------+------+------+------'
 * |      |      |      |
 * '--------------------'
 */

[SYM] = KEYMAP(
       // left hand
       _______, KC_AT,   KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC,
       _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR,          _______,
                KC_HASH, KC_DLR,  KC_PIPE, KC_TILD, KC_GRV,  _______,
                                           _______, _______, _______,

       // right hand
                KC_EXLM, KC_LABK, KC_RABK, KC_EQL,  KC_AMPR, _______,
                KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, _______,
       _______, KC_PLUS, KC_PERC, KC_DQT,  KC_QUOT, KC_SCLN,
       _______, _______, _______
),

/* keymap: navigation and keypad
 *
 * .-----------------------------------------.
 * |      | PgUp | BSpac| up   | Del  | PgDn |
 * |------+------+------+------+------+------|        .------.
 * |      | Home | left | down | right| End  |        |      |
 * '------+------+------+------+------+------+------. '------'
 *        | Esc  | sIns | Ins  | Enter| space|      |
 *        '------+------+------+------+------+------.
 *                             |      |      |      |
 *                             '--------------------'

 *        .-----------------------------------------.
 *        |  -   |  7   |  8   |  9   |  +   |      |
 *        |------+------+------+------+------+------|
 *        |  .   |  4   |  5   |  6   |  ,   |      |
 * .------+------+------+------+------+------+------'
 * |      |  :   |  1   |  2   |  3   |  ;   |
 * |------+------+------+------+------+------'
 * |      |      |  0   |
 * '--------------------'
 */

[NAV] = KEYMAP(
       _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN,
       _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT,KC_END,           _______,
                KC_ESC,  S_INS,   KC_INS,  KC_ENTER,KC_SPACE,_______,
                                           _______, _______, _______,

       // right hand
                MC_MINS, MC_7,    MC_8,    MC_9,    MC_PLUS, _______,
                MC_DOT,  TX_4,    TX_5,    TX_6,    TX_COMM, _______,
       _______, MC_COLN, MC_1,    MC_2,    MC_3,    MC_SCLN,
       _______, _______, KC_0
),

/* keymap: Media and mouse keys
 *
 * .-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |
 * |------+------+------+------+------+------|        .------.
 * |      |  F6  |  F7  |  F8  |  F9  |  F10 |        |      |
 * '------+------+------+------+------+------+------. '------'
 *        |  F11 |  F12 | MENU | print| CAPS |      |
 *        '------+------+------+------+------+------|
 *                             |      |      |      |
 *                             '--------------------'

 *        .-----------------------------------------.
 *        |NumLck| vold | volu | mute | Mclk |      |
 *        |------+------+------+------+------+------|
 *        | Mleft| Mdown| Mup  | Mrigh| Lclk |      |
 * .------+------+------+------+------+------+------'
 * |      | mprev| mstop| mplay| mnext| Rclk |
 * |------+------+------+------+------+------'
 * |      |      |      |
 * '--------------------'
 */

[MOS] = KEYMAP(
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
       _______, TX_F6,   TX_F7,   TX_F8,   TX_F9,   KC_F10,           _______,
                KC_F11,  KC_F12,  KC_APP,  KC_PSCR, KC_CAPS, _______,
                                           _______, _______, _______,

       // right hand
                KC_NLCK, KC_VOLD, KC_VOLU, KC_MUTE, KC_BTN3, _______,
                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1, _______,
       _______, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_BTN2,
       _______, _______, _______
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{

    // not sufficient to set debug_enable from matrix_init
    debug_enable=true;

    return true;
}
