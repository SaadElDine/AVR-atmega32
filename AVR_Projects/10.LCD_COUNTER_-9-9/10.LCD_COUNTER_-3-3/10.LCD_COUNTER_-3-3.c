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
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D4,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D5,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D6,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_DPORT,LCD_D7,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RS_PORT,LCD_RS_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_RW_PORT,LCD_RW_Pin,OUTPUT) ;
	DIO_void_Set_pin_dir(LCD_E_PORT,LCD_E_Pin,OUTPUT) ;
	LCD_void_init();
    s8 counter = -9;
	LCD_void_Send_Data(45); LCD_void_Send_Data(57); 
    while(1)
    {
	    if(counter >= 9)
	    {
		    counter = -10;
	    }
	    
	    if(DIO_void_Get_pin_val(PORTB, PIN0) == 1)
	    {
		    _delay_ms(100);
			counter++;
		    switch(counter)
		    {
				case -9: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(57); break;
				case -8: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(56); break;
				case -7: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(55); break;
				case -6: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(54); break;
				case -5: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(53); break;
				case -4: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(52); break;
			    case -3: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(51); break;
			    case -2: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(50); break;
			    case -1: LCD_void_Send_Command(1); LCD_void_Send_Data(45); LCD_void_Send_Data(49); break;
			    case 0:  LCD_void_Send_Command(1); LCD_void_Send_Data(48); break;
				case 1:  LCD_void_Send_Command(1); LCD_void_Send_Data(49); break;
				case 2:  LCD_void_Send_Command(1); LCD_void_Send_Data(50); break;
				case 3:  LCD_void_Send_Command(1); LCD_void_Send_Data(51); break;
				case 4:  LCD_void_Send_Command(1); LCD_void_Send_Data(52); break;
				case 5:  LCD_void_Send_Command(1); LCD_void_Send_Data(53); break;
				case 6:  LCD_void_Send_Command(1); LCD_void_Send_Data(54); break;
				case 7:  LCD_void_Send_Command(1); LCD_void_Send_Data(55); break;
				case 8:  LCD_void_Send_Command(1); LCD_void_Send_Data(56); break;
				case 9:  LCD_void_Send_Command(1); LCD_void_Send_Data(57); break;
		    }
		    _delay_ms(100);
	    }
    }
}