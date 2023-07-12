/*
 * SEVEN_SEG_Prog.c
 *
 * Created: 7/5/2023 11:45:24 PM
 *  Author: Saad
 */ 


#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Address.h"
#include "DIO_Interface.h"
#include "SEVEN_SEG_Interface.h"


void SEVEN_SEG_DISPLAY(u8 number)
{
	DIO_void_Set_pin_dir(PORTA,PIN4,OUTPUT);
	DIO_void_Set_pin_dir(PORTA,PIN5,OUTPUT);
	DIO_void_Set_pin_dir(PORTA,PIN6,OUTPUT);
	DIO_void_Set_pin_dir(PORTA,PIN7,OUTPUT);
	PORTA_REG = ((number << 4) | (PORTA & 0x0F));
}

void EN1_VAL(u8 u8_val)
{
		DIO_void_Set_pin_val(PORTB,PIN1,u8_val);	
}

void EN2_VAL(u8 u8_val)
{
	DIO_void_Set_pin_val(PORTB,PIN2,u8_val);	
}