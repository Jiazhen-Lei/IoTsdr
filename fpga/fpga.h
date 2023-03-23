#ifndef _FPGA_H_
#define _FPGA_H_

#include <libraries/board.h>
#include <settings.h>
#include <libraries/gpio.h>
#include <libraries/spi.h>

/**########################External Functions############################**/
void fpgaReset(void);
void fpgaSetConfig(uint8_t config);
uint8_t fpgaWrite(uint8_t data);
void fpgaWriteBuffer(uint8_t *buffer, uint8_t size);
void fpgaReadBuffer(uint8_t *buffer, uint8_t size, uint8_t data);


#endif
