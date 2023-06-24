/*
 * DIO_Prog.c
 *
 * Created: 5/26/2023 8:33:01 PM
 *  Author: Saad
 */ 

#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Address.h"
#include "DIO_Interface.h"

void DIO_void_Set_pin_dir(u8 copy_u8_port, u8 copy_u8_pin, u8 copy_u8_dir) {
	if(copy_u8_pin <= 7 && copy_u8_pin >=0)
	{
		if (copy_u8_dir == OUTPUT)
		{
			switch (copy_u8_port)
			{
				case PORTA: SET_BIT(DDRA_REG, copy_u8_pin); break;
				case PORTB: SET_BIT(DDRB_REG, copy_u8_pin); break;
				case PORTC: SET_BIT(DDRC_REG, copy_u8_pin); break;
				case PORTD: SET_BIT(DDRD_REG, copy_u8_pin); break;
			}
		}			
		else
		{
			switch (copy_u8_port)
			{
				case PORTA: CLR_BIT(DDRA_REG, copy_u8_pin); break;
				case PORTB: CLR_BIT(DDRB_REG, copy_u8_pin); break;
				case PORTC: CLR_BIT(DDRC_REG, copy_u8_pin); break;
				case PORTD: CLR_BIT(DDRD_REG, copy_u8_pin); break;
			}
		}	
	}
}

void DIO_void_Set_pin_val(u8 copy_u8_port, u8 copy_u8_pin, u8 copy_u8_val)
{
	if(copy_u8_pin <= 7 && copy_u8_pin >=0)
	{
		if (copy_u8_val == OUTPUT)
		{
			switch (copy_u8_port)
			{
				case PORTA: SET_BIT(PORTA_REG, copy_u8_pin); break;
				case PORTB: SET_BIT(PORTB_REG, copy_u8_pin); break;
				case PORTC: SET_BIT(PORTC_REG, copy_u8_pin); break;
				case PORTD: SET_BIT(PORTD_REG, copy_u8_pin); break;
			}
		}			
		else
		{
			switch (copy_u8_port)
			{
				case PORTA: CLR_BIT(PORTA_REG, copy_u8_pin); break;
				case PORTB: CLR_BIT(PORTB_REG, copy_u8_pin); break;
				case PORTC: CLR_BIT(PORTC_REG, copy_u8_pin); break;
				case PORTD: CLR_BIT(PORTD_REG, copy_u8_pin); break;
			}
		}
	}
	
}

u8	 DIO_void_Get_pin_val(u8 copy_u8_port, u8 copy_u8_pin) 
{
	u8 LOC_u8_val = 0;
	if(copy_u8_pin <= 7 && copy_u8_pin >=0)
	{
		switch(copy_u8_port)
		{
			case PORTA: LOC_u8_val = GET_BIT(PINA_REG, copy_u8_pin); break;
			case PORTB: LOC_u8_val = GET_BIT(PINB_REG, copy_u8_pin); break;
			case PORTC: LOC_u8_val = GET_BIT(PINC_REG, copy_u8_pin); break;
			case PORTD: LOC_u8_val = GET_BIT(PIND_REG, copy_u8_pin); break;
		}
		return LOC_u8_val;
	}
}