/*
 * File:   LED_interface.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 7, 2024, 11:10 PM
 */

#ifndef LED_interface_H
#define	LED_interface_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */

/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */

/* --------------------------------Section: Function Declarations-------------------------------- */
void LED_Initialize(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum);
void LED_Turn_On(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum);
void LED_Turn_Off(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum);
void LED_Toggle(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum);
#endif	/* LED_interface_H */