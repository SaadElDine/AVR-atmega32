/*
 * WatchDog_Timer_Driver.c
 *
 * Created: 8/18/2023 7:22:02 PM
 *  Author: Morougue Ghazal
 */ 


#include "MATH.h"
#include "STD_TYPE.h"
#include "WatchDogT_Address.h"
#include "WatchDogT_Interface.h"
#include "DIO_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTA, PIN0, OUTPUT);
	DIO_void_Set_pin_dir(PORTA,PIN1, OUTPUT);
	DIO_void_Set_pin_val(PORTA,PIN1,HIGH);
	
    while(1)
    {
        //TODO:: Please write your application code 
		DIO_void_Set_pin_val(PORTA,PIN0,LOW);
		WatchDogTimer_Start(timer_1s);
		DIO_void_Set_pin_val(PORTA,PIN0,HIGH);
		_delay_ms(100);
		DIO_void_Set_pin_val(PORTA,PIN1,LOW);
		
		_delay_ms(900);
		//WatchDogTimer_Stop();
		
    }
}