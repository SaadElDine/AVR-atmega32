/*
 * Timer_Interface.h
 *
 * Created: 8/4/2023 8:39:02 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_
void Timer0_Overflow_Delay_us(u16 delay);
void Timer0_Overflow_Delay_ms(u16 delay);
void Timer0_Start();
void Timer0_Stop();

#endif /* TIMER_INTERFACE_H_ */