/*
 *  samdm0mini.h
 *
 *  Contributed by Peter Sanders 2019-09-28
 *
 *  Having opened the Arduino IDE and selected 'Arduino/Genuino Zero (Native USB Port)' there is still a problem
 * in that one has to maintain a 'cheat sheet' translating board silk-screened labels to numbers that the IDE can understand.
 *
 * This header file automates the translation from the boards silk-screened labels to the IDE.
 *
 * USAGE:
 *  This file must be copied into a folder named 'samdm0mini' which resides in the Arduino 'libraries' folder which
 * is contained in the Arduino sketchbook folder.   IE you are installing it as if it were a complete library, so that the IDE
 * will automatically find it.
 *
 *  If you are #including 'Arduino.h' in your sketch, this file must be #included as the very next #include, otherwise it must be the 
 * first #include in your sketch.
 * IE:
 *
 *  #include <Arduino.h>
 *  #include <samdm0mini.h>
 *  #include ..... other stuff.
 */

/* This 'variant.h' is where all the pins which are NOT defined in this file are defined.
#ifndef _VARIANT_ARDUINO_ZERO_
#include <C:\Users\XXXXX\AppData\Local\Arduino15\packages\arduino\hardware\samd\1.8.3\variants\arduino_zero\variant.h>
#endif
 */
 
#ifndef _SAMD_M0_MINI_
#define _SAMD_M0_MINI_

// LEDs
#ifdef PIN_LED_13
#undef PIN_LED_13
#endif
#ifdef PIN_LED
#undef PIN_LED
#endif
#ifdef LED_BUILTIN
#undef LED_BUILTIN
#endif
// Other LED pins as for Arduino Zero

/*
 * Pins labelled A0, A1 etc.. (Analog pins) use Arduino Zero definitions
 */

// Digital Pins on the M0 mini board
#define PIN_D0         (0ul)       // PIN_PA11     // RX1
#define PIN_D1         (1ul)       // PIN_PA10     // TX1
#define PIN_D2         (4ul)       // PIN_PA14
#define PIN_D3         (3ul)       // PIN_PA09
#define PIN_D4         (2ul)       // PIN_PA08
#define PIN_D5         (5ul)       // PIN_PA15
#define PIN_D6         (6ul)       // PIN_PA20
#define PIN_D7         (7ul)       // PIN_PA21
#define PIN_D8         (8ul)       // PIN_PA06
#define PIN_D9         (9ul)       // PIN_PA07
#define PIN_D10        (10ul)      // PIN_PA18     // SS
#define PIN_D11        (11ul)      // PIN_PA16     // MOSI
#define PIN_D12        (12ul)      // PIN_PA19     // MOSO
#define PIN_D13        (13ul)      // PIN_PA17     // SCK
#define PIN_D20        (20ul)      // PIN_PA22     // SDA
#define PIN_D21        (21ul)      // PIN_PA23     // SCL

static const uint8_t D0  = PIN_D0;
static const uint8_t D1  = PIN_D1;
static const uint8_t D2  = PIN_D2;
static const uint8_t D3  = PIN_D3;
static const uint8_t D4  = PIN_D4;
static const uint8_t D5  = PIN_D5;
static const uint8_t D6  = PIN_D6;
static const uint8_t D7  = PIN_D7;
static const uint8_t D8  = PIN_D8;
static const uint8_t D9  = PIN_D9;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;
static const uint8_t D20 = PIN_D20;
static const uint8_t D21 = PIN_D21;

#endif // _SAMD_M0_MINI_
