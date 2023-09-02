/*
 * DIO_Address.h
 *
 * Created: 5/26/2023 8:34:37 PM
 *  Author: Saad
 */ 


#ifndef DIO_ADDRESS_H_
#define DIO_ADDRESS_H_
/*%%%%%%%%%____GROUP A ____%%%%%%%%%%*/
#define PORTA_REG *((volatile u8*)0x3B)
#define DDRA_REG  *((volatile u8*)0x3A)
#define PINA_REG *((volatile u8*)0x39)
/*%%%%%%%%%____GROUP B ____%%%%%%%%%%*/
#define PORTB_REG *((volatile u8*)0x38)
#define DDRB_REG  *((volatile u8*)0x37)
#define PINB_REG  *((volatile u8*)0x36)
/*%%%%%%%%%____GROUP C ____%%%%%%%%%%*/
#define PORTC_REG *((volatile u8*)0x35)
#define DDRC_REG  *((volatile u8*)0x34)
#define PINC_REG  *((volatile u8*)0x33)
/*%%%%%%%%%____GROUP D ____%%%%%%%%%%*/
#define PORTD_REG *((volatile u8*)0x32)
#define DDRD_REG  *((volatile u8*)0x31)
#define PIND_REG  *((volatile u8*)0x30)
#endif /* DIO_ADDRESS_H_ */