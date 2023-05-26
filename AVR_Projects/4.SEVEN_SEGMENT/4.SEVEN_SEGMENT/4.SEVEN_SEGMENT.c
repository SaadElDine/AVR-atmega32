/*
 * _4.c
 *
 * Created: 5/20/2023 10:04:32 PM
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
	SET_BIT(DDRB,1);
	SET_BIT(PORTB,1);
    while(1)
    {
        for(int i = 0; i < 10;i++)
		{
			_delay_ms(500);
			SSD(i);
			_delay_ms(500);
		}
    }
}