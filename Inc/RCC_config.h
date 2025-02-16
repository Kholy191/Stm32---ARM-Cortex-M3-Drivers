/*
 * File:   RCC_config.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on January 30, 2024, 11:10 PM
 */

#ifndef RCC_config_H
#define	RCC_config_H

/* --------------------------------Section : Includes-------------------------------- */
#include "RCC_private.h"
/* --------------------------------Section: Macro Declarations-------------------------------- */

/*Choose From
RCC_HSIMode             
RCC_HSE_CrystalMode     
RCC_PLLMode             
RCC_HSE_RcMode */

#define RCC_ActiveMode      RCC_HSE_CrystalMode

#if RCC_ActiveMode == RCC_PLLMode
/*Choose From 
RCC_PLL_IN_HSI_DIV_2 
RCC_PLL_IN_HSE_DIV_2 
RCC_PLL_IN_HSE*/

#define RCC_PLL_InputSrc RCC_PLL_IN_HSI_DIV_2 
/*Choose from RCC_PLLMul_2
to RCC_PLLMul_16    */
#define RCC_PLLMulValue RCC_PLLMul_2
#endif
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */

#endif	/* RCC_config_H */
