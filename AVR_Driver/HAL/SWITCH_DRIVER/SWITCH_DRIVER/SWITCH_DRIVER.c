/*
 * SWITCH_DRIVER.c
 *
 * Created: 5/27/2023 9:17:45 PM
 *  Author: Saad
 */ 


#define F_CPU 1600000UL
#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Interface.h"
#include "util/delay.h"


int main(void)
{
	DIO_void_Set_pin_dir(PORTB, PIN0, INPUT);
	DIO_void_Set_pin_dir(PORTC, PIN2, OUTPUT);
	u8 get;
    while(1)
    {
		get = IS_PRESSED(PORTB, PIN0);
		if(get == 1)
		{
			DIO_void_Set_pin_val(PORTC, PIN2, HIGH);
		}
		else
			DIO_void_Set_pin_val(PORTC, PIN2, LOW);
        //TODO:: Please write your application code 
    }
}