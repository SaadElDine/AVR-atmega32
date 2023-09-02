/*
 * I2C_Prog.c
 *
 * Created: 9/2/2023 6:39:24 PM
 *  Author: User
 */ 

#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Interface.h"
#include "I2C_Interface.h"
#include "I2C_Address.h"



void I2C_Master_init(void) 
{
	TWBR = 5;
}

void I2C_Mater_Start(void)
{
	TWCR = (1<<7)|(1<<5)|(1<<2) ;
	while(GET_BIT(TWCR, 7) == 0) ;
}

void I2C_Master_Address(u8 ID, u8 R_OR_W) 
{
	TWDR = ID << 1 ;
	if(R_OR_W == 1)
	{
		SET_BIT(TWDR, 0);
	}
	else
	{
		CLR_BIT(TWDR, 0);
	}
	
	TWCR = (1<<7) | (1<<2);
	while(GET_BIT(TWCR, 7) == 0) ;
}

void I2C_Master_Data(u8 data) 
{
	TWDR = data;
	TWCR = (1<<7) | (1<<2);
	while(GET_BIT(TWCR, 7) == 0) ;
}

void I2C_Mater_Stop(void) 
{
	TWCR = (1<<7) | (1<<4) | (1<<2);
}





void I2C_Slave_init(u8 add) 
{
	TWAR = add << 1;
}

void I2C_Slave_Available(void) 
{
	TWCR = (1<<2) | (1<<7) | (1<<6) ;
	while(GET_BIT(TWCR, 7) == 0);
	
	if(TWSR == 0x60)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void I2C_Slave_Read(void) 
{
	TWCR = (1<<2) | (1<<7) | (1<<6) ;
	while(GET_BIT(TWCR, 7) == 0);
	return TWDR;
}