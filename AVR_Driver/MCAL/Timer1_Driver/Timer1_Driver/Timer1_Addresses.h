/*
 * Timer1_Addresses.h
 *
 * Created: 8/12/2023 8:49:22 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef TIMER1_ADDRESSES_H_
#define TIMER1_ADDRESSES_H_


#define TCCR1A_REG	*((volatile u8* )0x4F)
#define TCCR1B_REG	*((volatile u8* )0x4E)
#define TCNT1_REG	*((volatile u16*)0x4C)
#define OCR1A_REG	*((volatile u16*)0x4A)
#define OCR1B_REG	*((volatile u16*)0x48)
#define ICR1_REG	*((volatile u16*)0x46)
#define TIMSK_REG	*((volatile u8* )0x59)
#define TIFR_REG	*((volatile u8* )0x58)
#define SREG_REG	*((volatile u8* )0x5F)




#endif /* TIMER1_ADDRESSES_H_ */