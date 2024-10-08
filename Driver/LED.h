#ifndef _LED_H_
#define _LED_H_
#include "stm32f10x.h"
#include "Delay.h"

void LED_Init(void);
void LED_Flowing(void);

void LEDRed_ON(void);
void LEDRed_OFF(void);

void LEDRed_Turn(void);
void LEDYellow_Turn(void);

#endif