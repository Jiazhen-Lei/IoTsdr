#ifndef _SYSTEM_CLOCK_H_
#define _SYSTEM_CLOCK_H_

#include <driverlib.h>
#include <settings.h>
#include <libraries/board.h>

/**########################Variables and Types############################**/
typedef enum
{
	CLK_MCLK = 0,
	CLK_ACLK,
	CLK_HSMCLK,
	CLK_SMCLK,
	CLK_BCLK
} Clock_Types_t;

/**########################External functions############################**/
void ClockInit( void );
void ClockEnableLFXT(void);
void ClockEnableHFXT(void);
void ClockSetSource(uint32_t source);
void ClockSet(Clock_Types_t type, uint32_t clockSource, uint32_t divider, bool enable);


#endif
