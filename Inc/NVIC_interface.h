/*
 * File:   NVIC_inteface.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on FEB 9, 2024, 11:10 PM
 */

#ifndef NVIC_inteface_H
#define	NVIC_inteface_H

/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */

/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void MNVIK_voidEnableInterrupt(u8 Copy_u8InterruptNum);
void MNVIK_voidDisableInterrupt(u8 Copy_u8InterruptNum);
void MNVIK_voidSetPendigFlag(u8 Copy_u8InterruptNum);
void MNVIK_voidClearPendigFlag(u8 Copy_u8InterruptNum);
u8 MNVIK_u8GetActiveFlag(u8 Copy_u8InterruptNum);
void MNVIK_voidPriorityBits_Init(void);
void MNVIK_voidSetPriority(s8 Copy_u8InterruptNum, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority);
#endif	/* NVIC_inteface_H */
