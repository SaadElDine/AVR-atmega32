/*
 * Timer_Driver.c
 *
 * Created: 8/4/2023 8:36:35 PM
 *  Author: Morougue Ghazal
 */ 


#include "MATH.h"
#include "STD_TYPE.h"
#include "Timer_Address.h"
#include "Timer_Interface.h"
#include "DIO_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	/*u16 count = 0;*/
	DIO_void_Set_pin_dir(PORTA,PIN0,OUTPUT);
	
	
	
	
    while(1)
    {
        DIO_void_Set_pin_val(PORTA,PIN0,HIGH);
		Timer0_Overflow_Delay_ms(200);
		DIO_void_Set_pin_val(PORTA,PIN0,LOW);
		Timer0_Overflow_Delay_ms(200);
		
		/*DIO_void_Set_pin_val(PORTA,PIN0,HIGH);
		
		
		while(count< 12500){
			
			SET_BIT(TCCR0_REG,0); // Start Time with No Prescalar
			
			// TIFR == 1 lma ykouun fi overflow
			while(GET_BIT(TIFR_REG,0) == 0);
			
			SET_BIT(TIFR_REG,0); //Clear Flag
			
			TCCR0_REG = 0x00; // Stop Timer aw clear bit
			count++;
		}
		count = 0;
		
		
		DIO_void_Set_pin_val(PORTA,PIN0,LOW);
		while(count< 12500){
			
			SET_BIT(TCCR0_REG,0); // Start Time with No Prescalar
			
			// TIFR == 1 lma ykouun fi overflow
			while(GET_BIT(TIFR_REG,0) == 0);
			
			SET_BIT(TIFR_REG,0); //Clear Flag
			
			TCCR0_REG = 0x00; // Stop Timer aw clear bit
			count++;
		}
		count = 0;*/
		
    }
}