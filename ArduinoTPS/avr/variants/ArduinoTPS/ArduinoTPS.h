#ifndef ArduinoTPS_h

#define ArduinoTPS_h

#include <inttypes.h>

class ArduinoTPS {
  public:
    ArduinoTPS();
	void DOUT(uint8_t value);
	void DOUT(uint8_t channel, uint8_t value);
	void PWM(uint8_t channel, uint8_t value);
	uint8_t SEL();
	uint8_t PRG();
	uint8_t DIN();
	uint8_t DIN(uint8_t channel);
	uint16_t AIN(uint8_t channel);

};

#endif