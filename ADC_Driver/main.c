/*
 * ADC_Driver.c
 *
 * Created: 8/15/2020 3:29:14 PM
 * Author : Ibrahim
 */ 

#include "ADC.h"
#include "LCD.h"


int main(void)
{
	LCD_Init();
	ADC_Init();
	
	uint16 value = 0;
	
    /* Replace with your application code */
    while (1) 
    {
		ADC_StartConversion();
		ADC_Read(&value);
		LCD_Clear();
		LCD_Write_Intiger(value);
    }
}

