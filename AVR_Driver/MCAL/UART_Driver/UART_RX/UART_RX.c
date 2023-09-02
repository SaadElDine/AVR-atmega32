/*
 * UART_RX.c
 *
 * Created: 8/19/2023 10:21:20 PM
 *  Author: Morougue Ghazal
 */ 




#include "MATH.h"
#include "STD_TYPE.h"
#include "UART_Addresses.h"
#include "UART_Interface.h"
#include "DIO_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	u8 val;
	DIO_void_Set_pin_dir(PORTA, PIN2, OUTPUT);
	DIO_void_Set_pin_dir(PORTD, PIN0, INPUT);
	
	UART_init();
	
    while(1)
    {
        val = UART_RX();
		if (val == 's')
		{
			DIO_void_Set_pin_val(PORTA, PIN2, HIGH);	
		}		
		else
		{
			DIO_void_Set_pin_val(PORTA, PIN2, LOW);
		}
    }
}