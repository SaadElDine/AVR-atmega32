/*
 * GccApplication2.c
 *
 * Created: 5/20/2023 7:06:10 PM
 *  Author: Saad
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "Math.h"

int main(void)
{
	SET_BIT(DDRC,2);
	SET_BIT(DDRC,7);
	SET_BIT(DDRD,3);
    while(1)
    {
		SET_BIT(PORTC,2);
		SET_BIT(PORTC,7);
		SET_BIT(PORTD,3);
		_delay_ms(1000);
		CLR_BIT(PORTC,2);
		CLR_BIT(PORTC,7);
		CLR_BIT(PORTD,3);
		_delay_ms(1000);
    }
}