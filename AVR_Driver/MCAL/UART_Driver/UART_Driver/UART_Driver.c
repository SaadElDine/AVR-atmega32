/*
 * UART_Driver.c
 *
 * Created: 8/19/2023 8:48:35 PM
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
	DIO_void_Set_pin_dir(PORTD, PIN1, OUTPUT);
	UART_init();
	
    while(1)
    {
        UART_TX('A');
		
    }
}