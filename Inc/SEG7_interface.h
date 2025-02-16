/*
 * File:   SEG7_interface.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 7, 2024, 11:10 PM
 */

#ifndef SEG7_interface_H
#define	SEG7_interface_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
    /*ANODE IS DEFAULT*/
#define     SEG7_0     0b1000000
#define     SEG7_1     0b1111001
#define     SEG7_2     0b0100100
#define     SEG7_3     0b0110000
#define     SEG7_4     0b0011001
#define     SEG7_5     0b0010010
#define     SEG7_6     0b0000010
#define     SEG7_7     0b1111000
#define     SEG7_8     0b0000000	
#define     SEG7_9     0b0010000

/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void SEG7_NumDisplay(u8 Copy_Num);

#endif	/* SEG7_interface_H */