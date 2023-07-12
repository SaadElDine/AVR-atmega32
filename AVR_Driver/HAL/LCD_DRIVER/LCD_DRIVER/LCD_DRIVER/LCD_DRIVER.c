/*
 * LCD_DRIVER.c
 *
 * Created: 7/11/2023 11:15:56 AM
 *  Author: Saad
 */ 


#include "MATH.h"
#include "STD_TYPE.h"
#include "DIO_Interface.h"
#include "LCD_Config.h"
#include "LCD_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D4,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D5,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D6,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D7,OUTPUT) ;
		 	 
	DIO_void_Set_pin_dir(LCD_RS_PORT,LCD_RS_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RW_PORT,LCD_RW_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_E_PORT,LCD_E_Pin,OUTPUT) ;
		 
	LCD_void_init() ;
	
    while(1)
    {
		
    }
}