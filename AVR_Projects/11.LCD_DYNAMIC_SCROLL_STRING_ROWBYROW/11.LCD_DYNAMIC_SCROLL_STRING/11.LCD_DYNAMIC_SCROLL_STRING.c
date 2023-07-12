/*
 * _11.c
 *
 * Created: 7/11/2023 3:51:52 PM
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
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D4,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D5,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D6,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D7,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RS_PORT,LCD_RS_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RW_PORT,LCD_RW_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_E_PORT,LCD_E_Pin,OUTPUT) ;
	LCD_void_init();
	u8 str[] = "Saad El Dine";
	u8 n = 16 ;
	u8 diff = 16 - strlen(str);
    while(1)
    {
		LCD_Clear();
		n = 16;
		LCD_void_Send_Dynamic_String(str);
        while(n != 0)
		{
			LCD_ShiftRight();
			_delay_ms(300);
			n--;
		}			 
		LCD_Clear();
		LCD_ShiftDown();
		LCD_void_Send_Dynamic_String(str);
		n = 16;
		while(n != 0)
		{
			LCD_ShiftRight();
			_delay_ms(300);
			n--;
		}
    }
}