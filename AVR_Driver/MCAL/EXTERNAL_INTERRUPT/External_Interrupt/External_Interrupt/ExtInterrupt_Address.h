/*
 * ExtInterrupt_Address.h
 *
 * Created: 7/21/2023 8:30:49 PM
 *  Author: Morougue Ghazal
 */ 


#ifndef EXTINTERRUPT_ADDRESS_H_
#define EXTINTERRUPT_ADDRESS_H_

#define SREG_REG	*((volatile u8*)0x5F)
#define MCUCR_REG	*((volatile u8*)0x55) //awel haga address ba3deen cast -> u8* 3shan da pointer then derefrence then volatile 
#define MCUCSR_REG	*((volatile u8*)0x54)
#define GICR_REG	*((volatile u8*)0x5B)



#endif /* EXTINTERRUPT_ADDRESS_H_ */