/*
 * File:   variant_due.h
 * Author: Linda.Muemken
 *
 * Created on 27. November 2019, 09:49
 */

#ifndef _VARIANT_ARDUINO_DUE_X_
#define _VARIANT_ARDUINO_DUE_X_

/*
 * Analog pins
 */
static const uint8_t A0  = 54;
static const uint8_t A1  = 55;
static const uint8_t A2  = 56;
static const uint8_t A3  = 57;
static const uint8_t A4  = 58;
static const uint8_t A5  = 59;
static const uint8_t A6  = 60;
static const uint8_t A7  = 61;
static const uint8_t A8  = 62;
static const uint8_t A9  = 63;
static const uint8_t A10 = 64;
static const uint8_t A11 = 65;
static const uint8_t DAC0 = 66;
static const uint8_t DAC1 = 67;
static const uint8_t CANRX = 68;
static const uint8_t CANTX = 69;
#define ADC_RESOLUTION		12

// LEDs
#define PIN_LED_13           (13u)
#define PIN_LED_RXL          (72u)
#define PIN_LED_TXL          (73u)
#define PIN_LED              PIN_LED_13
#define PIN_LED2             PIN_LED_RXL
#define PIN_LED3             PIN_LED_TXL
#define LED_BUILTIN          13


#endif	/* _VARIANT_ARDUINO_DUE_X_ */

