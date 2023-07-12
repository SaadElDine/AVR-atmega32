/*
 * SEVEN_SEGMENT_DRIVER.c
 *
 * Created: 7/5/2023 11:38:23 PM
 *  Author: Saad
 */ 


#define F_CPU 1600000UL
#include "STD_TYPE.h"
#include "MATH.h"
#include "DIO_Interface.h"
#include "util/delay.h"
#include "SEVEN_SEG_Interface.h"
int main(void)
{
	EN1_VAL(HIGH);
	EN2_VAL(HIGH);
    while(1)
    {
        for (int i = 0;i <= 9;i++)
        {
			SEVEN_SEG_DISPLAY(i);
			_delay_ms(1500);
        }
    }
}