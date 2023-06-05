RGB_MATRIX_EFFECT(custom_rgb_base)
RGB_MATRIX_EFFECT(custom_rgb_l1)
RGB_MATRIX_EFFECT(custom_rgb_l2)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

#define CUSTOM_RGB_TEAL 0, 255, 178
#define CUSTOM_RGB_AUBURN 252, 32, 3

bool inline handle_as_modifier(uint8_t index)
{
    return HAS_ANY_FLAGS(g_led_config.flags[index], 0x09);
}

static bool custom_rgb_base(effect_params_t* params)
{
}

static bool custom_rgb_l1(effect_params_t* params)
{
}

static bool custom_rgb_l2(effect_params_t* params)
{
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
