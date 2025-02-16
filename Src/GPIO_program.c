/*
 * File:   GPIO_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 5, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"

void GPIO_SetPinDirection(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum, u8 Copy_Mode)
{
	u8 Local_ModeTemp = 0;
	if(Copy_Mode == INPUT_PU || Copy_Mode == INPUT_PD)
	{
		Local_ModeTemp = Copy_Mode;
		Copy_Mode = 0b1000;
	}
    switch (Copy_PinPort)
    {
    case GPIO_PortA:
        if(PIN7 >= Copy_PinNum)
        {
            GPIOA_CRL &= ~ ((0b1111) << (Copy_PinNum * 4));
            GPIOA_CRL |= ((Copy_Mode) << (Copy_PinNum * 4));
        }
        else if(PIN15 >= Copy_PinNum)
        {
            Copy_PinNum = Copy_PinNum- 8;
            GPIOA_CRH &= ~ ((0b1111) << (Copy_PinNum * 4));
            GPIOA_CRH |= ((Copy_Mode) << (Copy_PinNum * 4));
        }
        if(INPUT_PU == Local_ModeTemp)
        {
        	GPIOA_BSRR = (0x01 << Copy_PinNum);
        }
        else if (INPUT_PD == Local_ModeTemp)
        {
            GPIOA_BRR = (0x01 << Copy_PinNum);
        }
        else
        {
        	/*Nothing*/
        }
        break;
    
    case GPIO_PortB:
        if(PIN7 >= Copy_PinNum)
        {
            GPIOB_CRL &= ~ ((0b1111) << (Copy_PinNum * 4));
            GPIOB_CRL |= ((Copy_Mode) << (Copy_PinNum * 4));
        }
        else if(PIN15 >= Copy_PinNum)
        {
            Copy_PinNum = Copy_PinNum- 8;
            GPIOB_CRH &= ~ ((0b1111) << (Copy_PinNum * 4));
            GPIOB_CRH |= ((Copy_Mode) << (Copy_PinNum * 4));
        }
        if(INPUT_PU == Local_ModeTemp)
        {
        	GPIOB_BSRR = (0x01 << Copy_PinNum);
        }
        else if (INPUT_PD == Local_ModeTemp)
        {
        	GPIOB_BRR = (0x01 << Copy_PinNum);
        }
        break;
    
    case GPIO_PortC:
        if(PIN7 >= Copy_PinNum)
        {
            GPIOC_CRL &= ~ ((0b1111) << (Copy_PinNum * 4));
            GPIOC_CRL |= ((Copy_Mode) << (Copy_PinNum * 4));
        }
        else if(PIN15 >= Copy_PinNum)
        {
            Copy_PinNum = Copy_PinNum- 8;
            GPIOC_CRH &= ~ ((0b1111) << (Copy_PinNum * 4));
            GPIOC_CRH |= ((Copy_Mode) << (Copy_PinNum * 4));
        }
        if(INPUT_PU == Local_ModeTemp)
        {
        	GPIOC_BSRR = (0x01 << Copy_PinNum);
        }
        else if (INPUT_PD == Local_ModeTemp)
        {
        	GPIOC_BRR = (0x01 << Copy_PinNum);
        }
        break;
    }
}

void GPIO_SetPinValue(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum, u8 Copy_Value)
{
    switch (Copy_PinPort)
    {
    case GPIO_PortA:
        if (GPIO_PIN_HIGH == Copy_Value)
        {
            GPIOA_BSRR = (0x01 << Copy_PinNum);
        } 
        else if(GPIO_PIN_LOW == Copy_Value)
        {
            GPIOA_BRR = (0x01 << Copy_PinNum);
        }
        break;
    
    case GPIO_PortB:
        if (GPIO_PIN_HIGH == Copy_Value)
        {
            GPIOB_BSRR = (0x01 << Copy_PinNum);
        } 
        else if(GPIO_PIN_LOW == Copy_Value)
        {
            GPIOB_BRR = (0x01 << Copy_PinNum);
        }
        break;
    
    case GPIO_PortC:
        if (GPIO_PIN_HIGH == Copy_Value)
        {
            GPIOC_BSRR = (0x01 << Copy_PinNum);
        } 
        else if(GPIO_PIN_LOW == Copy_Value)
        {
            GPIOC_BRR = (0x01 << Copy_PinNum);
        }
        break;
    }
}

u8 GPIO_GetPinValue(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum)
{
    u8 lOCAL_PinValue = 0;
    switch (Copy_PinPort)
    {
    case GPIO_PortA:
        lOCAL_PinValue = GET_BIT(GPIOA_IDR ,Copy_PinNum);
        break;
    
    case GPIO_PortB:
        lOCAL_PinValue = GET_BIT(GPIOB_IDR ,Copy_PinNum);
        break;
    
    case GPIO_PortC:
        lOCAL_PinValue = GET_BIT(GPIOC_IDR ,Copy_PinNum);
        break;
    }
    return lOCAL_PinValue;
}

void GPIO_SetPortValue(u8 Copy_Port, u16 Copy_Value)
{
 switch (Copy_Port)
    {
    case GPIO_PortA:
        GPIOA_ODR = Copy_Value;
        break;
    
    case GPIO_PortB:
        GPIOB_ODR = Copy_Value;
        break;
    
    case GPIO_PortC:
        GPIOC_ODR = Copy_Value;
        break;
    }
}
