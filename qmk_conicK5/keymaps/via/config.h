#define RGB_DI_PIN F4

#ifdef RGBLIGHT_ENABLE
// #ifdef RGB_DI_PIN
  #define RGBLED_NUM 8
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
//   #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE
#endif
