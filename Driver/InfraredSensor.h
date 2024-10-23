#ifndef _INFRAREDSENSOR_
#define _INFRAREDSENSOR_

#include "stm32f10x.h"

void InfraredSensor_Init(void);
uint16_t SensorCounter_Get(void);
#endif
