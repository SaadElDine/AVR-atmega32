/*
 * _7.c
 *
 * Created: 5/27/2023 6:37:52 PM
 *  Author: Saad
 */ 

#define F_CPU 16000000UL
#include "MATH.h"
#include "STD_TYPE.h"
#include "DIO_Interface.h"
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTC, PIN2, OUTPUT);
	DIO_void_Set_pin_dir(PORTC, PIN7, OUTPUT);
	DIO_void_Set_pin_dir(PORTD, PIN3, OUTPUT);
    while(1)
    {
		DIO_void_Set_pin_val(PORTC, PIN2, HIGH);
		_delay_ms(500);
		DIO_void_Set_pin_val(PORTC, PIN7, HIGH);
		_delay_ms(500);
		DIO_void_Set_pin_val(PORTD, PIN3, HIGH);
		_delay_ms(500);
		DIO_void_Set_pin_val(PORTD, PIN3, LOW);
		_delay_ms(500);
		DIO_void_Set_pin_val(PORTC, PIN7, LOW);
		_delay_ms(500);
		DIO_void_Set_pin_val(PORTC, PIN2, LOW);
		_delay_ms(500);
    }
}