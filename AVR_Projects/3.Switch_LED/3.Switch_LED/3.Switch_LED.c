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
	SET_BIT(DDRC,2);   //define pins as o/p
	//SET_BIT(DDRC,7);
	//SET_BIT(DDRD,3);
	CLR_BIT(PORTB,0);  //define pin as i/p
	int p = 0;
    while(1)
    {
		if((GET_BIT(PINB,0)) == 1)
		{
			SET_BIT(PORTC,2);
		}
		else
		{
			
			CLR_BIT(PORTC,2);
		}
		
    }
}