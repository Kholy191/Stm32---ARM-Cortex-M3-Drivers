/*
 * File:   STK_interace.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 13, 2024, 11:10 PM
 */

#ifndef STK_interace_H
#define	STK_interace_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */

/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void STK_voidInit(void);
void STK_voidSetBusyWait(u32 Copy_u32LoadValue);
void STK_voidSetIntervalSingle(u32 Copy_u32LoadValue, void *Copy_Interrupt_Handler(void));
void STK_voidSetIntervalperiod(u32 Copy_u32LoadValue, void *Copy_Interrupt_Handler(void));
void STK_voidStopTimer(void);
void STK_voidGetElapsedTime(void);
void STK_voidGetRemainingTime(void);
void STK_Clear_ValLoad(void);
u8 STK_ReadFlag(void);
#endif	/* STK_interace_H */
