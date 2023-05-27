/*
 * _8.c
 *
 * Created: 5/27/2023 6:50:33 PM
 *  Author: Saad
 */ 


#define F_CPU 16000000UL
#include "MATH.h"
#include "STD_TYPE.h"
#include "DIO_Interface.h"
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTB, PIN0, INPUT);
	DIO_void_Set_pin_dir(PORTC, PIN2, OUTPUT);
	DIO_void_Set_pin_dir(PORTC, PIN7, OUTPUT);
	DIO_void_Set_pin_dir(PORTD, PIN3, OUTPUT);
	u8 counter = 0;
    while(1)
    {
		if(counter > 3)
		{
			counter = 0;
		}
		
		if(DIO_void_Get_pin_val(PORTB, PIN0) == 1)
		{
			_delay_ms(100);
			switch(counter)
			{
				case 0: DIO_void_Set_pin_val(PORTC, PIN2, HIGH); break;
				case 1: DIO_void_Set_pin_val(PORTC, PIN7, HIGH); break;
				case 2: DIO_void_Set_pin_val(PORTD, PIN3, HIGH); break;
				case 3: DIO_void_Set_pin_val(PORTC, PIN2, LOW); DIO_void_Set_pin_val(PORTD, PIN3, LOW); DIO_void_Set_pin_val(PORTC, PIN7, LOW); break;
			}
			counter++;
			_delay_ms(100);
		}	
    }
}