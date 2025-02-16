/*
 * File:   EXTI_private.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 9, 2024, 11:10 PM
 */

#ifndef EXTI_private_H
#define	EXTI_private_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */

/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */
typedef struct{
    volatile u32 EXTI_IMR;
    volatile u32 EXTI_EMR;
    volatile u32 EXTI_RTSR;
    volatile u32 EXTI_FTSR;
    volatile u32 EXTI_SWIER;
    volatile u32 EXTI_PR;
}EXTI_t;

#define     EXTI    ((volatile EXTI_t*)0x40010400)
/* --------------------------------Section: Function Declarations-------------------------------- */
#endif	/* EXTI_private_H */