/*
 * DIO_Interface.h
 *
 * Created: 5/26/2023 8:34:06 PM
 *  Author: Saad
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#define OUTPUT 1          //Direction O/P
#define INPUT  0		  //Direction I/P

#define PORTA  0		  //Define Port A
#define PORTB  1	      //Define Port B
#define PORTC  2		  //Define Port C
#define PORTD  3		  //Define Port D

#define HIGH   1		  //Define HIGH 
#define LOW    0          //Define LOW

#define PIN0   0		  //Define PIN 0
#define PIN1   1		  //Define PIN 1
#define PIN2   2		  //Define PIN 2
#define PIN3   3		  //Define PIN 3
#define PIN4   4		  //Define PIN 4
#define PIN5   5		  //Define PIN 5
#define PIN6   6		  //Define PIN 6
#define PIN7   7		  //Define PIN 7

void DIO_void_Set_pin_dir(u8 copy_u8_port, u8 copy_u8_pin, u8 copy_u8_dir) ;
void DIO_void_Set_pin_val(u8 copy_u8_port, u8 copy_u8_pin, u8 copy_u8_val) ;
u8	 DIO_void_Get_pin_val(u8 copy_u8_port, u8 copy_u8_pin) ;


#endif /* DIO_INTERFACE_H_ */