/*
 * UART_Interface.c
 *
 * Created: 8/19/2023 9:31:21 PM
 *  Author: Morougue Ghazal
 */ 

#include "MATH.h"
#include "STD_TYPE.h"
#include "UART_Addresses.h"
#include "UART_Interface.h"
#include "DIO_Interface.h"
/******************************************************************************************
* Function Name	: UART_init
* Purpose		: init UART with One stop bit, no parity, baud rate 9600 and 8 bits data
* Parameters	: void
* Return Value	: void
******************************************************************************************/
void UART_init()
{
	//initialize Baud Rate 9600
	UBRRL_REG = 103;
	SET_BIT(UCSRB_REG,4);
	SET_BIT(UCSRB_REG,3);
	//UCSRB_REG = 0xD8;
}

/******************************************************************************************
* Function Name	: UART_TX
* Purpose		: Transmits Data To Node
* Parameters	: u8 data 
* Return Value	: void
******************************************************************************************/
void UART_TX( u8 data)
{
	UDR_REG = data;
	// Busy wait 3al flag 3shan mayehsalshh overrun 
	while(GET_BIT(UCSRA_REG,6) == 0); //yeb2a data weslet
}

/******************************************************************************************
* Function Name	: UART_RX
* Purpose		: Recieves Data From Node
* Parameters	: void
* Return Value	: u8 data
******************************************************************************************/
u8 UART_RX()
{ 
	while(GET_BIT(UCSRA_REG,7) == 0);
	return UDR_REG;
}