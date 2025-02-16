/*
 * File:   NVIC_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on FEB 9, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void MNVIK_voidEnableInterrupt(u8 Copy_u8InterruptNum)
{
    if (Copy_u8InterruptNum <= 31)
    {
        NVIC_ISER0 = (0x01 << Copy_u8InterruptNum);
    }
    else if (Copy_u8InterruptNum <= 59)
    {
        NVIC_ISER1 = (0x01 << Copy_u8InterruptNum);
    }
}

void MNVIK_voidDisableInterrupt(u8 Copy_u8InterruptNum)
{
    if (Copy_u8InterruptNum <= 31)
    {
        NVIC_ICER0 = (0x01 << Copy_u8InterruptNum);
    }
    else if (Copy_u8InterruptNum <= 59)
    {
        NVIC_ICER1 = (0x01 << Copy_u8InterruptNum);
    }
}

void MNVIK_voidSetPendigFlag(u8 Copy_u8InterruptNum)
{
    if (Copy_u8InterruptNum <= 31)
    {
        NVIC_ISPR0 = (0x01 << Copy_u8InterruptNum);
    }
    else if (Copy_u8InterruptNum <= 59)
    {
        NVIC_ISPR1 = (0x01 << Copy_u8InterruptNum);
    }
}

void MNVIK_voidClearPendigFlag(u8 Copy_u8InterruptNum)
{
    if (Copy_u8InterruptNum <= 31)
    {
        NVIC_ICPR0 = (0x01 << Copy_u8InterruptNum);
    }
    else if (Copy_u8InterruptNum <= 59)
    {
        NVIC_ICPR1 = (0x01 << Copy_u8InterruptNum);
    }
}

u8 MNVIK_u8GetActiveFlag(u8 Copy_u8InterruptNum)
{
    u8 ActiveFlag_Value = 0;
    if (Copy_u8InterruptNum <= 31)
    {
        ActiveFlag_Value = NVIC_IABR0;
    }
    else if (Copy_u8InterruptNum <= 59)
    {
        ActiveFlag_Value = NVIC_IABR1;
    }
    return ActiveFlag_Value;
}

void MNVIK_voidPriorityBits_Init(void)
{
#define     SCB_AIRCR       *((volatile u32*)0xE000ED0C)
    SCB_AIRCR = MNVIK_GROUP_SUB_DISTRIBUTION;
}

void MNVIK_voidSetPriority(s8 Copy_u8InterruptNum, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority)
{
    u8 Local_InterruptPriority = Copy_u8SubPriority | (Copy_u8GroupPriority << ((MNVIK_GROUP_SUB_DISTRIBUTION - 0x05FA0300) / 256));

    if (Copy_u8InterruptNum < 0)
    {

    }
    /*Ext Perephirals*/
    else if (Copy_u8InterruptNum >= 0)
    {
        NVIC_IPR[Copy_u8InterruptNum] = Local_InterruptPriority << 4;
    }
}
