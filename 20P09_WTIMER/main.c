/******************************************************************************
 * Name of files:   20P09_WTIMER
 * Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Gradute Student
 * January 2020
 * Built with CCS v.9.3

 *******************************************************************************/

/*******************************************************************************
 *                              Includes  & Defines
 *******************************************************************************/
//  #include <example.h>
#include <user_init/InitInc.h>
#include <InitWTimer.h>
//  #define example 0x04
/*******************************************************************************
 *                              Global Variables
 *******************************************************************************/
//  uint32_t example;

/*******************************************************************************
 *                              Function Prototypes
 *******************************************************************************/
//  void example(void);
void WTimer0IntHandler(void);
/*******************************************************************************
 *                              Main Program
 *******************************************************************************/

// Đặt chế độ 32-bit cho timer0, mỗi lần ngắt đến chương trình phục vụ ngắt.
int main(void)
{
    Init_SysCtl(80);
    // Disable master interrupt while setting up
    IntMasterDisable();
    // Init Peripherals
    Init_Led(RED | GREEN | BLUE);
    Init_WTimer0();
    // Enable master interrupt
    IntMasterEnable();
    while (1)
    {
    }
}

/*******************************************************************************
 *                              Function Definition
 *******************************************************************************/
//  void example(void){}
void WTimer0IntHandler(void)
{
    // Clear the timer interrupt
    TimerIntClear(WTIMER0_BASE, TIMER_TIMA_TIMEOUT);
    // Read the current state of the GPIO pin and
    // write back the opposite state
    if (GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_3))
    {
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3, 0);
    }
    else
    {
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x08);
    }
}
