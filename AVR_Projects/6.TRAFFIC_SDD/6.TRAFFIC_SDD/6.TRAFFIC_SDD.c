/*
 * _6.c
 *
 * Created: 5/27/2023 1:55:35 PM
 *  Author: Saad
 */ 


#define F_CPU 16000000UL
#include "Math.h"
#include "DIO_Interface.h"
#include "STD_TYPE.h"
#define SSD(val) PORTA = ((val << 4) | (PORTA & 0x0F))
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTA, PIN4, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN5, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN6, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN7, OUTPUT);
	// Set Enables
	DIO_void_Set_pin_dir(PORTB, PIN1, OUTPUT);
	DIO_void_Set_pin_dir(PORTB, PIN2, OUTPUT);
	DIO_void_Set_pin_val(PORTB, PIN1, HIGH);
	//Set lamps
	DIO_void_Set_pin_dir(PORTA, PIN4, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN5, OUTPUT);
	DIO_void_Set_pin_dir(PORTA, PIN6, OUTPUT);
	
	while(1)
	{
			for(int i = 0; i < 10;i++)
			{
				SSD(i);
			}
			
				_delay_ms(1000);
	}
}