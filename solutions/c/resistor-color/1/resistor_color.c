#include "resistor_color.h"
#include <string.h>

static const resistor_band_t color_codes[] = {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE
};

resistor_band_t color_code(resistor_band_t color) {
    return color;
}

const resistor_band_t* colors(void) {
    return color_codes;
}
