/*
 * LED_DRIVER.c
 *
 * Created: 5/27/2023 8:28:58 PM
 *  Author: Saad
 */ 


#define F_CPU 16000000UL
#include "STD_TYPE.h"
#include "MATH.h"
#include "LED_Interface.h"
#include "DIO_Interface.h"
#include <util/delay.h>

int main(void)
{	
    while(1)
    {
        LED_TOGGLE(PORTC, PIN2);
		_delay_ms(1000);
    }
}