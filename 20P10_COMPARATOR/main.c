/******************************************************************************
 * Name of files:   20P10_Comparator
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

//  #define example 0x04
/*******************************************************************************
 *                              Global Variables
 *******************************************************************************/
//  uint32_t example;
bool Comp_out;
/*******************************************************************************
 *                              Function Prototypes
 *******************************************************************************/
//  void example(void);
/*******************************************************************************
 *                              Main Program
 *******************************************************************************/
// failed, debugging...
int main1(void)
{
    IntMasterDisable();
    Init_SysCtl(80);
    PinoutSet();
    // Init Peripherals
    Init_Led(RED | GREEN | BLUE);
    Init_Comparator0();
    IntMasterEnable();
    while (1)
    {
        SysCtlDelay(2000);
        Comp_out = ComparatorValueGet(COMP_BASE, 0);   // read comparator output
        SysCtlDelay(2000);
    }
}

int main(void)
{
    Init_SysCtl(80);
    PinoutSet();
    // Init Peripherals
    Init_Led(RED | GREEN | BLUE);
    Init_Comparator0();
    while (1)
    {
        SysCtlDelay(2000);
        Comp_out = ComparatorValueGet(COMP_BASE, 0);   // read comparator output
        SysCtlDelay(2000);
    }

}

/*******************************************************************************
 *                              Function Definition
 *******************************************************************************/
//  void example(void){}
void IntComparator0Handler(void)
{
    ComparatorIntClear(COMP_BASE, 0);
    // If Output is high then GREEN; else then RED
    if (Comp_out)
    {
        LEDS = GREEN;
    }
    else
        LEDS = RED;
}
