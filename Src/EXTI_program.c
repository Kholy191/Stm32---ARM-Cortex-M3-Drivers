/*
 * File:   EXTI_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 9, 2024, 11:10 PM
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXTI_interface.h"
#include "EXTI_config.h"
#include "EXTI_private.h"
#include "AFIO_interface.h"

static void *(*EXTI_InterruptHandlers[15])(void);


void MEXTI_voidInit(EXTI_LINE_NUMS Copy_u8Line, u8 Copy_u8Mode, void *Copy_Interrupt_Handler (void), u8 CopyReqPort)
{
    CLR_BIT((EXTI -> EXTI_IMR), Copy_u8Line);
    MAFIO_SetEXTIConfig(Copy_u8Line, CopyReqPort);
    EXTI_InterruptHandlers[Copy_u8Line] = Copy_Interrupt_Handler;

    if (EXTI_RISING == Copy_u8Mode)
    {
        SET_BIT((EXTI -> EXTI_RTSR), Copy_u8Line); 
    }

    else if (EXTI_FALLING == Copy_u8Mode)
    {
        SET_BIT((EXTI -> EXTI_FTSR), Copy_u8Line);
    }

    else if (EXTI_ON_CHANGE == Copy_u8Mode)
    {
        SET_BIT((EXTI -> EXTI_RTSR), Copy_u8Line); 
        SET_BIT((EXTI -> EXTI_FTSR), Copy_u8Line);
    }
    else
    {
        /*Error*/
    }
}

void MEXTI_voidModeChange(EXTI_LINE_NUMS Copy_u8Line, u8 Copy_u8Mode)
{
    if (EXTI_RISING == Copy_u8Mode)
    {
        SET_BIT((EXTI -> EXTI_RTSR), Copy_u8Line);
    }

    else if (EXTI_FALLING == Copy_u8Mode)
    {
        SET_BIT((EXTI -> EXTI_FTSR), Copy_u8Line);
    }

    else if (EXTI_ON_CHANGE == Copy_u8Mode)
    {
        SET_BIT((EXTI -> EXTI_RTSR), Copy_u8Line);
        SET_BIT((EXTI -> EXTI_FTSR), Copy_u8Line);
    }
    else
    {
        /*Error*/
    }
}


void MEXTI_voidEnableEXTI(EXTI_LINE_NUMS Copy_u8Line)
{
    SET_BIT((EXTI -> EXTI_IMR), Copy_u8Line);
} 

void MEXTI_voidDisableEXTI(EXTI_LINE_NUMS Copy_u8Line)
{
    CLR_BIT((EXTI -> EXTI_IMR), Copy_u8Line);
}

void MEXTI_voidSwTrigger(EXTI_LINE_NUMS Copy_u8Line)
{
    SET_BIT((EXTI -> EXTI_IMR), Copy_u8Line);
    SET_BIT((EXTI -> EXTI_PR), Copy_u8Line);
    SET_BIT((EXTI -> EXTI_SWIER), Copy_u8Line);
}

void MEXTI_voidSetCallBack(EXTI_LINE_NUMS Copy_u8Line, void *Copy_Interrupt_Handler (void))
{
    EXTI_InterruptHandlers[Copy_u8Line] = Copy_Interrupt_Handler;
}

void MEXTI_voidChangeReqPinPort(EXTI_LINE_NUMS Copy_u8Line, u8 CopyReqPort)
{
    MAFIO_SetEXTIConfig(Copy_u8Line, CopyReqPort);
}

void EXTI0_IRQHandler(void)
{
	EXTI_InterruptHandlers[0]();
	SET_BIT((EXTI -> EXTI_PR), 0);
}

void EXTI1_IRQHandler(void)
{
    EXTI_InterruptHandlers[1]();
    SET_BIT((EXTI -> EXTI_PR), 1);
}

void EXTI2_IRQHandler(void)
{
    EXTI_InterruptHandlers[2]();
    SET_BIT((EXTI -> EXTI_PR), 2);
}

void EXTI3_IRQHandler(void)
{
    EXTI_InterruptHandlers[3]();
    SET_BIT((EXTI -> EXTI_PR), 3);
}

void EXTI4_IRQHandler(void)
{
    EXTI_InterruptHandlers[4]();
    SET_BIT((EXTI -> EXTI_PR), 4);
}

void EXTI5_IRQHandler(void)
{
    EXTI_InterruptHandlers[5]();
    SET_BIT((EXTI -> EXTI_PR), 5);
}

void EXTI6_IRQHandler(void)
{
    EXTI_InterruptHandlers[6]();
    SET_BIT((EXTI -> EXTI_PR), 6);
}

void EXTI7_IRQHandler(void)
{
    EXTI_InterruptHandlers[7]();
    SET_BIT((EXTI -> EXTI_PR), 7);
}

void EXTI8_IRQHandler(void)
{
    EXTI_InterruptHandlers[8]();
    SET_BIT((EXTI -> EXTI_PR), 8);
}

void EXTI9_IRQHandler(void)
{
    EXTI_InterruptHandlers[9]();
    SET_BIT((EXTI -> EXTI_PR), 9);
}

void EXTI10_IRQHandler(void)
{
    EXTI_InterruptHandlers[10]();
    SET_BIT((EXTI -> EXTI_PR), 10);
}

void EXTI11_IRQHandler(void)
{
    EXTI_InterruptHandlers[11]();
    SET_BIT((EXTI -> EXTI_PR), 11);
}

void EXTI12_IRQHandler(void)
{
    EXTI_InterruptHandlers[12]();
    SET_BIT((EXTI -> EXTI_PR), 12);
}

void EXTI13_IRQHandler(void)
{
    EXTI_InterruptHandlers[13]();
    SET_BIT((EXTI -> EXTI_PR), 13);
}

void EXTI14_IRQHandler(void)
{
    EXTI_InterruptHandlers[14]();
    SET_BIT((EXTI -> EXTI_PR), 14);
}

void EXTI15_IRQHandler(void)
{
    EXTI_InterruptHandlers[15]();
    SET_BIT((EXTI -> EXTI_PR), 15);
}
