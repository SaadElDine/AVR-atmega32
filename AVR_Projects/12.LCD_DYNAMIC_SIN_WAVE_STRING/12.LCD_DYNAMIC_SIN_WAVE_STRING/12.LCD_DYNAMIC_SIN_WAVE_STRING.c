/*
 * _12.c
 *
 * Created: 7/11/2023 11:14:35 PM
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
	u8 len = strlen(str);
	u8 n, i = 0;
    while(1)
    {
        LCD_Clear();
        n = 16;
        while(n != 0)
		{
			LCD_void_Send_Data(str[i]);
			_delay_ms(300);
			LCD_ShiftRight();
			n--;
		}			
    }
}