/*
 * External_Interrupt.c
 *
 * Created: 7/21/2023 8:29:36 PM
 *  Author: Morougue Ghazal
 */ 

#include "MATH.h"
#include "STD_TYPE.h"
#include "ExtInterrupt_Address.h"
#include "ExtInterrupt_Interface.h"
#include "DIO_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

void LED()
{
	DIO_void_Set_pin_val(PORTC,PIN2,HIGH);
}

int main(void)
{
	DIO_void_Set_pin_dir(PORTC,PIN2,OUTPUT);
	DIO_void_Set_pin_dir(PORTC,PIN7,OUTPUT);
	DIO_void_Set_pin_dir(PORTC,PIN3,OUTPUT);
	Ext_Int0_init();
	Ext_Int1_init();
	Ext_Int2_init();
	set_call_back(LED);	
    while(1)
    {
        
    }
}

/*void __vector_1(void)__attribute__((signal));
void __vector_1(void)
{
	DIO_void_Set_pin_val(PORTC,PIN2,HIGH);
}

void __vector_2(void)__attribute__((signal));
void __vector_2(void)
{
	DIO_void_Set_pin_val(PORTC,PIN7,HIGH);
}

void __vector_3(void)__attribute__((signal));
void __vector_3(void)
{
	DIO_void_Set_pin_val(PORTC,PIN3,HIGH);
}*/