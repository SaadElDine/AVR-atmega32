/*
 * LCD_Config.h
 *
 * Created: 7/11/2023 11:20:32 AM
 *  Author: Saad
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


#if LCD_MODE == FOUR_BIT_MODE
#define  LCD_PORT    PORTA
#define  LCD_D4       PIN4
#define  LCD_D5       PIN5
#define  LCD_D6       PIN6
#define  LCD_D7       PIN7


#endif

#define LCD_DPORT   PORTA

#define LCD_RS_PORT  PORTB
#define LCD_RS_Pin   PIN1

#define LCD_RW_PORT  PORTB
#define LCD_RW_Pin   PIN2

#define LCD_E_PORT  PORTB
#define LCD_E_Pin   PIN3


#endif /* LCD_CONFIG_H_ */