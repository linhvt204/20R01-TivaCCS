/*******************************************************************************
 *  Name of files:  InitSSI.c
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Graduate Student
 * October 2019
 * Built with CCS v.9.2

 Note: "Equal Symbol"
 SCL SDA SDO
 SSI0RX      SDI     PA4     MOSI    SDA
 SSI0FSS     SS      PA3     FSS     CS
 SSI0TX      DIN     PA5     MISO    SDO
 SSI0CLK     SCLK    PA2     SCL     SCL     SCK

 SDI slave -> SDO master
 ********************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <user_init/InitSSI.h>

#include "driverlib/sysctl.h"
#include "driverlib/ssi.h"
#include "driverlib/rom_map.h"
#include "inc/hw_memmap.h"

void Init_SSI0(void)
{
    uint32_t scrap;
    scrap = 0;
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI0);
    while (!(SysCtlPeripheralReady(SYSCTL_PERIPH_SSI0)))
    {
    }
    SSIDisable(SSI0_BASE);
    SSIConfigSetExpClk(SSI0_BASE, SysCtlClockGet(), SSI_FRF_MOTO_MODE_3,
    SSI_MODE_MASTER,
                       1000000, 8);
    SSIEnable(SSI0_BASE);
    while (SSIDataGetNonBlocking(SSI0_BASE, &scrap))
    {
    }
}

void Init_SSI1(void)
{
    uint32_t scrap;
    scrap = 0;
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI1);
    while (!(SysCtlPeripheralReady(SYSCTL_PERIPH_SSI1)))
    {
    }
    SSIDisable(SSI1_BASE);
    SSIConfigSetExpClk(SSI1_BASE, SysCtlClockGet(), SSI_FRF_MOTO_MODE_3,
    SSI_MODE_MASTER,
                       1000000, 8);
    SSIEnable(SSI1_BASE);
    while (SSIDataGetNonBlocking(SSI1_BASE, &scrap))
    {
    }
}

void Init_SSI2(void)
{
    uint32_t scrap;
    scrap = 0;
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI2);
    while (!(SysCtlPeripheralReady(SYSCTL_PERIPH_SSI2)))
    {
    }
    SSIDisable(SSI2_BASE);
    SSIConfigSetExpClk(SSI2_BASE, SysCtlClockGet(), SSI_FRF_MOTO_MODE_3,
    SSI_MODE_MASTER,
                       1000000, 8);
    SSIEnable(SSI2_BASE);
    while (SSIDataGetNonBlocking(SSI2_BASE, &scrap))
    {
    }
}

void Init_SSI3(void)
{
    uint32_t scrap;
    scrap = 0;
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI3);
    while (!(SysCtlPeripheralReady(SYSCTL_PERIPH_SSI3)))
    {
    }
    SSIDisable(SSI3_BASE);
    SSIConfigSetExpClk(SSI3_BASE, SysCtlClockGet(), SSI_FRF_MOTO_MODE_3,
    SSI_MODE_MASTER,
                       1000000, 8);
    SSIEnable(SSI3_BASE);
    while (SSIDataGetNonBlocking(SSI3_BASE, &scrap))
    {
    }
}
