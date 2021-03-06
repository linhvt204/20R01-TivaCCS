/*******************************************************************************
 *  Name of files:  InitLED.c
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 ********************************************************************************/

#ifndef _INITLED_H
#define _INITLED_H

#ifdef __cplusplus
extern "C"
{
#endif

#define LEDS      (*((volatile unsigned long *)0x40025038))
#define RED       0x02
#define BLUE      0x04
#define GREEN     0x08

void Init_Led(int8_t LedType);
void Init_R();
void Init_G();
void Init_B();

#ifdef __cplusplus
}
#endif

#endif /* _INITLED_H */
