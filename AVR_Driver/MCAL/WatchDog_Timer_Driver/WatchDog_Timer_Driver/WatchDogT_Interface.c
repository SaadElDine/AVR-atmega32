/*
 * WatchDogT_Interface.c
 *
 * Created: 8/18/2023 7:23:20 PM
 *  Author: Morougue Ghazal
 */ 

#include "MATH.h"
#include "STD_TYPE.h"
#include "WatchDogT_Interface.h"
#include "WatchDogT_Address.h"
#include "DIO_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>


void WatchDogTimer_Start( u8 time_out)
{
	WDTCR_REG = 0x08 | time_out;
}

void WatchDogTimer_Stop()
{
	
	MCUCSR_REG = 0x00;
	WDTCR_REG = 0x17;
}