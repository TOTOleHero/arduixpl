// 
// 
// 

#include "xPL_SensorDallas.h"

OneWire xPL_SensorDallasTemp::_oneWire(ONE_WIRE_BUS);
DallasTemperature xPL_SensorDallasTemp::_sensors(&_oneWire);

void xPL_SensorDallasTemp::discoverOneWireTemp(xPL_Schema& schema,const VString& prefix)