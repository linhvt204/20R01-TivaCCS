/*******************************************************************************
 *  Name of files:  InitGPIO.h
 *  Description:
 *
 * Linh Vu - vu.t.linh204.work@gmail.com
 * Freelance
 * OctGraduate Student
 * Built with CCS v.9.2

 ********************************************************************************/

#ifndef _INITI2C_H
#define _INITI2C_H

#ifdef __cplusplus
extern "C" {
#endif


void Init_I2C0(void);
void Init_I2C1(void);
void Init_I2C2(void);
void Init_I2C3(void);
uint32_t I2CReceive(uint32_t slave_addr, uint8_t reg);
void I2CSend(uint8_t slave_addr, uint8_t num_of_args, ...);
void I2CSendString(uint32_t slave_addr, char array[]);

#ifdef __cplusplus
}
#endif

#endif /* _INITGPIO_H */
