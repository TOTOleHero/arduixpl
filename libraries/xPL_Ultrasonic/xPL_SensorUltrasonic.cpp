// 
// 
// 

#include "xPL_SensorUltrasonic.h"
#include "pins_arduino.h"


	uint8_t port = digitalPinToPort(_pinEcho);
	uint8_t stateMask = (HIGH ? bit : 0);

	digitalWrite(_pinTrig, LOW);
	delayMicroseconds(2);
	digitalWrite(_pinTrig, HIGH);
	delayMicroseconds(5);
	digitalWrite(_pinTrig, LOW);