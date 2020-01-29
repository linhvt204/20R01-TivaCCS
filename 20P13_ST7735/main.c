/*******************************************************************************
 *  Name of files: St7735
 *  Description:
 *  Kết nối tm4c launchpad với màn hình tft 1.44" (Độ phân giải ~128x128) qua
 *  chuẩn giao tiếp SPI
 *  Link mua màn hình: https://chotroihn.vn/man-hinh-tft-1-44-inch-spi-128x128-st7735
 *  Đầu ra kết nối màn hình gồm có 11 chân, theo thứ tự như sau:
 *  VCC/GND/NC/NC/LED/CLK/SDI/RS/RST/CS
 *      + VCC nối với 3.3V hoặc 5V trên launchpad
 *      + GND nối với GND trên launchpad
 *      + NCx2: Not Connect
 *      + LED nối với 3.3V trên launchpad
 *      + CLK = Clock Pin
 *      + SDI = Data Pin
 *      + RS = Register Data
 *      + RST = Reset Pin (Chân không bắt buộc)
 *      + CS = Chip Select
 *  Chuẩn giao tiếp của màn hình với vi điều khiển là SPI, chuẩn này giao tiếp cần 4 chân:
 *      + SCLK = SCK: Serial Clock
 *      + MOSI: Master Output Slave Input
 *      + MISO: Master Input Slave Output
 *      + SS: Slave Select
 *  Thư viện sử dụng từ link Github https://github.com/jtfell/Tiva-ST7735-Library
 *  bao gồm ST7735.h và ST7735.c, chi tiết sử dụng các hàm trong ST7735.c được lưu ở
 *  file Read me_API_ST7735.
 *  Các chân kết nối theo thứ tự như sau với SPI của tm4c sử dụng module 0 (SPI_0) trong tổng số
 *  4 module SPI của tm4c.
 *  VCC -- VBUS(5V)
 *  GND -- GND
 *  LED -- 3.3V
 *  CLK -- CLK -- PA2
 *  SDI -- MOSI -- PA5
 *  RS -- PA6
 *  RST -- PA7
 *  CS -- PA3
 *
 * Linh Vu - K60
 * HaNoi Unversity of Science and Technology (HUST)
 * June 2019
 * Built with CCS v.9.2

 ********************************************************************************/

//****************************************************************************//
// The Includes
//****************************************************************************//
#include "inc/tm4c123gh6pm.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/rom.h"
#include "driverlib/ssi.h"

#include "ST7735.h"
#include "delay.h"
//****************************************************************************//
// The Interrupt Program
//****************************************************************************//

//****************************************************************************//
// The Main Program
//****************************************************************************//
int main(void)
{
    ROM_SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ |
    SYSCTL_OSC_MAIN);
    LcdInit();
    while (1)
    {
        /*fillScreen(ST7735_BLACK);

         fillRoundRect(25, 35, 78, 60, 8, ST7735_WHITE);
         fillTriangle(42, 50, 42, 75, 90, 63, ST7735_RED);
         delay_ms(2000);


         // pause
         fillRoundRect(25, 90, 78, 60, 8, ST7735_WHITE);
         fillRoundRect(39, 98, 20, 45, 5, ST7735_GREEN);
         fillRoundRect(69, 98, 20, 45, 5, ST7735_GREEN);
         delay_ms(5000);

         // play color
         fillTriangle(42, 20, 42, 60, 90, 40, ST7735_BLUE);
         delay_ms(5000);

         // pause color
         fillRoundRect(39, 98, 20, 45, 5, ST7735_RED);
         fillRoundRect(69, 98, 20, 45, 5, ST7735_RED);

         // play color
         fillTriangle(42, 20, 42, 60, 90, 40, ST7735_GREEN);


         //             delay_ms(5000);
         fillScreen(ST7735_BLACK);*/
        fillScreen(ST7735_BLACK);
        drawString("Xin chao, day la san pham cua PE!", 10, 10, ST7735_WHITE,
        ST7735_BLACK,
                   1);
        while (1)
        {
        }
        /*drawString("Xin chao, minh ten   la Linh Vu.", 10, 10, ST7735_WHITE, ST7735_BLACK, 1);

         delay_ms(1000);

         drawString("Rat vui duoc lam     quen voi cac ban!", 10, 30, ST7735_WHITE, ST7735_BLACK, 1);

         delay_ms(1000);

         drawString("Minh duoc lap trinh  boi phan mem CCS.", 10, 50, ST7735_WHITE, ST7735_BLACK, 1);

         delay_ms(1000);

         drawString("Hay gui nhung loi    tot dep nhat cho     nguoi phu nu cua ban vao 20/10 nhe!", 10, 70, ST7735_WHITE, ST7735_BLACK, 1);

         delay_ms(8000);*/
    }
}

int main1(void)
{

    ROM_SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ |
    SYSCTL_OSC_MAIN);    // Run at 80 MHz
    LcdInit();

    //
    // Loop forever.
    //
    while (1)
    {
        delay_ms(1000);
        fillScreen(ST7735_BLACK);
        /*        void drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h,
         uint16_t colour, uint16_t bg)*/
//        drawBitmap(0, 0, quyet_gay, 128, 128, ST7735_BLACK, ST7735_WHITE);
//        delay_ms(5000);
//        fillScreen(ST7735_BLACK);
        /*        void drawChar(int16_t x, int16_t y, unsigned char c,
         uint16_t colour, uint16_t bg, uint8_t size)*/
//        drawChar(50, 50, 'X', ST7735_BLUE, ST7735_BLACK, 5);
//        delay_ms(500);
//        fillScreen(ST7735_BLACK);
        /*        void drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t colour)*/
//        drawCircle(64, 64, 30, ST7735_RED);
        /*        void drawCircleHelper( int16_t x0, int16_t y0, int16_t r, uint8_t cornername, uint16_t colour) */
//        fillScreen(ST7735_BLACK);
//        drawCircleHelper(64, 64, 30, 0b0011, ST7735_RED);
//        delay_ms(5000);
        /*        void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t colour) */
//        fillScreen(ST7735_BLACK);
//        drawFastHLine(64, 64, 32, ST7735_WHITE);
//        delay_ms(500);
        /*        void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t colour)*/
//        drawFastVLine(64, 64, 64, ST7735_WHITE);
        /*        void drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t colour)*/
//        drawRect(64, 64, 10, 20, ST7735_RED);
        /*        void drawRoundRect(int16_t x, int16_t y, int16_t w, int16_t h, int16_t r, uint16_t colour)*/
//        drawRoundRect(32, 32, 64, 64, 10, ST7735_CYAN);
//        drawString("Linh ner", 10, 64, ST7735_COLMOD, ST7735_BLACK, 2);
        /*        void drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
         int16_t x2, int16_t y2, uint16_t colour)*/
//        drawTriangle(32, 32, 32, 100, 100, 66, ST7735_RED);
        /*        void drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap,
         int16_t w, int16_t h, uint16_t colour) */
//        drawXBitmap(0, 0, lily, 128, 128, ST7735_WHITE);
//        fillCircle(64, 64, 32, ST7735_YELLOW);
//        fillCircleHelper(64, 64, 32, 0b0010,
//              30, ST7735_BLUE);
//        invertDisplay(1);
//        delay_ms(500);
//        invertDisplay(0);
//        drawBitmap(0, 0, colour, 90, 90, ST7735_BLACK, ST7735_WHITE);
        int16_t h = 128, w = 128;
        int16_t row, col;
        uint16_t buffidx = 0;
        for (row = 0; row < h; row++)
        { // For each scanline...
            for (col = 0; col < w; col++)
            { // For each pixel...
                //To read from Flash Memory, pgm_read_XXX is required.
                //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
                drawPixel(col, row, ST7735_BLUE);
                buffidx++;
            }
        } // end pixel
    }
}

