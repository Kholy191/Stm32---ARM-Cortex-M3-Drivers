/*
 * File:   SP_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 17, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_interface.h" 
#include "STK_interface.h"

#include "SP_interface.h"
#include "SP_private.h"
#include "SP_config.h" 

void HSP_voidInit(void)
{
    GPIO_SetPinDirection(HSP_SERIAL_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(HSP_STORAGECLK_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(HSP_SHIFTCLK_PIN, OUTPUT_SPEED_2MHZ_PP);
}

void HSP_voidSendSynchronous(u8 Copy_u8Value)
{
    s8 Local_s8Counter = 0;
    u8 Local_u8Bit = 0;
    for (Local_s8Counter = 7; Local_s8Counter >= 0; Local_s8Counter--)
    {
        Local_u8Bit = GET_BIT(Copy_u8Value, Local_s8Counter);
        GPIO_SetPinValue(HSP_SERIAL_PIN, Local_u8Bit);

        GPIO_SetPinValue(HSP_SHIFTCLK_PIN, GPIO_PIN_HIGH);
        STK_voidSetBusyWait(1);
        GPIO_SetPinValue(HSP_SHIFTCLK_PIN, GPIO_PIN_LOW);
        STK_voidSetBusyWait(1);
    }
    
    GPIO_SetPinValue(HSP_STORAGECLK_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(1);
    GPIO_SetPinValue(HSP_STORAGECLK_PIN, GPIO_PIN_LOW);
    STK_voidSetBusyWait(1);
    
}
