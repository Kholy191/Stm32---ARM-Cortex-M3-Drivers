/*
 * File:   RCC_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on January 30, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_config.h"
#include "RCC_private.h"

void RCC_voidInitSysClock(void)
{
    #if RCC_ActiveMode == RCC_HSIMode
        RCC_CR   = 0x00000081;
        RCC_CFGR = 0x00000000;
    #elif RCC_ActiveMode == RCC_HSE_CrystalMode
        RCC_CR   = 0x00010000;
        RCC_CFGR = 0x00000001;
    #elif RCC_ActiveMode == RCC_HSE_RcMode
        RCC_CR   = 0x00050000;
        RCC_CFGR = 0x00000001;
    #elif RCC_ActiveMode == RCC_PLLMode

        #if RCC_PLL_InputSrc == RCC_PLL_IN_HSE  /*MUL    / PLLXTPRE:0   / PLLSRC:1  /   SW 10*/
            RCC_CFGR = 0x00010002 | RCC_PLLMulValue;
        #elif RCC_PLL_InputSrc == RCC_PLL_IN_HSE_DIV_2  /*MUL    / PLLXTPRE:1   / PLLSRC:1  /   SW 10*/        
            RCC_CFGR = 0x00030002 | RCC_PLLMulValue;
        #elif RCC_PLL_InputSrc == RCC_PLL_IN_HSI_DIV_2  /*MUL    / PLLSRC:0  /   SW 10*/
            RCC_CFGR = 0x00000002 | RCC_PLLMulValue;
        #endif
        RCC_CR   = 0x01000000;

    #endif
}

void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
    if(Copy_u8PerId <= 31)
    {
        switch(Copy_u8BusId)
        {
            case RCC_AHB    :   SET_BIT(RCC_AHBENR  ,Copy_u8PerId); break;
            case RCC_APB1   :   SET_BIT(RCC_APB1ENR ,Copy_u8PerId); break;
            case RCC_APB2   :   SET_BIT(RCC_APB2ENR ,Copy_u8PerId); break;
        }
    }
    else
    {
        /*return Error*/
    }
}

void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
    if(Copy_u8PerId <= 31)
    {
        switch(Copy_u8BusId)
        {
            case RCC_AHB    :   CLR_BIT(RCC_AHBENR  ,Copy_u8PerId); break;
            case RCC_APB1   :   CLR_BIT(RCC_APB1ENR ,Copy_u8PerId); break;
            case RCC_APB2   :   CLR_BIT(RCC_APB2ENR ,Copy_u8PerId); break;
        }
    }
    else
    {
        /*return Error*/
    }
}
