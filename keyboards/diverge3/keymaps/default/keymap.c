#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ┌───┐       ┌───┬───┐                           ┌───┬───┐       ┌───┐
     * │ ` │   ┌───┤ 3 │ 4 ├───┐                   ┌───┤ 7 │ 8 ├───┐   │PgU│
     * ├───┼───┤ 2 ├───┼───┤ 5 ├───┐           ┌───┤ 6 ├───┼───┤ 9 ├───┼───┤
     * │Tab│ 1 ├───┤ E │ R ├───┤ - │           │ = ├───┤ U │ I ├───┤ 0 │PgD│
     * ├───┼───┤ W ├───┼───┤ T ├───┤           ├───┤ Y ├───┼───┤ O ├───┼───┤
     * │Esc│ Q ├───┤ D │ F ├───┤Hom│           │End├───┤ J │ K ├───┤ P │ ' │
     * ├───┼───┤ S ├───┼───┤ G ├───┤           ├───┤ H ├───┼───┤ L ├───┼───┤
     * │Shf│ A ├───┤ C │ V ├───┤ , │           │ . ├───┤ M │ ↑ ├───┤ ; │Shf│
     * ├───┼───┤ X ├───┼───┤ B ├───┤           ├───┤ N ├───┼───┤ / ├───┼───┤
     * │Exe│ Z ├───┤Alt│Del├───┤ [ │           │ ] ├───┤ ← │ ↓ ├───┤ \ │Sup│
     * └───┼───┤Cap├───┴───┘   └───┘           └───┘   └───┴───┤ → ├───┼───┘
     *     │Sel├───┘        ┌───┐                 ┌───┐        └───┤Ctl│
     *     └───┘            │Ctl├───┐         ┌───┤Bsp│            └───┘
     *                      └───┤Alt├───┐ ┌───┤Spc├───┘
     *                          └───┤Sup│ │Ent├───┘
     *                              └───┘ └───┘
     */
    [0] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_PMNS,                   KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_HOME,                   KC_END,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_PGDN,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_COMM,                   KC_DOT,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,                   KC_RBRC, KC_N,    KC_M,    KC_UP,   KC_SLSH, KC_BSLS, KC_RSFT,
        KC_EXEC, KC_SLCT, KC_CAPS, KC_LALT, KC_DEL,  KC_LCTL, KC_RALT, KC_LGUI, KC_ENT,  KC_SPC,  KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_RCTL, KC_RGUI
    )
};
