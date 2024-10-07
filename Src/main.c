#include "stm32f10x.h"                  // Device header

int main(void)
{
	RCC->APB2ENR = 0x00000010;
	GPIOC->CRH = 0x00300000;
	GPIOC->ODR = 0x00000000;//亮调试灯 00002000 灭调试灯
	while(1)
	{

	}
}
