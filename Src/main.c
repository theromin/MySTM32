#include "stm32f10x.h" // Device header

#include "LED.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	LED_Init();

	OLED_ShowString(1, 3, "HelloWorld!");
	while (1)
	{
		LED_Flowing();
	}
}
