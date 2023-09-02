#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED

//Set Nth BIT
#define SET_BIT(Reg, Bit)   Reg|=(1<<Bit)
//GET Nth BIT
#define GET_BIT(Reg, Bit) (Reg >> Bit)&1
//TOGGLE Nth BIT
#define TOGGLE_BIT(Reg, Bit) Reg ^= (1<<Bit)
//CLEAR Nth BIT
#define CLR_BIT(Reg, Bit) Reg &= ~(1<<Bit)

#endif // MATH_H_INCLUDED
