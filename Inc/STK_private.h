/*
 * File:   STK_private.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 13, 2024, 11:10 PM
 */

#ifndef STK_private_H
#define	STK_private_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     STK_CTRL        *((volatile u32*)0xE000E010)
#define     STK_LOAD        *((volatile u32*)(0xE000E010 + 0x04))
#define     STK_VAL         *((volatile u32*)(0xE000E010 + 0x08))

#define     STK_AHB            0
#define     STK_AHB_DIV8       1
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
#endif	/* STK_private_H */
