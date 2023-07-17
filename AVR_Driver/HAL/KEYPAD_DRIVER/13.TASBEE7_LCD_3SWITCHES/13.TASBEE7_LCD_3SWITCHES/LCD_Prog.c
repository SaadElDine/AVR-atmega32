/*
 * LCD_Prog.c
 *
 * Created: 7/11/2023 11:17:13 AM
 *  Author: Saad
 */ 
#include "MATH.h"
#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "LCD_Config.h"
#include "LCD_interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>

static void sendDigit(u8 digit)
{
	switch(digit)
	{
		case 0: LCD_void_Send_Data(48); break;
		case 1: LCD_void_Send_Data(49); break;
		case 2: LCD_void_Send_Data(50); break;
		case 3: LCD_void_Send_Data(51); break;
		case 4: LCD_void_Send_Data(52); break;
		case 5: LCD_void_Send_Data(53); break;
		case 6: LCD_void_Send_Data(54); break;
		case 7: LCD_void_Send_Data(55); break;
		case 8: LCD_void_Send_Data(56); break;
		case 9: LCD_void_Send_Data(57); break;
	}
}

static void Send4bits(u8 data)
{	
	u8 loc_DPIN[4]={LCD_D4,LCD_D5,LCD_D6,LCD_D7} ;
	u8 loc_iterator = 0 ;
	for(loc_iterator=0; loc_iterator < 4 ;loc_iterator++)
	{
		DIO_void_Set_pin_val(LCD_DPORT,loc_DPIN[loc_iterator],GET_BIT(data,loc_iterator)) ;
	}
}

static void PulseEnable(void)
{
	DIO_void_Set_pin_val(LCD_E_PORT, LCD_E_Pin, HIGH) ;
	_delay_ms(2) ;
	DIO_void_Set_pin_val(LCD_E_PORT, LCD_E_Pin, LOW) ;
	
}

void LCD_void_Send_Data(u8 data)
{
	/* 1- set RS high for send data */
	DIO_void_Set_pin_val(LCD_RS_PORT,LCD_RS_Pin,HIGH) ;
	/* 2- set RW low for Write  */
	DIO_void_Set_pin_val(LCD_RW_PORT,LCD_RW_Pin,LOW) ;
	#if LCD_MODE == EIGHT_BIT_MODE
	/* 3- send command*/
	DIO_void_Set_port_val(LCD_DPORT,data) ;
	/* 4- Enable LCD */
	DIO_void_Set_pin_val(LCD_E_PORT,LCD_E_Pin,HIGH) ;
	_delay_ms(2) ;
	DIO_void_Set_pin_val(LCD_E_PORT,LCD_E_Pin,LOW) ;
	#elif LCD_MODE == FOUR_BIT_MODE
	/* Send HSB  */
	Send4bits(data>>4) ;
	PulseEnable() ;
	/* Send LSB */
	Send4bits(data) ;
	PulseEnable() ;
	
	#endif
	
	
}
void LCD_void_Send_Command(u8 command){
	
      /* 1- set RS low for send command */ 
		DIO_void_Set_pin_val(LCD_RS_PORT,LCD_RS_Pin,LOW) ;
     /* 2- set RW low for Write  */
	    DIO_void_Set_pin_val(LCD_RW_PORT,LCD_RW_Pin,LOW) ;
	     #if LCD_MODE == EIGHT_BIT_MODE
	     /* 3- send command*/
	     DIO_void_Set_port_val(LCD_DPORT,command) ;
	     /* 4- Enable LCD */
	     DIO_void_Set_pin_val(LCD_E_PORT,LCD_E_Pin,HIGH) ;
	     _delay_ms(2) ;
	     DIO_void_Set_pin_val(LCD_E_PORT,LCD_E_Pin,LOW) ;
	     #elif LCD_MODE == FOUR_BIT_MODE
	     /* Send HSB  */
	     Send4bits(command>>4) ;
	     PulseEnable() ;
	     /* Send LSB */
	     Send4bits(command) ;
	     PulseEnable() ;
	     #endif
}
void LCD_void_init(void){
	
	_delay_ms(40) ;
	#if LCD_MODE == EIGHT_BIT_MODE
	 // Send function set command 
	LCD_void_Send_Command(0b00111000) ;
	#elif LCD_MODE == FOUR_BIT_MODE
	   Send4bits(0b0010) ;
	   PulseEnable() ;
	   Send4bits(0b0010) ;
	   PulseEnable() ;
	   Send4bits(0b1000) ;
       PulseEnable() ;
	  #endif 
	 // Display on/ off control  
	LCD_void_Send_Command(0b00001100) ;
	// Display clear  
	LCD_void_Send_Command(1) ;
}

void LCD_void_Send_String(u8 str[]) 
{
	u8 i = 0;
	while(str[i] != '\0')
	{
		LCD_void_Send_Data(str[i]);
		i++;
	}
}

void LCD_void_Send_Dynamic_String(u8 str[]) 
{
	u8 i = 0;
	while(str[i] != '\0')
	{
		LCD_void_Send_Data(str[i]);
		_delay_ms(300);
		i++;
	}
}	

void LCD_Clear(void)
{
	LCD_void_Send_Command(1);
}

void LCD_ShiftDown(void)
{
	LCD_void_Send_Command(0xc0);
}

void LCD_ShiftRight(void)
{
	LCD_void_Send_Command(0b00011100);
}
void LCD_ShiftLeft(void)
{
	LCD_void_Send_Command(0b00011000);
}

void LCD_void_Send_Number(s64 number)
{
	if (number == 0)
	{
		sendDigit(0);
	}
	else if(number > 0)
	{
		u8 counter = 0;
		s64 copy = number;
		while(copy != 0)
		{
			copy /= 10;
			counter++;
		}
		u8 counterc = counter;
		u8 str[counter];
		while(counter > 0)
		{
			str[counter - 1] = (number % 10);
			counter--;
			number /= 10;
			
		}
		for(u8 i = 0; i != counterc ; i++)
		{
			sendDigit(str[i]);
		}
	}
	else
	{
		number = number * -1;
		u8 counter = 0;
		s64 copy = number;
		while(copy != 0)
		{
			copy /= 10;
			counter++;
		}
		u8 counterc = counter;
		u8 str[counter];
		while(counter != 0)
		{
			str[counter - 1] = (number % 10);
			counter--;
			number /= 10;
		}
		LCD_void_Send_Data('-');
		for(u8 i = 0; i != counterc ; i++)
		{
			sendDigit(str[i]);
		}
	}
}