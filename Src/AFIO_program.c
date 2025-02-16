/*
 * File:   AFIO_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 9, 2024, 11:10 PM
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "AFIO_interface.h"
#include "AFIO_private.h"
#include "AFIO_config.h"

void MAFIO_SetEXTIConfig(EXTI_LINE_NUMS Copy_u8Line, u8 Copy_EXTIPort)
{
    u8 Local_u8RegIndex = 0;
    if (Copy_u8Line <= EXTI_LINE3)
    {
        Local_u8RegIndex = 0;
    }

    else if (Copy_u8Line <= EXTI_LINE7)
    {
        Local_u8RegIndex = 1;
        Copy_u8Line -= 4;
    }

    else if (Copy_u8Line <= EXTI_LINE11)
    {
        Local_u8RegIndex = 2;
        Copy_u8Line -= 8;
    }
    
    else if (Copy_u8Line <= EXTI_LINE15)
    {
        Local_u8RegIndex = 3;
        Copy_u8Line -= 12;
    }

    else
    {
        /*Error*/
    }
    
    AFIO->AFIO_EXTICR[Local_u8RegIndex] &= ~(0b1111 << (Copy_EXTIPort * 4));
    AFIO->AFIO_EXTICR[Local_u8RegIndex] |= (Copy_EXTIPort << (Copy_u8Line * 4));
}