/*
 * File:   LED_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 7, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_interface.h"

#include "LED_interface.h"
#include "LED_config.h"

void LED_Initialize(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum)
{
   GPIO_SetPinDirection(Copy_PinPort, Copy_PinNum, OUTPUT_SPEED_2MHZ_PP);
}

void LED_Turn_On(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum)
{
    GPIO_SetPinValue(Copy_PinPort, Copy_PinNum, GPIO_PIN_HIGH);
}

void LED_Turn_Off(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum)
{
    GPIO_SetPinValue(Copy_PinPort, Copy_PinNum, GPIO_PIN_LOW);
}

void LED_Toggle(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum)
{
    if (GPIO_PIN_HIGH == GPIO_GetPinValue(Copy_PinPort, Copy_PinNum))
    {
        GPIO_SetPinValue(Copy_PinPort, Copy_PinNum, GPIO_PIN_LOW);
    }
    else if (GPIO_PIN_LOW == GPIO_GetPinValue(Copy_PinPort, Copy_PinNum))
    {
        GPIO_SetPinValue(Copy_PinPort, Copy_PinNum, GPIO_PIN_HIGH);
    }
    
    
}
