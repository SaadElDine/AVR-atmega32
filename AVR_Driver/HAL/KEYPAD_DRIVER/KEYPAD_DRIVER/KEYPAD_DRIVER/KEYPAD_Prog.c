/*
 * KEYPAD_Prog.c
 *
 * Created: 7/15/2023 6:30:59 PM
 *  Author: Saad
 */ 

#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Address.h"
#include "DIO_Interface.h"
#include "KEYPAD_Config.h"
#include "KEYPAD_Interface.h"
#include "LCD_Config.h"
#include "LCD_Interface.h"

u8 KeypadValues[4][4] = {{'1', '2', '3', 'A'},
						 {'4', '5', '6', 'B'},
						 {'7', '8', '9', 'C'},
						 {'*', '0', '#', 'D'}};
							 
void KEYPAD_init(void)
{
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_R0, INPUT);
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_R1, INPUT);
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_R2, INPUT);
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_R3, INPUT);
	
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_C0, OUTPUT);
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_C1, OUTPUT);
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_C2, OUTPUT);
	DIO_void_Set_pin_dir(KEYPAD_PORT, KEYPAD_C3, OUTPUT);
	
	DIO_void_Set_port_val(KEYPAD_PORT, HIGH);
}

u8 KEYPAD_GetKey(void)
{ 
	u8 row_index = 0;
	u8 column_index = 0;
	u8 key = 0;
	u8 KeypadRows[4] = {KEYPAD_R0, KEYPAD_R1, KEYPAD_R2, KEYPAD_R3};
	u8 KeypadColumns[4] ={KEYPAD_C0, KEYPAD_C1, KEYPAD_C2, KEYPAD_C3};
	 
	for(column_index = 0; column_index < 4; column_index++)
	{
		DIO_void_Set_pin_val(KEYPAD_PORT, KeypadColumns[column_index], LOW);
		for(row_index = 0; row_index < 4; row_index++)
		{
			if(DIO_void_Get_pin_val(KEYPAD_PORT, KeypadRows[row_index]) == 0)
			{
				key = KeypadValues[row_index][column_index];
				while(DIO_void_Get_pin_val(KEYPAD_PORT, KeypadRows[row_index]) == 0);
				return key;
			}
		}
		DIO_void_Set_pin_val(KEYPAD_PORT, KeypadColumns[column_index], HIGH);
	} 
}