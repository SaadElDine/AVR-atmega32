/*
 * _6.c
 *
 * Created: 5/27/2023 1:55:35 PM
 *  Author: Saad
 */ 


#define F_CPU 16000000UL
#include "Math.h"
#include <avr/io.h>
#define SSD(val) PORTA = ((val << 4) | (PORTA & 0x0F))
#include <util/delay.h>

int main(void)
{
	SET_BIT(DDRA,4);
	SET_BIT(DDRA,5);
	SET_BIT(DDRA,6);
	SET_BIT(DDRA,7);
	// Set Enables
	SET_BIT(DDRB,1);
	SET_BIT(PORTB,1);
	SET_BIT(DDRB,2);
	//Set lamps
	SET_BIT(DDRD,3);     
	SET_BIT(DDRC,7);
	SET_BIT(DDRC,2);
	while(1)
	{
		for (int j = 0; j < 10;j++) 
		{
			CLR_BIT(PORTB,2);
			for(int i = 0; i < 10;i++)
			{
				SSD(i);
				_delay_ms(1000);
			}
			SET_BIT(PORTB,2);
			for(int i = 0; i < 10;i++)
			{
				SSD(i);
				_delay_ms(1000);
			}
			CLR_BIT(PORTB,2);
			_delay_ms(1000);
		}
		
	}
}