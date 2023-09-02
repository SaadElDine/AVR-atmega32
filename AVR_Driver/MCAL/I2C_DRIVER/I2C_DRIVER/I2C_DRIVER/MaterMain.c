/*
 * I2C_DRIVER.c
 *
 * Created: 9/2/2023 6:37:05 PM
 * Author : User
 */ 

#define F_CPU 16000000UL
#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Interface.h"
#include "I2C_Interface.h"


int main(void)
{
	I2C_Master_init();
    /* Replace with your application code */
    while (1) 
    {
			I2C_Mater_Start();
			I2C_Master_Address(30, 0);
			I2C_Master_Data('a');
			I2C_Mater_Stop();
    }
}

