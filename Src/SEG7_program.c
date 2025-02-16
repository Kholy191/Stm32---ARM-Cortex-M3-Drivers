/*
 * File:   SEG7_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 7, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"

#include "SEG7_interface.h"
#include "SEG7_config.h"

#define GPIOA_BASE_ADDRESS  0x40010800
#define     GPIOA_ODR       *((u32*)(GPIOA_BASE_ADDRESS + 0x0C))

void SEG7_NumDisplay(u8 Copy_Num)
{
    #if SEG7_MODE == COMMON_ANODE
        GPIOA_ODR |= Copy_Num;
    #elif SEG7_MODE == COMMON_CATHODE
        GPIOA_ODR |= ~(Copy_Num);
    #endif
}

