/*
 * File:   OS_program.c
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 16, 2024, 11:10 PM
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"

#include "OS_interface.h"
#include "OS_private.h"
#include "OS_config.h"

void OS_voidCreateTask(u8 Copy_u8ID, u16 Copy_u8Priodicity, void (*Copy_Fptr) (void), u16 Copy_FirstDelay, u8 Copy_ReadyFlag)
{
    OS_Tasks[Copy_u8ID].Priodicity = Copy_u8Priodicity;
    OS_Tasks[Copy_u8ID].Fptr = Copy_Fptr;
    OS_Tasks[Copy_u8ID].FirstDelay = Copy_FirstDelay;
    OS_Tasks[Copy_u8ID].ReadyFlag = Copy_ReadyFlag;
}

void OS_voidStartOS(void)
{
    /*STK INIT*/
    STK_voidInit();
    /*STK START*/
    STK_voidSetIntervalperiod(1000, Scheduler);
}

void Scheduler (void)
{
    for (u8 TaskCounter = 0; TaskCounter < NUMBER_OF_TASKS; TaskCounter++)
    {
        if ((OS_Tasks[TaskCounter].ReadyFlag == Func_READY) && (OS_Tasks[TaskCounter].Fptr != NULL))
        {
            if (OS_Tasks[TaskCounter].FirstDelay == 0)
            {
                OS_Tasks[TaskCounter].FirstDelay =  OS_Tasks[TaskCounter].Priodicity - 1;
                OS_Tasks[TaskCounter].Fptr();
            }
            else
            {
                OS_Tasks[TaskCounter].FirstDelay--;
            }
        }
    }
}

void OS_voidTaskSuspend(u8 Copy_u8ID)
{
    OS_Tasks[Copy_u8ID].ReadyFlag = Func_NOTREADY;
}

void OS_voidTaskResume(u8 Copy_u8ID)
{
    OS_Tasks[Copy_u8ID].ReadyFlag = Func_READY;
}

void OS_voidTaskDelete(u8 Copy_u8ID)
{
	OS_Tasks[Copy_u8ID] = NullStruct;
}
