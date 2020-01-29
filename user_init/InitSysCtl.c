/*******************************************************************************
 *  Name of files:  InitSysctl.c
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
#include <user_init/InitSysCtl.h>

#include "driverlib/sysctl.h"

void Init_SysCtl(int8_t SystemClock)
{
    // Set Clock System at X = 400/2/a (MHz )with SysCtlClockSet(SYSCTL_SYSDIV_a)
    // Maximize Clock System is 80 MHz with a = 2_5
    if (SystemClock == 80)
    {
        SysCtlClockSet(
                SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ
                        | SYSCTL_OSC_MAIN);
    }
    else if (SystemClock == 50)
    {
        SysCtlClockSet(
        SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    }
    else if (SystemClock == 40)
    {
        SysCtlClockSet(
        SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    }
}
