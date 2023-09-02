/*
 * Timer1_Interface.c
 *
 * Created: 8/12/2023 8:47:14 PM
 *  Author: Morougue Ghazal
 */ 
#include "MATH.h"
#include "STD_TYPE.h"
#include "Timer1_Addresses.h"
#include "Timer1_Interface.h"
#include "DIO_Interface.h"

void Timer1_FastPWM_init()
{
	// Set Control Register:
	TCCR1A_REG = 0x82;
	ICR1_REG = 40000;
	//OCR1B_REG = 2000;
	TCCR1B_REG = 0x1A;
}

// Range 2000 -> 4000 (0->180 degrees)
void Timer1_FastPWM(u32 tick)
{
	OCR1A_REG = tick;
}