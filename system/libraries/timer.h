#ifndef _SYSTEM_TIMER_H_
#define _SYSTEM_TIMER_H_
#include <driverlib.h>
#include <stdio.h>
#include <settings.h>
#include "ota/ota.h"
#include <libraries/board.h>

/**########################Variables and Types############################**/
/* Timer object description */
typedef struct TimerEvent_s {
    uint32_t Timestamp;         //! Current timer value
    uint32_t ReloadValue;       //! Timer delay value
    bool IsRunning;             //! Is the timer currently running
    void ( *Callback )( void ); //! Timer IRQ callback function
    struct TimerEvent_s *Next;  //! Pointer to the next Timer object.
} TimerEvent_t;

/* Timer time variable definition */
#ifndef TimerTime_t
typedef uint32_t TimerTime_t;
#endif

/**########################Functions############################**/
void TimerInit(void);
void TimerA1SetStart(uint16_t time_ms);
void TimerA1Stop(void);

#endif
