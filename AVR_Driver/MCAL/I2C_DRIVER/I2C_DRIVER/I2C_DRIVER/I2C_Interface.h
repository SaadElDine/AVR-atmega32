/*
 * I2C_Interface.h
 *
 * Created: 9/2/2023 6:40:25 PM
 *  Author: User
 */ 


#ifndef I2C_INTERFACE_H_
#define I2C_INTERFACE_H_

void I2C_Master_init(void) ;
void I2C_Mater_Start(void) ;
void I2C_Mater_Stop(void) ;
void I2C_Master_Address(u8 ID, u8 R_OR_W) ;
void I2C_Master_Data(u8 data) ;

void I2C_Slave_init(u8 add) ;
void I2C_Slave_Available(void) ;
void I2C_Slave_Read(void) ;



#endif /* I2C_INTERFACE_H_ */