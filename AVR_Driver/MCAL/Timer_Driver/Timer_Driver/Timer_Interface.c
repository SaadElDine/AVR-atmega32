/*
 * Timer_Interface.c
 *
 * Created: 8/4/2023 8:39:27 PM
 *  Author: Morougue Ghazal
 */ 

#include "MATH.h"
#include "STD_TYPE.h"
#include "Timer_Address.h"
#include "Timer_Interface.h"
#include "DIO_Interface.h"

void Timer0_Start()
{
	SET_BIT(TCCR0_REG,0);
}
	
void Timer0_Stop()
{
	TCCR0_REG = 0x00; // Stop Timer aw clear bit
}
void Timer0_Overflow_Delay_ms(u16 delay)
{
	u16 count = 0;
	u16 delay_count = delay * 62.5 ;
	// INIT Timer TCNT0
	TCNT0_REG = 0X00;
	while(count< delay_count){
		
		 // Start Time with No Prescalar
		  Timer0_Start();
		
		// TIFR == 1 lma ykouun fi overflow
		while(GET_BIT(TIFR_REG,0) == 0);
		
		SET_BIT(TIFR_REG,0); //Clear Flag
		Timer0_Stop();
		
		count++;
	}	

}
void Timer0_Overflow_Delay_us(u16 delay)
{
	u16 count = 0;
	f32 delay_count = (f32) delay * 0.0625 ;
	// INIT Timer TCNT0
	TCNT0_REG = 0X00;
	while(count< delay_count){
		
		// Start Time with No Prescalar
		Timer0_Start();
		
		// TIFR == 1 lma ykouun fi overflow
		while(GET_BIT(TIFR_REG,0) == 0);
		
		SET_BIT(TIFR_REG,0); //Clear Flag
		Timer0_Stop();
		
		count++;
	}

}