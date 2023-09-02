/*
 * M.h
 *
 * Created: 8/5/2023 9:54:22 AM
 *  Author: User
 */ 


#ifndef M_H_
#define M_H_


#define SET_BIT(Reg, Bit)   Reg |= (1<<Bit)
//GET Nth BIT
#define GET_BIT(Reg, Bit) (Reg >> Bit) & 1
//TOGGLE Nth BIT
#define TOGGLE_BIT(Reg, Bit) Reg ^= (1<<Bit)
//CLEAR Nth BIT
#define CLR_BIT(Reg, Bit) Reg &= ~(1<<Bit)


#endif /* M_H_ */