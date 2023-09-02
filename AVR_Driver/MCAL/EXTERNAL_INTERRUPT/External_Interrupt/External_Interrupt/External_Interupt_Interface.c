/*
 * External_Interupt_Interface.c
 *
 * Created: 7/21/2023 8:30:26 PM
 *  Author: Morougue Ghazal
 */ 

#include "MATH.h"
#include "STD_TYPE.h"
#include "ExtInterrupt_Address.h"
#include "ExtInterrupt_Interface.h"
#include "DIO_Interface.h"

void (*ptr_call_back)(void) = 0;

void set_call_back(void(*ptr)(void))
{
	ptr_call_back = ptr;
}

ISR(INT_0)
{
	ptr_call_back();
}

void Ext_Int0_init()
{
	DIO_void_Set_pin_dir(PORTD, PIN2, INTPUT);
	// Rising edge
	SET_BIT(MCUCR_REG, 0);
	SET_BIT(MCUCR_REG, 1);
	// Set Global Interrupt 
	SET_BIT(SREG_REG, 7);
	// Set INT0 Interrupt Enable
	SET_BIT(GICR_REG, 6);
}

void Ext_Int1_init()
{
	DIO_void_Set_pin_dir(PORTD, PIN3, INTPUT);
	// Rising edge
	SET_BIT(MCUCR_REG, 2);
	SET_BIT(MCUCR_REG, 3);
	// Set Global Interrupt
	SET_BIT(SREG_REG, 7);
	// Set INT1 Interrupt Enable
	SET_BIT(GICR_REG, 7);
}

void Ext_Int2_init()
{
	DIO_void_Set_pin_dir(PORTB, PIN2, INTPUT);
	// Set Global Interrupt
	SET_BIT(SREG_REG, 7);z
	// Set INT2 Interrupt Enable
	SET_BIT(GICR_REG, 5);
}

