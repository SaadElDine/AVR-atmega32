/*
 * TIMER0_Prog.c
 *
 * Created: 8/5/2023 9:36:11 AM
 *  Author: User
 */ 

#include "STD_TYPE.h"      
#include "MATH.h"
#include "DIO_Interface.h"
#include "TIMER0_Config.h"
#include "TIMER0_Address.h"
#include "TIMER0_Interface.h"
#include "ISR_Vector.h"

void (*ptr)(void);

void timer0_overflow_delay_us(u16 delay)
{
	delay = (delay * 62.5) / 1000;
	u16 count = 0;
	while(count < delay)
	{
		SET_BIT(TCCR0_REG,0);
		while(GET_BIT(TIFR_REG,0) == 0);
		SET_BIT(TIFR_REG,0);
		TCCR0_REG = 0x00;
		count++;
	}
}
void timer0_overflow_delay_ms(u16 delay)
{
	delay = (delay * 62.5);
	u16 count = 0;
	while(count < delay)
	{
		SET_BIT(TCCR0_REG,0);
		while(GET_BIT(TIFR_REG,0) == 0);
		SET_BIT(TIFR_REG,0);
		TCCR0_REG = 0x00;
		count++;
	}
}

void timer0_init()
{
	//Prescalar init
	SET_BIT(TCCR0_REG,0);
	//Enable Overflow
	SET_BIT(TIMSK_REG,0);
	//Set Global INT
	SET_BIT(SREG_REG,7);
}

void set_callBack(void (*ptr1)(void))
{
	ptr = ptr1;
}

ISR(TIMER0_OVF)
{
	ptr();
}