/*******************************************************************************
 *  Name of files:  delay.h
 *  Description:    Header file cho h�m delay
 *  delay_ms(int)
 *  delay_s(int)
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

********************************************************************************/

#ifndef _DELAY_H
#define _DELAY_H

#ifdef __cplusplus
extern "C" {
#endif

void delay_us(int ui32us);
void delay_ms(int ui32ms);
void delay_s(int ui32s);

#ifdef __cplusplus
}
#endif

#endif /* _DELAY_H */
