/******************************************************************************
 * Name of files:   20P14_ESP8266OPENWEATHERMAP
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
#include "UART.h"
#include "esp8266.h"
//  #define example 0x04
/*******************************************************************************
 *                              Global Variables
 *******************************************************************************/
//  uint32_t example;
/*******************************************************************************
 *                              Function Prototypes
 *******************************************************************************/
//  void example(void);
void DisableInterrupts(void);   // Disable interrupts
void EnableInterrupts(void);    // Enable interrupts
long StartCritical(void);       // previous I bit, disable interrupts
void EndCritical(long sr);      // restore I bit to previous value
void WaitForInterrupt(void);    // low power mode
char Fetch[] =
        "GET /data/2.5/weather?q=Vietnam&APPID=2a0844c2902085ad3612f73a5e8017e3 HTTP/1.1\r\nHost:api.openweathermap.org\r\n\r\n";
/*******************************************************************************
 *                              Main Program
 *******************************************************************************/

int main(void)
{
    // IntMasterDisable();
    IntMasterDisable();
    Init_SysCtl(80);
    // PinoutSet();
    // Init Peripherals
    Output_Init();       // UART0 only used for debugging
    printf("\n\r-----------\n\r");
    printf("\n\rSystem starting...\n\r");
    ESP8266_Init(115200);      // connect to access point, set up as client
    ESP8266_GetVersionNumber();
    IntMasterEnable();
    while (1)
    {
        ESP8266_GetStatus();
        if (ESP8266_MakeTCPConnection("api.openweathermap.org"))
        { // open socket in server
            ESP8266_SendTCP(Fetch);
        }
        ESP8266_CloseTCPConnection();
        while (1)
        { // wait for touch
        };
    }
}

/*******************************************************************************
 *                              Function Definition
 *******************************************************************************/
//  void example(void){}
