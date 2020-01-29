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

#include "driverlib/rom_map.h"
#include "driverlib/uart.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"
#include "utils/uartstdio.h"
#include "inc/hw_uart.h"
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "user_init/InitLED.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"

// RED-PF1  ;   GREEN-PF3   ;   BLUE-PF2
// add #include "user_init/InitLED.h"
// do somethings like:  Init_Led(RED | GREEN | BLUE);LEDS ^= BLUE|GREEN|RED;
void Init_Led(int8_t LedType)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }
    if (LedType == RED)
    {
        Init_R();
    }
    else if (LedType == GREEN)
    {
        Init_G();
    }
    else if (LedType == BLUE)
    {
        Init_B();
    }
    else if (LedType == (RED | GREEN))
    {
        Init_R();
        Init_G();
    }
    else if (LedType == (GREEN | BLUE))
    {
        Init_G();
        Init_B();
    }
    else if (LedType == (RED | BLUE))
    {
        Init_R();
        Init_B();
    }
    else if (LedType == (RED | GREEN | BLUE))
    {
        Init_R();
        Init_G();
        Init_B();
    }
}

void Init_R()
{
    MAP_GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);
}
void Init_G()
{
    MAP_GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3);
}
void Init_B()
{
    MAP_GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);
}

