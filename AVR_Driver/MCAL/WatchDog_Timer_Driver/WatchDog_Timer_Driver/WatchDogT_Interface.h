/*
 * WatchDogT_Interface.h
 *
 * Created: 8/18/2023 7:23:40 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef WATCHDOGT_INTERFACE_H_
#define WATCHDOGT_INTERFACE_H_


#define timer_16_3ms	0x00
#define timer_32_5ms	0x01
#define timer_65ms		0x02
#define timer__13s		0x03
#define timer__26s		0x04
#define timer__52s		0x05
#define timer_1s		0x06
#define timer_2_1s		0x07

void WatchDogTimer_Start( u8 time_out);
void WatchDogTimer_Stop();



#endif /* WATCHDOGT_INTERFACE_H_ */