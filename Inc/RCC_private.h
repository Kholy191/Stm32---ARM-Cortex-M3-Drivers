/*
 * File:   RCC_private.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on January 30, 2024, 11:10 PM
 */

#ifndef RCC_private_H
#define	RCC_private_H

/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define RCC_CR          *((volatile u32*)0x40021000)
#define RCC_CFGR        *((volatile u32*)0x40021004)
#define RCC_CIR         *((volatile u32*)0x40021008)
#define RCC_APB2RSTR    *((volatile u32*)0x4002100C)
#define RCC_APB1RSTR    *((volatile u32*)0x40021010)
#define RCC_AHBENR      *((volatile u32*)0x40021014)
#define RCC_APB2ENR     *((volatile u32*)0x40021018)
#define RCC_APB1ENR     *((volatile u32*)0x4002101C)
#define RCC_BDCR        *((volatile u32*)0x40021020)
#define RCC_CSR         *((volatile u32*)0x40021024)

#define RCC_HSIMode             0
#define RCC_HSE_CrystalMode     1
#define RCC_PLLMode             2
#define RCC_HSE_RcMode          3

#define RCC_PLL_IN_HSI_DIV_2    0
#define RCC_PLL_IN_HSE_DIV_2    1
#define RCC_PLL_IN_HSE          2

/*Mul Nums*/
#define RCC_PLLMul_2            0x00000000
#define RCC_PLLMul_3            0x00040000
#define RCC_PLLMul_4            0x00080000
#define RCC_PLLMul_5            0x000C0000
#define RCC_PLLMul_6            0x00100000
#define RCC_PLLMul_7            0x00140000
#define RCC_PLLMul_8            0x00180000
#define RCC_PLLMul_9            0x001C0000
#define RCC_PLLMul_10           0x00200000
#define RCC_PLLMul_11           0x00240000
#define RCC_PLLMul_12           0x00280000
#define RCC_PLLMul_13           0x002C0000
#define RCC_PLLMul_14           0x00300000
#define RCC_PLLMul_15           0x00340000
#define RCC_PLLMul_16           0x00380000
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */

#endif	/* RCC_private_H */
