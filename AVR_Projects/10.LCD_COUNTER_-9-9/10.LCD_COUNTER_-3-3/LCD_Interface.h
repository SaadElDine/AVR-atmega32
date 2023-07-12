/*
 * LCD_Interface.h
 *
 * Created: 7/11/2023 11:18:14 AM
 *  Author: Saad
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#define  EIGHT_BIT_MODE   0
#define  FOUR_BIT_MODE   1

#define  LCD_MODE  FOUR_BIT_MODE
void LCD_void_Send_Data(u8 data) ;
void LCD_void_Send_Command(u8 command) ;
void LCD_void_init(void) ;
void LCD_void_Send_String(u8 str[]) ;

#endif /* LCD_INTERFACE_H_ */