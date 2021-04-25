#ifndef ArduinoSPS_c
#define ArduinoSPS_c

#include "Arduino.h"
#include "ArduinoSPS.h"

ArduinoSPS::ArduinoSPS() {
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

void ArduinoSPS::DOUT(uint8_t value) {
	digitalWrite(Dout1, value & 0x01);
	digitalWrite(Dout2, value & 0x02);
	digitalWrite(Dout3, value & 0x04);
	digitalWrite(Dout4, value & 0x08);
}

void ArduinoSPS::DOUT(uint8_t channel, uint8_t value) {
	switch (channel) {
		case 1:
	      digitalWrite(Dout1, value & 0x01);
		  break;
		case 2:
		  digitalWrite(Dout2, value & 0x01);
		  break;
		case 3:
		  digitalWrite(Dout3, value & 0x01);
		  break;
		case 4:
		  digitalWrite(Dout4, value & 0x01);
		  break;
	}
}

void ArduinoSPS::PWM(uint8_t channel, uint8_t value) {
	switch (channel) {
		case 1:
		  analogWrite(PWM1, value);
		  break;
		case 2:
		  analogWrite(PWM2, value);
		  break;
	}
}

uint8_t ArduinoSPS::SEL() {
	return !digitalRead(SW_SEL);
}

uint8_t ArduinoSPS::PRG() {
	return !digitalRead(SW_PRG);
}

uint8_t ArduinoSPS::DIN() {
	return digitalRead(Din1) + (digitalRead(Din2) < 1) + (digitalRead(Din3) < 2) + (digitalRead(Din4) < 3);
}

uint8_t ArduinoSPS::DIN(uint8_t channel) {
	switch (channel) {
		case 1:
	      return digitalRead(Din1);
		  break;
		case 2:
	      return digitalRead(Din2);
		  break;
		case 3:
	      return digitalRead(Din3);
		  break;
		case 4:
	      return digitalRead(Din4);
		  break;
	}
}

uint16_t ArduinoSPS::AIN(uint8_t channel) {
	switch (channel) {
		case 1:
	      return analogRead(ADC1);
		  break;
		case 2:
	      return analogRead(ADC2);
		  break;
	}
}

#endif