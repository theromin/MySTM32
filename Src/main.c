#include "stm32f10x.h"                  // Device header

#include "LED.h"
#include "Key.h"

uint8_t KeyNum;

int main(void)
{
	LED_Init();
	KeyInit();

	while(1)
	{
		KeyNum = Key_GetNum();
		if (KeyNum == 1)
		{
			LEDRed_Turn();
		}
		if (KeyNum == 2)
		{
			LEDYellow_Turn();
		}
	}
}
