/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ahmed El-Kholy
 * @brief          : Main program body
 ******************************************************************************
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "SEG7_interface.h"
#include "LED_interface.h"
#include "NVIC_interface.h"
#include "STK_interface.h"
#include "EXTI_interface.h"
#include "AFIO_interface.h"
#include "EXTI_private.h"
#include "LEDMATX_interface.h"
#include "OS_interface.h"
#include "SP_interface.h"
#include "UART_interface.h"

int main(void)
{
	/*	RCC Init	*/
	RCC_voidInitSysClock();

	RCC_voidEnableClock(RCC_APB2, RCC_GPIOA_CLC_ENABLE);
	/*--------------------------------------------------*/
	STK_voidInit();

	LED_Initialize(GPIO_PortA, PIN0);
	LED_Initialize(GPIO_PortA, PIN1);

	/* Loop forever */
	while(1)
	{
		Application2();
	}

	return 0;
}
void Application1(void){
	LED_Turn_On(GPIO_PortA, PIN0);
	LED_Turn_On(GPIO_PortA, PIN1);
}


void Application2(void){
	LED_Turn_On(GPIO_PortA, PIN0);
	LED_Turn_On(GPIO_PortA, PIN1);
	STK_voidSetBusyWait(500000);
	LED_Turn_Off(GPIO_PortA, PIN0);
	LED_Turn_Off(GPIO_PortA, PIN1);
	STK_voidSetBusyWait(500000);
}
