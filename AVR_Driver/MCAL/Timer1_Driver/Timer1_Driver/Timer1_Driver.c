/*
 * Timer1_Driver.c
 *
 * Created: 8/12/2023 8:46:19 PM
 *  Author: Morougue Ghazal
 */ 



#include "MATH.h"
#include "STD_TYPE.h"
#include "Timer1_Addresses.h"
#include "Timer1_Interface.h"
#include "DIO_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	Timer1_FastPWM_init();
	DIO_void_Set_pin_dir(PORTD, PIN5, OUTPUT);
	u32 i = 0;
    while(1)
    {
        for(i = 2000; i<=4000; i++)
		{
			Timer1_FastPWM(i);
			_delay_ms(1);
		}	
		/*for(i = 0; i<=4000; i--)
		{
	        Timer1_FastPWM(i);
	        _delay_ms(5);
        }*/		
    }
}