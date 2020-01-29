/*******************************************************************************
 *  Name of files:  InitPWM.c
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
#include "driverlib/pwm.h"
#include <user_init/InitPWM.h>
#include <user_init/InitInc.h>

// With f_clk = 80Mhz -> Period PWM = (12.5*10^-9)*(10000) = 0.125(ms)

void Init_PWM0(void)
{

}

// Specified output initialize on PF1, PF2, and PF3.
void Init_PWM1(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);
    SysCtlPWMClockSet(SYSCTL_PWMDIV_1);

    PWMGenConfigure(PWM1_BASE, PWM_GEN_2,
                    PWM_GEN_MODE_UP_DOWN | PWM_GEN_MODE_DB_NO_SYNC);
    PWMGenConfigure(PWM1_BASE, PWM_GEN_3,
                    PWM_GEN_MODE_UP_DOWN | PWM_GEN_MODE_DB_NO_SYNC);

    PWMGenPeriodSet(PWM1_BASE, PWM_GEN_2, PWMPeriod);
    PWMGenPeriodSet(PWM1_BASE, PWM_GEN_3, PWMPeriod);

    PWMGenEnable(PWM1_BASE, PWM_GEN_2);
    PWMGenEnable(PWM1_BASE, PWM_GEN_3);

    PWMOutputState(PWM1_BASE, PWM_OUT_5_BIT | PWM_OUT_6_BIT | PWM_OUT_7_BIT,
                   true);
}

