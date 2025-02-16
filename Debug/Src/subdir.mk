################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/AFIO_program.c \
../Src/EXTI_program.c \
../Src/GPIO_program.c \
../Src/LEDMATX_program.c \
../Src/LED_program.c \
../Src/NVIC_program.c \
../Src/OS_program.c \
../Src/RCC_program.c \
../Src/SEG7_program.c \
../Src/SP_program.c \
../Src/STK_program.c \
../Src/UART_program.c \
../Src/main.c 

OBJS += \
./Src/AFIO_program.o \
./Src/EXTI_program.o \
./Src/GPIO_program.o \
./Src/LEDMATX_program.o \
./Src/LED_program.o \
./Src/NVIC_program.o \
./Src/OS_program.o \
./Src/RCC_program.o \
./Src/SEG7_program.o \
./Src/SP_program.o \
./Src/STK_program.o \
./Src/UART_program.o \
./Src/main.o 

C_DEPS += \
./Src/AFIO_program.d \
./Src/EXTI_program.d \
./Src/GPIO_program.d \
./Src/LEDMATX_program.d \
./Src/LED_program.d \
./Src/NVIC_program.d \
./Src/OS_program.d \
./Src/RCC_program.d \
./Src/SEG7_program.d \
./Src/SP_program.d \
./Src/STK_program.d \
./Src/UART_program.d \
./Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/AFIO_program.cyclo ./Src/AFIO_program.d ./Src/AFIO_program.o ./Src/AFIO_program.su ./Src/EXTI_program.cyclo ./Src/EXTI_program.d ./Src/EXTI_program.o ./Src/EXTI_program.su ./Src/GPIO_program.cyclo ./Src/GPIO_program.d ./Src/GPIO_program.o ./Src/GPIO_program.su ./Src/LEDMATX_program.cyclo ./Src/LEDMATX_program.d ./Src/LEDMATX_program.o ./Src/LEDMATX_program.su ./Src/LED_program.cyclo ./Src/LED_program.d ./Src/LED_program.o ./Src/LED_program.su ./Src/NVIC_program.cyclo ./Src/NVIC_program.d ./Src/NVIC_program.o ./Src/NVIC_program.su ./Src/OS_program.cyclo ./Src/OS_program.d ./Src/OS_program.o ./Src/OS_program.su ./Src/RCC_program.cyclo ./Src/RCC_program.d ./Src/RCC_program.o ./Src/RCC_program.su ./Src/SEG7_program.cyclo ./Src/SEG7_program.d ./Src/SEG7_program.o ./Src/SEG7_program.su ./Src/SP_program.cyclo ./Src/SP_program.d ./Src/SP_program.o ./Src/SP_program.su ./Src/STK_program.cyclo ./Src/STK_program.d ./Src/STK_program.o ./Src/STK_program.su ./Src/UART_program.cyclo ./Src/UART_program.d ./Src/UART_program.o ./Src/UART_program.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su

.PHONY: clean-Src

