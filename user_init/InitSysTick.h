/*******************************************************************************
 *  Name of files:  InitSysTick.h
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 ********************************************************************************/

#include <stdint.h>
#define NVIC_ST_CTRL_COUNT      0x00010000  // Count flag
#define NVIC_ST_CTRL_CLK_SRC    0x00000004  // Clock Source
#define NVIC_ST_CTRL_INTEN      0x00000002  // Interrupt enable
#define NVIC_ST_CTRL_ENABLE     0x00000001  // Counter mode
#define NVIC_ST_RELOAD_M        0x00FFFFFF  // Counter load value

#ifndef _INITSYSTICK_H
#define _INITSYSTICK_H

#ifdef __cplusplus
extern "C"
{
#endif

// Initialize SysTick with busy wait running at bus clock.
void Init_SysTick(void);

// Time delay using busy wait.
// The delay parameter is in units of the core clock. (units of 20 nsec for 50 MHz clock)
void SysTick_Wait(uint32_t delay);

// Time delay using busy wait.
// This assumes 80 MHz system clock.
void SysTick_Wait1us(uint32_t delay);
void SysTick_Wait1ms(uint32_t delay);
void SysTick_Wait1s(uint32_t delay);
void SysTick_Wait1m(uint32_t delay);
void SysTick_Wait1h(uint32_t delay);

#ifdef __cplusplus
}
#endif

#endif /* INITSYSTICK */
