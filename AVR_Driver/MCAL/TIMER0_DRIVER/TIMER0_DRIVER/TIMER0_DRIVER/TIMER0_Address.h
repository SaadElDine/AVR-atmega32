/*
 * TIMER0_Address.h
 *
 * Created: 8/5/2023 9:35:22 AM
 *  Author: User
 */ 


#ifndef TIMER0_ADDRESS_H_
#define TIMER0_ADDRESS_H_

#define TCCR0_REG  *((volatile u8*)0x53)
#define TCNT0_REG  *((volatile u8*)0x52)
#define OCR0_REG   *((volatile u8*)0x5c)
#define TIMSK_REG  *((volatile u8*)0x59)
#define TIFR_REG   *((volatile u8*)0x58)
#define SREG_REG   *((volatile u8*)0x5f)

#endif /* TIMER0_ADDRESS_H_ */