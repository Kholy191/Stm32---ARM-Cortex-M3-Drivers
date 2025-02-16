/*
 * File:   OS_interface.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 16, 2024, 11:10 PM
 */

#ifndef OS_interface_H
#define	OS_interface_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     Func_NOTREADY   0
#define     Func_READY      1
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void OS_voidCreateTask(u8 Copy_u8ID, u16 Copy_u8Priodicity, void (*Copy_Fptr) (void), u16 Copy_FirstDelay, u8 Copy_ReadyFlag);
void OS_voidStartOS(void);
static void Scheduler (void);
void OS_voidTaskSuspend(u8 Copy_u8ID);
void OS_voidTaskResume(u8 Copy_u8ID);
void OS_voidTaskDelete(u8 Copy_u8ID);
#endif	/* OS_interface_H */
