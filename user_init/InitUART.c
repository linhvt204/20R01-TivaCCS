/*******************************************************************************
 *  Name of files:  InitUART.c
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 ********************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "driverlib/uart.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"
#include "utils/uartstdio.h"
#include "inc/hw_uart.h"
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"

void Init_UART0(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(0, baudrate, 16000000);
    UARTIntEnable(UART0_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART0);
}

void Init_UART1(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART1);
    UARTClockSourceSet(UART1_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(1, baudrate, 16000000);
    UARTIntEnable(UART1_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART1);
}

void Init_UART2(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART2);
    UARTClockSourceSet(UART2_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(2, baudrate, 16000000);
    UARTIntEnable(UART2_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART2);
}

void Init_UART3(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART3);
    UARTClockSourceSet(UART3_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(3, baudrate, 16000000);
    UARTIntEnable(UART3_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART3);
}

void Init_UART4(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART4);
    UARTClockSourceSet(UART4_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(4, baudrate, 16000000);
    UARTIntEnable(UART4_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART4);
}

void Init_UART5(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART5);
    UARTClockSourceSet(UART5_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(5, baudrate, 16000000);
    UARTIntEnable(UART5_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART5);
}

void Init_UART6(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART6);
    UARTClockSourceSet(UART6_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(6, baudrate, 16000000);
    UARTIntEnable(UART6_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART6);
}

void Init_UART7(int32_t baudrate)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART7);
    UARTClockSourceSet(UART7_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(7, baudrate, 16000000);
    UARTIntEnable(UART7_BASE, UART_INT_RX | UART_INT_RT);
    IntEnable(INT_UART7);
}

void Float2UART(float number)
{
    int32_t i32IntegerPart;
    int32_t i32FractionPart;
    i32IntegerPart = (int32_t) number;
    i32FractionPart = (int32_t) (number * 1000.0f);
    i32FractionPart = i32FractionPart - (i32IntegerPart * 1000);
    if (i32FractionPart < 0)
    {
        i32FractionPart *= -1;
    }
    UARTprintf("%3d.%03d\n", i32IntegerPart, i32FractionPart);
}
