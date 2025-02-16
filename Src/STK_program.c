/*
 * File:   STK_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 13, 2024, 11:10 PM
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"

static void (*STK_InterruptHandler)(void);

void STK_voidInit(void)
{
    #if STK_AHB == STK_Mode
        SET_BIT(STK_CTRL, 2);
    #elif STK_AHB_DIV8 == STK_Mode 
        CLR_BIT(STK_CTRL, 2); 
	#endif
}

void STK_voidSetBusyWait(u32 Copy_u32LoadValue)
{
    CLR_BIT(STK_CTRL, 1);
    STK_LOAD = Copy_u32LoadValue;
    SET_BIT(STK_CTRL, 0);
    while(GET_BIT(STK_CTRL,16) == 0);
    STK_LOAD = 0;
}

void STK_voidSetIntervalSingle(u32 Copy_u32LoadValue, void *Copy_Interrupt_Handler(void))
{
    STK_Clear_ValLoad();
    STK_InterruptHandler = Copy_Interrupt_Handler;
    SET_BIT(STK_CTRL, 1);
    STK_LOAD = Copy_u32LoadValue;
    SET_BIT(STK_CTRL, 0);
    STK_LOAD = 0;
}

void STK_voidSetIntervalperiod(u32 Copy_u32LoadValue, void *Copy_Interrupt_Handler(void))
{
//    STK_Clear_ValLoad();
    STK_InterruptHandler = Copy_Interrupt_Handler;
    SET_BIT(STK_CTRL, 1);
    STK_LOAD = Copy_u32LoadValue;
    SET_BIT(STK_CTRL, 0);
}

void STK_voidStopTimer(void)
{
    CLR_BIT(STK_CTRL, 0);
}

void STK_voidGetElapsedTime(void)
{
    u32 Local_u32TMRValue = STK_VAL;
    return (STK_LOAD - Local_u32TMRValue);
}

void STK_voidGetRemainingTime(void)
{
    u32 Local_u32TMRValue = STK_VAL;
    return Local_u32TMRValue;
}

void STK_Clear_ValLoad(void)
{
    STK_LOAD = 0;
    STK_VAL = 0;
}

u8 STK_ReadFlag(void)
{
    u8 Local_u8TMRValue = GET_BIT(STK_CTRL, 16);
    return Local_u8TMRValue;
}

void SysTick_Handler(void)
{
	STK_InterruptHandler();
}
