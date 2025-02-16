/*
 * File:   NVIC_private.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on FEB 9, 2024, 11:10 PM
 */

/*0xE000E100 baseadd*/

#ifndef NVIC_private_H
#define	NVIC_private_H

/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     NVIC_ISER0      *((volatile u32*)0xE000E100)     /*Enable interrupts from 0 to 31*/
#define     NVIC_ISER1      *((volatile u32*)0xE000E104)     /*Enable interrupts from 32 to 63*/

#define     NVIC_ICER0      *((volatile u32*)0xE000E180)     /*Disable interrupts from 0 to 31*/
#define     NVIC_ICER1      *((volatile u32*)0xE000E184)     /*Disable interrupts from 32 to 63*/

#define     NVIC_ISPR0      *((volatile u32*)0xE000E200)     /*Set interrupts pending from 0 to 31*/
#define     NVIC_ISPR1      *((volatile u32*)0xE000E204)     /*Set interrupts pending from 32 to 63*/

#define     NVIC_ICPR0      *((volatile u32*)0xE000E280)     /*Clear interrupts pending flag from 0 to 31*/
#define     NVIC_ICPR1      *((volatile u32*)0xE000E284)     /*Clear interrupts pending flag from 32 to 63*/

#define     NVIC_IABR0      *((volatile u32*)0xE000E300)     /*Read active flag from 0 to 31*/
#define     NVIC_IABR1      *((volatile u32*)0xE000E304)     /*Read active flag from 32 to 63*/

#define     MNVIC_GROUP4_SUB0      0x05FA0300  // 4 bits for group (IPR) => group
#define     MNVIC_GROUP3_SUB1      0x05FA0400  // 3 bits for Group and 1 bit for sub
#define     MNVIC_GROUP2_SUB2      0x05FA0500  // 2 bits for Group and 2 bit for sub
#define     MNVIC_GROUP1_SUB3      0x05FA0600  // 1 bits for Group and 3 bit for sub
#define     MNVIC_GROUP0_SUB4      0x05FA0700  //0 group for 4 bits for sub

#define     NVIC_IPR         ((volatile u8*)0xE000E400)      /*Set Priority to the interrupt*/
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */

#endif	/* NVIC_private_H */