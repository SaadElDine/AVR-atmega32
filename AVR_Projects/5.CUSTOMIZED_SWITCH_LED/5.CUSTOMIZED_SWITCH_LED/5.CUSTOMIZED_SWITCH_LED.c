/*
 * _5.c
 *
 * Created: 5/25/2023 2:22:01 AM
 *  Author: Saad
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include "Math.h"
#include <util/delay.h>

int main(void)
{
	SET_BIT(DDRC,2);   //define pins as o/p
	CLR_BIT(PORTC,2);
	CLR_BIT(PORTB,0);  //define pin as i/p
	while(1)
	{
		if((GET_BIT(PINB,0)) == 1)
		{	_delay_ms(100);
			TOGGLE_BIT(PORTC,2);
			_delay_ms(100);
		}
	}
}