/******************************************************************************
 * Name of files:	20P03_ADC
 * Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Gradute Student
 * January 2020
 * Built with CCS v.9.2

 *******************************************************************************/

/*******************************************************************************
 *                              Includes  & Defines
 *******************************************************************************/
//  #include <example.h>
#include <user_init/InitInc.h>
/*******************************************************************************
 *                              Global Variables
 *******************************************************************************/
uint32_t ui32ADC0TempValue[4];
volatile uint32_t ui32TempAvg; // Khi khai bao bien la volatile -> Bien se khong bi
volatile uint32_t ui32TempValueC; // toi uu hoa boi trinh bien dich va cho phep ta
volatile uint32_t ui32TempValueF;   // kiem soat bien tai Watch

uint32_t ui32ADC0PE2S3[1];
uint32_t ui32ADC0PE2S2[4];
uint32_t ui32ADC0PE2S0[8];
/*******************************************************************************
 *                              Function Prototypes
 *******************************************************************************/
uint32_t* GetADC0Temp(void);
uint32_t* GetADC0PE2S3(void);
uint32_t* GetADC0PE2S2(void);
uint32_t* GetADC0PE2S0(void);
/*******************************************************************************
 *                              Main Program
 *******************************************************************************/
// Read temperature from internal chip
int main1(void)
{
    Init_SysCtl(80);
    PinoutSet();
    Init_ADC0Temp();
    while (1)
    {
        GetADC0Temp();
        ui32TempAvg = (ui32ADC0TempValue[0] + ui32ADC0TempValue[1]
                + ui32ADC0TempValue[2] + ui32ADC0TempValue[3] + 2) / 4;
        ui32TempValueC = (1475 - ((2475 * ui32TempAvg)) / 4096) / 10;
        ui32TempValueF = ((ui32TempValueC * 9) + 160) / 5;
    }
}
// Read voltage from PE2, using sequence 3 (1 FIFO)
int main2(void)
{
    Init_SysCtl(80);
    PinoutSet();
    Init_ADC0(1, 3);
    while (1)
    {
        GetADC0PE2S3();
    }
}
// Read voltage from PE2, using sequence 2 (4 FIFO)
int main3(void)
{
    Init_SysCtl(80);
    PinoutSet();
    Init_ADC0(1, 2);
    while (1)
    {
        GetADC0PE2S2();
    }
}
// Read voltage from PE2, using sequence 1 (8 FIFO)
int main(void)
{
    Init_SysCtl(80);
    PinoutSet();
    Init_ADC0(1, 0);
    while (1)
    {
        GetADC0PE2S0();
    }
}
/*******************************************************************************
 *                              Function Definition
 *******************************************************************************/
// Luu y uint32_t* la cach de ham tra ve mot mang
uint32_t* GetADC0Temp(void)
{
    ADCIntClear(ADC0_BASE, 1);
    ADCProcessorTrigger(ADC0_BASE, 1);
    while (!ADCIntStatus(ADC0_BASE, 1, false))
    {
    }
    ADCSequenceDataGet(ADC0_BASE, 1, ui32ADC0TempValue);
    return ui32ADC0TempValue;
}

uint32_t* GetADC0PE2S3(void)
{
    ADCIntClear(ADC0_BASE, 3);
    ADCProcessorTrigger(ADC0_BASE, 3);
    while (!ADCIntStatus(ADC0_BASE, 3, false))
    {
    }
    ADCSequenceDataGet(ADC0_BASE, 3, ui32ADC0PE2S3);
    return ui32ADC0PE2S3;
}

uint32_t* GetADC0PE2S2(void)
{
    ADCIntClear(ADC0_BASE, 2);
    ADCProcessorTrigger(ADC0_BASE, 2);
    while (!ADCIntStatus(ADC0_BASE, 2, false))
    {
    }
    ADCSequenceDataGet(ADC0_BASE, 2, ui32ADC0PE2S2);
    return ui32ADC0PE2S2;
}

uint32_t* GetADC0PE2S0(void)
{
    ADCIntClear(ADC0_BASE, 0);
    ADCProcessorTrigger(ADC0_BASE, 0);
    while (!ADCIntStatus(ADC0_BASE, 0, false))
    {
    }
    ADCSequenceDataGet(ADC0_BASE, 0, ui32ADC0PE2S0);
    return ui32ADC0PE2S0;
}
