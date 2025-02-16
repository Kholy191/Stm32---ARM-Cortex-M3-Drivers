/*
 * File:   OS_private.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 16, 2024, 11:10 PM
 */

#ifndef OS_private_H
#define	OS_private_H
/* --------------------------------Section : Includes-------------------------------- */
#include "OS_config.h"
/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     NULL    (void*)0    
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */
typedef struct
{
    u16 Priodicity      ;
    void (*Fptr) (void) ;
    u16 FirstDelay;
    u8 ReadyFlag;
}Task;

static Task OS_Tasks[NUMBER_OF_TASKS] = {   NULL   };
static Task NullStruct = {
    .FirstDelay = NULL,
    .Fptr = NULL,
    .Priodicity = NULL,
    .ReadyFlag = NULL
};
/* --------------------------------Section: Function Declarations-------------------------------- */
#endif	/* OS_private_H */
