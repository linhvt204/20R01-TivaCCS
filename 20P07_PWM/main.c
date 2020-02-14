/******************************************************************************
 * Name of files:   20P07_PWM
 * Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Gradute Student
 * January 2020
 * Built with CCS v.9.3

 *******************************************************************************/

/*******************************************************************************
 *                              Includes  & Defines
 *******************************************************************************/
//  #include <example.h>
#include <user_init/InitInc.h>

//  #define example 0x04
/*******************************************************************************
 *                              Global Variables
 *******************************************************************************/
//  uint32_t example;
volatile uint32_t PF1PWMDen = 255;
volatile uint32_t PF2PWMDen = 0;
volatile uint32_t PF3PWMDen = 0;
volatile uint32_t PWMNum = 255;
volatile uint32_t PF1PWMPeriod, PF2PWMPeriod, PF3PWMPeriod;
/*******************************************************************************
 *                              Function Prototypes
 *******************************************************************************/
//  void example(void);
void RGBPWM(void);
void GetPeriodPWM(void);
/*******************************************************************************
 *                              Main Program
 *******************************************************************************/

int main(void)
{
    Init_SysCtl(80);
    PinoutSet();
    // Init Peripherals
    Init_FPU();
    Init_SysTick();
    Init_PWM1();
    while (1)
    {
        RGBPWM();
        SysTick_Wait1ms(20);
    }
}

/*******************************************************************************
 *                              Function Definition
 *******************************************************************************/
//  void example(void){}
void RGBPWM(void)
{
    GetPeriodPWM();
    PWMPulseWidthSet(PWM1_BASE, PWM_OUT_5, PF1PWMPeriod);
    PWMPulseWidthSet(PWM1_BASE, PWM_OUT_6, PF2PWMPeriod);
    PWMPulseWidthSet(PWM1_BASE, PWM_OUT_7, PF3PWMPeriod);
}

void GetPeriodPWM(void)
{
    if (PF1PWMDen > 0 && PF3PWMDen == 0)
    {
        PF1PWMDen--;
        PF2PWMDen++;
    }
    if (PF2PWMDen > 0 && PF1PWMDen == 0)
    {
        PF2PWMDen--;
        PF3PWMDen++;
    }
    if (PF3PWMDen > 0 & PF2PWMDen == 0)
    {
        PF1PWMDen++;
        PF3PWMDen--;
    }

    PF1PWMPeriod =
            (uint32_t) (((float) PF1PWMDen / (float) PWMNum) * PWMPeriod);
    PF2PWMPeriod =
            (uint32_t) (((float) PF2PWMDen / (float) PWMNum) * PWMPeriod);
    PF3PWMPeriod =
            (uint32_t) (((float) PF3PWMDen / (float) PWMNum) * PWMPeriod);
}
