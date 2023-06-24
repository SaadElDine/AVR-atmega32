/*
 * SWITCH_Prog.c
 *
 * Created: 5/27/2023 9:22:49 PM
 *  Author: Saad
 */ 

#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Address.h"
#include "DIO_Interface.h"
#include "SWITCH_Interface.h"

u8 IS_PRESSED(copy_u8_port, copy_u8_pin)
{
	if (DIO_void_Get_pin_val(copy_u8_port, copy_u8_pin))
		return HIGH;
	else
		return LOW;
}