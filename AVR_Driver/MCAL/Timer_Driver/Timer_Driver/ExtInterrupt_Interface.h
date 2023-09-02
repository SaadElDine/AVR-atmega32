/*
 * ExtInterrupt_Interface.h
 *
 * Created: 7/21/2023 8:31:18 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef EXTINTERRUPT_INTERFACE_H_
#define EXTINTERRUPT_INTERFACE_H_

#define ISR(vect_num)	void vect_num(void)__attribute__((signal));\
						void vect_num(void)
#define INT_0	__vector_1
#define INT_1	__vector_2
#define INT_2	__vector_3
#define	TIMER0_OVF	__vector_11	

void set_call_back(void(*ptr)(void));
void Ext_Int0_init();
void Ext_Int1_init();
void Ext_Int2_init();


#endif /* EXTINTERRUPT_INTERFACE_H_ */