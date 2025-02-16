/*
 * File:   EXTI_interace.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 9, 2024, 11:10 PM
 */

#ifndef EXTI_interace_H
#define	EXTI_interace_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     EXTI_RISING          0
#define     EXTI_FALLING         1
#define     EXTI_ON_CHANGE       2
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */
typedef enum{
    EXTI_LINE0 = 0,
    EXTI_LINE1,
    EXTI_LINE2,
    EXTI_LINE3,
    EXTI_LINE4,
    EXTI_LINE5,
    EXTI_LINE6,
    EXTI_LINE7,
    EXTI_LINE8,
    EXTI_LINE9,
    EXTI_LINE10,
    EXTI_LINE11,
    EXTI_LINE12,
    EXTI_LINE13,
    EXTI_LINE14,
    EXTI_LINE15,
    EXTI_LINE16,
    EXTI_LINE17,
    EXTI_LINE18,
    EXTI_LINE19
}EXTI_LINE_NUMS;
/* --------------------------------Section: Function Declarations-------------------------------- */
void MEXTI_voidInit(EXTI_LINE_NUMS Copy_u8Line, u8 Copy_u8Mode, void *Copy_Interrupt_Handler (void), u8 CopyReqPort);
void MEXTI_voidEnableEXTI(EXTI_LINE_NUMS Copy_u8Line);  
void MEXTI_voidDisableEXTI(EXTI_LINE_NUMS Copy_u8Line);  
void MEXTI_voidSwTrigger(EXTI_LINE_NUMS Copy_u8Line);  
void MEXTI_voidSetCallBack(EXTI_LINE_NUMS Copy_u8Line, void *Copy_Interrupt_Handler (void));
void MEXTI_voidChangeReqPinPort(EXTI_LINE_NUMS Copy_u8Line, u8 CopyReqPort);
void MEXTI_voidModeChange(EXTI_LINE_NUMS Copy_u8Line, u8 Copy_u8Mode);
#endif	/* EXTI_interace_H */
