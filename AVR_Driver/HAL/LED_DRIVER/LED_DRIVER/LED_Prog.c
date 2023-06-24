/*
 * LED_Prog.c
 *
 * Created: 5/27/2023 8:29:43 PM
 *  Author: Saad
 */ 
#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Interface.h"
#include "LED_Interface.h"

void LED_ON(u8 copy_u8_port, u8 copy_u8_pin)
{
	DIO_void_Set_pin_dir(copy_u8_port, copy_u8_pin, OUTPUT);
	DIO_void_Set_pin_val(copy_u8_port, copy_u8_pin, HIGH);
}

void LED_OFF(u8 copy_u8_port, u8 copy_u8_pin)
{
	DIO_void_Set_pin_dir(copy_u8_port, copy_u8_pin, OUTPUT);
	DIO_void_Set_pin_val(copy_u8_port, copy_u8_pin, LOW);
}

void LED_TOGGLE(u8 copy_u8_port, u8 copy_u8_pin)
{
	DIO_void_Set_pin_dir(copy_u8_port, copy_u8_pin, OUTPUT);
	DIO_void_Toggle_pin_val(copy_u8_port, copy_u8_pin);
}