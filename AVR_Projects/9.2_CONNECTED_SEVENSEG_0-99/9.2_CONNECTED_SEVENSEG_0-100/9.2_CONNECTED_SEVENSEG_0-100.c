/*
 * _9.c
 *
 * Created: 7/5/2023 11:21:57 PM
 *  Author: Saad
 */ 

#define F_CPU 16000000UL
#include "MATH.h"
#include "STD_TYPE.h"
#include "DIO_Interface.h"
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTA, PIN4, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN5, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN6, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN7, OUTPUT);
	
	
    while(1)
    {
        u8 i, j, k;
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 10 ; j++)
			{
				for(k = 0; k < 50; k++)
				{
					EN2_VAL(HIGH);
					SEVEN_SEG_DISPLAY(i); _delay_ms(5);
					EN2_VAL(LOW);
					_delay_ms(5);
					EN1_VAL(HIGH);
					SEVEN_SEG_DISPLAY(j); _delay_ms(5);
					EN1_VAL(LOW);
					_delay_ms(5);
				}
			}
		}			
    }
}