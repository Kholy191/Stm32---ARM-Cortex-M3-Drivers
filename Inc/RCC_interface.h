/*
 * File:   RCC_interface.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on January 30, 2024, 11:10 PM
 */

#ifndef RCC_interface_H
#define	RCC_interface_H

/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define 	RCC_AHB     	0
#define 	RCC_APB1    	1
#define 	RCC_APB2    	2

#define     RCC_AFIO_CLC_ENABLE        	0
#define     RCC_GPIOA_CLC_ENABLE        2
#define     RCC_GPIOB_CLC_ENABLE        3
#define     RCC_GPIOC_CLC_ENABLE        4
#define     RCC_USART1_CLC_ENABLE       14
#define 	RCC_USART2_CLC_ENABLE		17
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void RCC_voidInitSysClock(void);
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
#endif	/* RCC_interface_H */
