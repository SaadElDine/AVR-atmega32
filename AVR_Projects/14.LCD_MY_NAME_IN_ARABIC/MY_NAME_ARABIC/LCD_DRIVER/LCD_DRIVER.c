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
	u8 Heart[8] = {0B00000, 0B01010, 0B11111, 0B11111, 0B01110, 0B00100, 0B00000, 0B00000};
	u8 seeen[8] = {
					0b00000,
					0b00001,
					0b00101,
					0b10101,
					0b10101,
					0b10101,
					0b11111,
					0b00000
				  };
	u8 een[8] = {
					0b00000,
					0b01110,
					0b01000,
					0b01000,
					0b01110,
					0b00010,
					0b11111,
					0b00000
				};
				
	u8 daaal[8] = {
		0b00000,
		0b01110,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b11110,
		0b00000
	};
	
	u8 alef[8] = {
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00000
	};
		
	u8 lam[8] = {
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b11111,
		0b00000
	};	
	
	u8 yeh[8] = {
		0b00000,
		0b00000,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b11110,
		0b01100
	};
	
	u8 noon[8] = {
		0b00000,
		0b00100,
		0b10001,
		0b10001,
		0b10001,
		0b10001,
		0b01110,
		0b00000
	};
		
	LCD_void_Send_Custom_Char(Heart, 0);
	LCD_void_Send_Custom_Char(seeen, 1);
	LCD_void_Send_Custom_Char(een, 2);
	LCD_void_Send_Custom_Char(daaal, 3);
	LCD_void_Send_Custom_Char(alef, 4);
	LCD_void_Send_Custom_Char(lam, 5);
	LCD_void_Send_Custom_Char(yeh, 6);
	LCD_void_Send_Custom_Char(noon, 7);
    while(1)
    {
		LCD_void_Send_Data(' ');
		LCD_void_Send_Data(3);
		LCD_void_Send_Data(2);
		LCD_void_Send_Data(1);
		LCD_ShiftDown();
		LCD_void_Send_Data(7);
		LCD_void_Send_Data(6);
		LCD_void_Send_Data(3);
		LCD_void_Send_Data(5);
		LCD_void_Send_Data(4);
		_delay_ms(10000);
		LCD_Clear();

    }
}