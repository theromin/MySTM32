#include "stm32f10x.h"                  // Device header

#include "LED.h"

int main(void)
{
	LED_Init();
	while(1)
	{
		LED_Flowing();
	}
}
