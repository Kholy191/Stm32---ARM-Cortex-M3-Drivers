/*
 * File:   GPIO_interface.h
 * Author: Ahmed El-Kholy
 *
 * Version :    V01
 * Created on Febrauary 5, 2024, 11:10 PM
 */

#ifndef GPIO_interface_H
#define	GPIO_interface_H
/* --------------------------------Section : Includes-------------------------------- */

/* --------------------------------Section: Macro Declarations-------------------------------- */
#define     GPIO_PortA      0
#define     GPIO_PortB      1
#define     GPIO_PortC      2

#define     GPIO_PIN_LOW    0
#define     GPIO_PIN_HIGH   1

#define     INPUT_ANALOG                0b0000
#define     INPUT_FLOATING              0b0100
#define     INPUT_PU                 	5
#define     INPUT_PD                 	6

#define     OUTPUT_SPEED_10MHZ_PP       0b0001
#define     OUTPUT_SPEED_10MHZ_OD       0b0101
#define     OUTPUT_SPEED_10MHZ_AFPP     0b1001
#define     OUTPUT_SPEED_10MHZ_AFOD     0b1101

#define     OUTPUT_SPEED_2MHZ_PP        0b0010
#define     OUTPUT_SPEED_2MHZ_OD        0b0110
#define     OUTPUT_SPEED_2MHZ_AFPP      0b1010
#define     OUTPUT_SPEED_2MHZ_AFOD      0b1110

#define     OUTPUT_SPEED_50MHZ_PP       0b0011
#define     OUTPUT_SPEED_50MHZ_OD       0b0111
#define     OUTPUT_SPEED_50MHZ_AFPP     0b1011
#define     OUTPUT_SPEED_50MHZ_AFOD     0b1111
/* --------------------------------Section: Macro Functions Declarations-------------------------------- */

/* --------------------------------Section: Data Type Declarations-------------------------------- */
typedef enum {
    PIN0 = 0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7,
    PIN8,
    PIN9,
    PIN10,
    PIN11,
    PIN12,
    PIN13,
    PIN14,
    PIN15
}GPIO_PinNumber;
/* --------------------------------Section: Function Declarations-------------------------------- */
void GPIO_SetPinDirection(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum, u8 Copy_Mode);
void GPIO_SetPinValue(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum, u8 Copy_Value);
u8 GPIO_GetPinValue(u8 Copy_PinPort, GPIO_PinNumber Copy_PinNum);
void GPIO_SetPortValue(u8 Copy_Port, u16 Copy_Value);


#endif	/* GPIO_interface_H */
