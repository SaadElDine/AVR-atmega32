/*
 * I2C_Address.h
 *
 * Created: 9/2/2023 6:42:08 PM
 *  Author: User
 */ 


#ifndef I2C_ADDRESS_H_
#define I2C_ADDRESS_H_

#define TWCR *((volatile u8*)0x56)
#define TWBR *((volatile u8*)0x20)
#define TWAR *((volatile u8*)0x22)
#define TWSR *((volatile u8*)0x21)
#define TWDR *((volatile u8*)0x23)


#endif /* I2C_ADDRESS_H_ */