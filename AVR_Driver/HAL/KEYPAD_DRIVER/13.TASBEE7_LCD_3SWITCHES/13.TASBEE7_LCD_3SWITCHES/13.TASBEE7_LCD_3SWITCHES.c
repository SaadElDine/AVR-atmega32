/*
 * _10.c
 *
 * Created: 7/11/2023 11:52:11 AM
 *  Author: Saad
 */ 


#define F_CPU 16000000UL
#include "MATH.h"
#include "STD_TYPE.h"
#include "DIO_Interface.h"
#include "LCD_Config.h"
#include "LCD_Interface.h"
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(PORTB, PIN0, INPUT);
	DIO_void_Set_pin_dir(PORTD, PIN6, INPUT);
	DIO_void_Set_pin_dir(PORTD, PIN2, INPUT);
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D4,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D5,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D6,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D7,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RS_PORT,LCD_RS_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RW_PORT,LCD_RW_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_E_PORT,LCD_E_Pin,OUTPUT) ;
	LCD_void_init();
    s64 counter = 0;
	LCD_void_Send_Number(counter);
    while(1)
    {
	   if(DIO_void_Get_pin_val(PORTB, PIN0) == 1)
	   {
		   counter++;
		   LCD_Clear();
		   LCD_void_Send_Number(counter);
		   while(DIO_void_Get_pin_val(PORTB, PIN0) == 1);
	   }		
	   else	if(DIO_void_Get_pin_val(PORTD, PIN6) == 1)
	   {
		   	counter--;
		   	LCD_Clear();
		   	LCD_void_Send_Number(counter);
		   	while(DIO_void_Get_pin_val(PORTD, PIN6) == 1);
	   }   
	   else	if(DIO_void_Get_pin_val(PORTD, PIN2) == 1)
	   {
			counter = 0;
			LCD_Clear();
			LCD_void_Send_Number(counter);
			while(DIO_void_Get_pin_val(PORTD, PIN2) == 1);
	   }
	
    }
}