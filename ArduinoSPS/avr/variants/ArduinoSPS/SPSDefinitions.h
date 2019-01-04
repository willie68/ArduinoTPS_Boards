#ifndef SPSDefinitions_h
#define SPSDefinitions_h
#define ArduinoSPS

#include "pins_arduino.h"

const uint8_t Din1 = 0;
const uint8_t Din2 = 1;
const uint8_t Din3 = 2;
const uint8_t Din4 = 3;

const uint8_t Dout1 = 4;
const uint8_t Dout2 = 5;
const uint8_t Dout3 = 6;
const uint8_t Dout4 = 7;

const uint8_t ADC1 = 0; //(15)
const uint8_t ADC2 = 1; //(16)

const uint8_t PWM1 = 9;
const uint8_t PWM2 = 10;

const uint8_t SW_PRG = 8;
const uint8_t SW_SEL = 11;

const uint8_t RC1 = 18;
const uint8_t RC2 = 19;

const uint8_t SERVO1 = 9;
const uint8_t SERVO2 = 10;

const uint8_t DIGIT_DATA_IO = 12;
const uint8_t DIGIT_CLOCK = 13;

void initSPS() {
	pinMode(Din1, INPUT_PULLUP);
	pinMode(Din2, INPUT_PULLUP);
	pinMode(Din3, INPUT_PULLUP);
	pinMode(Din4, INPUT_PULLUP);

	pinMode(RC1, INPUT_PULLUP);
	pinMode(RC2, INPUT_PULLUP);

	pinMode(SW_PRG, INPUT_PULLUP);
	pinMode(SW_SEL, INPUT_PULLUP);
	
	pinMode(Dout1, OUTPUT);
	pinMode(Dout2, OUTPUT);
	pinMode(Dout3, OUTPUT);
	pinMode(Dout4, OUTPUT);

	pinMode(PWM1, OUTPUT);
	pinMode(PWM2, OUTPUT);

	pinMode(DIGIT_DATA_IO, OUTPUT);
	pinMode(DIGIT_CLOCK, OUTPUT);
}
#endif