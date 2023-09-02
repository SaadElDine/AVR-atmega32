/*
 * Timer_Address.h
 *
 * Created: 8/4/2023 8:44:30 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef TIMER_ADDRESS_H_
#define TIMER_ADDRESS_H_

#define TCCR0_REG	*((volatile u8*)0x53)
#define TCNT0_REG	*((volatile u8*)0x52)
#define OCR0_REG	*((volatile u8*)0x5C)
#define TIMSK_REG	*((volatile u8*)0x59)
#define TIFR_REG	*((volatile u8*)0x58)



#endif /* TIMER_ADDRESS_H_ */