/*
 * File:   AFIO_private.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 9, 2024, 11:10 PM
 */

#ifndef AFIO_private_H
#define	AFIO_private_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */

/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */
typedef struct{
   volatile u32 AFIO_EVCR;
   volatile u32 AFIO_MAPR;
   volatile u32 AFIO_EXTICR[4];
   volatile u32 AFIO_MAPR2;
}AFIO_t;

#define     AFIO    ((volatile AFIO_t*)0x40010000)
/* --------------------------------Section: Function Declarations-------------------------------- */
#endif	/* AFIO_private_H */