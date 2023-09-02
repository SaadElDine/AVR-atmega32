/*
 * UART_Addresses.h
 *
 * Created: 8/19/2023 9:33:37 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef UART_ADDRESSES_H_
#define UART_ADDRESSES_H_

#define	UDR_REG		*((volatile u8*)0x2C)
#define	UCSRA_REG	*((volatile u8*)0x2B)
#define	UCSRB_REG	*((volatile u8*)0x2A)
#define	UBRRL_REG	*((volatile u8*)0x29)


#endif /* UART_ADDRESSES_H_ */