/*******************************************************************************
 *                              Include Files
 *******************************************************************************/
//  Standard includes
#include <stdint.h>                         // Library of Standard Integer Types
#include <stdbool.h>                        // Library of Standard Boolean Types
#include <stdlib.h>                         // Standard Library
#include <string.h>                         // Library for String functions
#include <inttypes.h>                       // Library for conversions to Integer types
#include <stdio.h>                          // Library for for performing input and output.
//  Tivaware includes
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "inc/hw_pwm.h"
#include "driverlib/pin_map.h"
#include "driverlib/debug.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/systick.h"
#include "driverlib/adc.h"
#include "driverlib/ssi.h"
#include "driverlib/timer.h"
#include "driverlib/interrupt.h"
#include "driverlib/pwm.h"
#include "driverlib/comp.h"
#include "driverlib/hibernate.h"
//  Project includes
#include "user_init/delay.h"
#include "user_init/InitADC.h"
#include "user_init/InitFPU.h"
#include "user_init/InitGPIO.h"
#include "user_init/InitI2C.h"
#include "user_init/InitLed.h"
#include "user_init/InitPWM.h"
#include "user_init/InitSSI.h"
#include "user_init/InitSysCtl.h"
#include "user_init/InitSysTick.h"
#include "user_init/InitTimer.h"
#include "user_init/InitUART.h"
#include "user_init/uartstdio.h"
#include "user_init/InitWTimer.h"
#include "user_init/InitPWM.h"
#include "user_init/InitComparator.h"
#include "user_init/InitHibernation.h"
//  Pinout includes
#include "Debug/syscfg/pinout.h"
