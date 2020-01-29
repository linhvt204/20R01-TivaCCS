/*******************************************************************************
 *  Name of files:  InitADC.c
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 ********************************************************************************/

#ifndef _INITADC_H
#define _INITADC_H

#ifdef __cplusplus
extern "C" {
#endif

void Init_ADC0(int8_t channel, int8_t sequence);
void Init_ADC1(int8_t channel, int8_t sequence);
void Init_ADC0Temp(void);
void Init_ADC1Temp(void);

#ifdef __cplusplus
}
#endif

#endif /* _INITADC_H */
