/*
 * File:   AFIO_interace.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 9, 2024, 11:10 PM
 */

#ifndef AFIO_interace_H
#define	AFIO_interace_H
/* --------------------------------Section : Includes-------------------------------- */
#include "EXTI_interface.h"
/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     AFIO_PORTA_SELECT       0b0000
#define     AFIO_PORTB_SELECT       0b0001
#define     AFIO_PORTC_SELECT       0b0010
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void MAFIO_SetEXTIConfig(EXTI_LINE_NUMS Copy_u8Line, u8 Copy_EXTIPort);
#endif	/* AFIO_interace_H */
