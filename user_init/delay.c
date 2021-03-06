/*******************************************************************************
 *  Name of files:  delay.c
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
#include <user_init/delay.h>

#include "driverlib/sysctl.h"

// For more accurate timing, deal with Systick Timer, start with SysTick_Wait
void delay_us(int ui32us)
{
    SysCtlDelay(ui32us * (SysCtlClockGet() / 3 / 1000000));
}

void delay_ms(int ui32ms)
{
    // 1 clock cycle = 1 / SysCtlClockGet() second
    // 1 SysCtlDelay = 3 clock cycle = 3 / SysCtlClockGet() second
    // 1 second = SysCtlClockGet() / 3
    // 0.001 second = 1 ms = SysCtlClockGet() / 3 / 1000
    SysCtlDelay(ui32ms * (SysCtlClockGet() / 3 / 1000));
}

void delay_s(int ui32s)
{
    SysCtlDelay(ui32s * (SysCtlClockGet() / 3));
}
