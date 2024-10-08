#include "LED.h"

void LED_Init(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);

	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_SetBits(GPIOA,GPIO_InitStructure.GPIO_Pin);
}

void LED_Flowing(void)
{
    GPIO_Write(GPIOA, ~0x0001);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_2,Bit_SET);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
    Delay_ms(500);
    GPIO_Write(GPIOA, ~0x0002);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_1,Bit_RESET);
    Delay_ms(500);
    GPIO_Write(GPIOA, ~0x0004);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_1,Bit_SET);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_2,Bit_RESET);
    Delay_ms(500);
}

void LEDRed_Turn(void)
{
    if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_0) == 0)
    {
        GPIO_SetBits(GPIOA,GPIO_Pin_0);
    }
    else
    {
        GPIO_ResetBits(GPIOA,GPIO_Pin_0);
    }
}

void LEDYellow_Turn(void)
{
    if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1) == 0)
    {
        GPIO_SetBits(GPIOA,GPIO_Pin_1);
    }
    else
    {
        GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    }
}

void LEDRed_ON(void)
{
    GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
}

void LEDRed_OFF(void)
{
    GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
}
