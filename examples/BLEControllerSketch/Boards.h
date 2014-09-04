#ifndef _BOARDS_H_
#define _BOARDS_H_

// Blend Micro
#if defined(BLEND_MICRO)

#define TOTAL_ANALOG_PINS       6
#define TOTAL_PINS              24 // 11 digital + 12 analog
#define VERSION_BLINK_PIN       13
#define IS_PIN_DIGITAL(p)       ( (p) >= 0 && (p) < 24 && !((p) == 4) && !((p) >= 6 && (p) <= 7) && !((p) >=14 && (p) <= 17) )
#define IS_PIN_ANALOG(p)        ((p) >= 18 && (p) < 24)
#define IS_PIN_PWM(p)           ( (p) == 3 || (p) == 5 || (p) == 9 || (p) == 10 || (p) == 11 || (p) == 13 )
#define IS_PIN_SERVO(p)         ( (p) >= 0 && (p) < MAX_SERVOS && !((p) == 4) && !((p) >= 6 && (p) <= 7) )
#define IS_PIN_I2C(p)           ((p) == 5 || (p) == 6)
#define PIN_TO_DIGITAL(p)       (p)
#define PIN_TO_ANALOG(p)        ((p)-18)
#define PIN_TO_PWM(p)           PIN_TO_DIGITAL(p)
#define PIN_TO_SERVO(p)         (p)

#else

#include <Boards.h>

#endif

#endif
