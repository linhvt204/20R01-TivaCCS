/******************************************************************************
 * Name of files:   20P05_SPI
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
uint32_t xl, xh, yl, yh, zl, zh;
/*******************************************************************************
 *                              Function Prototypes
 *******************************************************************************/
void GetData(void);
/*******************************************************************************
 *                              Main Program
 *******************************************************************************/

int main(void)
{
    Init_SysCtl(80);
    Init_Led(RED);
    PinoutSet();
    Init_SSI0();
    while (1)
    {
        GetData();
        LEDS ^= 0x04;
        delay_s(1);
    }
}

/*******************************************************************************
 *                              Function Definition
 *******************************************************************************/
void GetData(void)
{
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataPut(SSI0_BASE, 0x32);
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataGet(SSI0_BASE, &xl); //Puts a data element into the SSI transmit FIFO
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataPut(SSI0_BASE, 0x33);
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataGet(SSI0_BASE, &xh); //Puts a data element into the SSI transmit FIFO
    while (SSIBusy(SSI0_BASE))
        ;

    SSIDataPut(SSI0_BASE, 0x34);
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataGet(SSI0_BASE, &yl); //Puts a data element into the SSI transmit FIFO
    while (SSIBusy(SSI0_BASE))
        ;

    SSIDataPut(SSI0_BASE, 0x35);
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataGet(SSI0_BASE, &yh); //Puts a data element into the SSI transmit FIFO
    while (SSIBusy(SSI0_BASE))
        ;

    SSIDataPut(SSI0_BASE, 0x36);
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataGet(SSI0_BASE, &zl); //Puts a data element into the SSI transmit FIFO
    while (SSIBusy(SSI0_BASE))
        ;

    SSIDataPut(SSI0_BASE, 0x37);
    while (SSIBusy(SSI0_BASE))
        ;
    SSIDataGet(SSI0_BASE, &zh); //Puts a data element into the SSI transmit FIFO
    while (SSIBusy(SSI0_BASE))
        ;
}
