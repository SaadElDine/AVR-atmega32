/*
 * DIO.c
 *
 * Created: 5/26/2023 8:30:38 PM
 *  Author: Morougue Ghazal
 */ 

#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Interface.h"
#define F_CPU 16000000U
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTC, PIN2, OUTPUT);
	
    while(1)
    {
        DIO_void_Set_pin_val(PORTC, PIN2, HIGH);
		_delay_ms(500);
		DIO_void_Set_pin_val(PORTC, PIN2, LOW);		
		_delay_ms(500);		
    }
}