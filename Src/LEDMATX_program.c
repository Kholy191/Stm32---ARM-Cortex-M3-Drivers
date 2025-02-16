/*
 * File:   LEDMATX_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 15, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_interface.h" 
#include "STK_interface.h"

#include "LEDMATX_interface.h"
#include "LEDMATX_private.h"
#include "LEDMATX_config.h" 

void HLEDMATX_voidInit(void)
{   
    /*  Row Init    */
    GPIO_SetPinDirection(LEDMATX_ROW0_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW1_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW2_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW3_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW4_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW5_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW6_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_ROW7_PIN, OUTPUT_SPEED_2MHZ_PP);

    /*  COL Init    */
    GPIO_SetPinDirection(LEDMATX_COL0_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL1_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL2_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL3_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL4_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL5_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL6_PIN, OUTPUT_SPEED_2MHZ_PP);
    GPIO_SetPinDirection(LEDMATX_COL7_PIN, OUTPUT_SPEED_2MHZ_PP);

}

void HLEDMATX_voidDisplay(u8 *Copy_u8Data)
{
        /*  Col 0 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[0]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL0_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);
    
    /*  Col 1 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[1]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL1_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);

    /*  Col 2 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[2]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL2_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);

    /*  Col 3 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[3]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL3_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);

    /*  Col 4 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[4]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL4_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);

    /*  Col 5 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[5]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL5_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);

    /*  Col 6 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[6]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL6_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);

    /*  Col 7 */
    /*Disable all Columuns*/
    DisableColumns();
    /*Set Rows*/
    SetRows(Copy_u8Data[7]);
    /*En Col*/
    GPIO_SetPinValue(LEDMATX_COL7_PIN, GPIO_PIN_HIGH);
    STK_voidSetBusyWait(2500);
}

static void DisableColumns(void)
{
    GPIO_SetPinValue(LEDMATX_COL0_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL1_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL2_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL3_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL4_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL5_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL6_PIN, GPIO_PIN_LOW);
    GPIO_SetPinValue(LEDMATX_COL7_PIN, GPIO_PIN_LOW);
}

static void SetRows(u8 Copy_u8Data)
{
    u8 LocalU8Bit = ~(Copy_u8Data);
    
    GPIO_SetPinValue(LEDMATX_ROW0_PIN, GET_BIT(LocalU8Bit, 0));
    GPIO_SetPinValue(LEDMATX_ROW1_PIN, GET_BIT(LocalU8Bit, 1));
    GPIO_SetPinValue(LEDMATX_ROW2_PIN, GET_BIT(LocalU8Bit, 2));
    GPIO_SetPinValue(LEDMATX_ROW3_PIN, GET_BIT(LocalU8Bit, 3));
    GPIO_SetPinValue(LEDMATX_ROW4_PIN, GET_BIT(LocalU8Bit, 4));
    GPIO_SetPinValue(LEDMATX_ROW5_PIN, GET_BIT(LocalU8Bit, 5));
    GPIO_SetPinValue(LEDMATX_ROW6_PIN, GET_BIT(LocalU8Bit, 6));
    GPIO_SetPinValue(LEDMATX_ROW7_PIN, GET_BIT(LocalU8Bit, 7));
}

