/*******************************************************************************
 *  Name of files:  InitADC.c
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 ********************************************************************************/

//  Standard includes
#include <stdint.h>                         // Library of Standard Integer Types
#include <stdbool.h>                        // Library of Standard Boolean Types
#include <stdlib.h>                         // Standard Library
#include <string.h>                         // Library for String functions
#include <inttypes.h>                       // Library for conversions to Integer types
//  Tivaware includes
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/pin_map.h"
#include "driverlib/debug.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/adc.h"
//  Project includes
#include "user_init/delay.h"
#include "user_init/InitGPIO.h"
#include "user_init/InitSysCtl.h"
#include "user_init/InitADC.h"

void Init_ADC0(int8_t channel, int8_t sequence)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    if (channel == 01)
    {
        if (sequence == 03)
        {
            ADCHardwareOversampleConfigure(ADC0_BASE, 64);
            ADCSequenceConfigure(ADC0_BASE, sequence, ADC_TRIGGER_PROCESSOR, 0);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 0, // 0 vi duy nhat dept FIFO = 1
                                     channel | ADC_CTL_IE | ADC_CTL_END);
            ADCSequenceEnable(ADC0_BASE, sequence);
        }
        else if (sequence == 02)
        {
            ADCHardwareOversampleConfigure(ADC0_BASE, 64);
            ADCSequenceConfigure(ADC0_BASE, sequence, ADC_TRIGGER_PROCESSOR, 0);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 0, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 1, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 2, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 3, // 3 vi duy nhat dept FIFO = 4
                                     channel | ADC_CTL_IE | ADC_CTL_END);
            ADCSequenceEnable(ADC0_BASE, sequence);
        }
        else if (sequence == 00)
        {
            ADCHardwareOversampleConfigure(ADC0_BASE, 64);
            ADCSequenceConfigure(ADC0_BASE, sequence, ADC_TRIGGER_PROCESSOR, 0);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 0, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 1, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 2, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 3, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 4, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 5, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 6, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 7, // 8 vi duy nhat dept FIFO = 8
                                     channel | ADC_CTL_IE | ADC_CTL_END);
            ADCSequenceEnable(ADC0_BASE, sequence);
        }
        else if (sequence == 01)
        {
            ADCHardwareOversampleConfigure(ADC0_BASE, 64);
            ADCSequenceConfigure(ADC0_BASE, sequence, ADC_TRIGGER_PROCESSOR, 0);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 0, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 1, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 2, channel);
            ADCSequenceStepConfigure(ADC0_BASE, sequence, 3, // 3 vi duy nhat dept FIFO = 4
                                     channel | ADC_CTL_IE | ADC_CTL_END);
            ADCSequenceEnable(ADC0_BASE, sequence);
        }
    }
}

void Init_ADC1(int8_t channel, int8_t sequence)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC1);
	if (channel == 01){
		if (sequence == 00){
		}
		else if (sequence == 01){
		}
		else if (sequence == 02){
		}
		else if (sequence == 03){
		}
	}
	else if (channel == 02){
		if (sequence == 00){
		}
		else if (sequence == 01){
		}
		else if (sequence == 02){
		}
		else if (sequence == 03){
		}
	}
}

void Init_ADC0Temp(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);

    ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);
    ADCSequenceStepConfigure(ADC0_BASE, 1, 0, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE, 1, 1, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE, 1, 2, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE, 1, 3,
    ADC_CTL_TS | ADC_CTL_IE | ADC_CTL_END);

    ADCSequenceEnable(ADC0_BASE, 1);
}

void Init_ADC1Temp(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);

    ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);
    ADCSequenceStepConfigure(ADC1_BASE, 1, 0, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC1_BASE, 1, 1, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC1_BASE, 1, 2, ADC_CTL_TS);
    ADCSequenceConfigure(ADC1_BASE, 1, 3,
    ADC_CTL_TS | ADC_CTL_IE | ADC_CTL_END);

    ADCSequenceEnable(ADC1_BASE, 1);
}
