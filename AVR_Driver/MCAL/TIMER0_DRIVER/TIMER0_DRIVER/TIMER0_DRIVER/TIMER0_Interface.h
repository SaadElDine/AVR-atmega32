/*
 * TIMER0_Interface.h
 *
 * Created: 8/5/2023 9:35:56 AM
 *  Author: User
 */ 


#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_

void timer0_overflow_delay_us(u16 delay);
void timer0_overflow_delay_ms(u16 delay);
void timer0_init();



#endif /* TIMER0_INTERFACE_H_ */