/*
 * UART_Interface.h
 *
 * Created: 8/19/2023 9:33:15 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

void UART_init();
void UART_TX( u8 data);
u8 UART_RX();



#endif /* UART_INTERFACE_H_ */