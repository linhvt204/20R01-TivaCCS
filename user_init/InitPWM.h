/*******************************************************************************
 *  Name of files:  InitPWM.c
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 ********************************************************************************/

#ifndef _INITPWM_H
#define _INITPWM_H

#ifdef __cplusplus
extern "C" {
#endif

#define PWMPeriod 10000.00

void Init_PWM0(void);
void Init_PWM1(void);

#ifdef __cplusplus
}
#endif

#endif /* _INITPWM_H */
