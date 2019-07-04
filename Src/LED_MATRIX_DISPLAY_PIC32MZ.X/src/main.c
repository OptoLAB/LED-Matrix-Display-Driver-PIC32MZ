/* 
 * Author: J. Bajic
 */

#include <p32xxxx.h>
#include "CPUConfig.h"
#include "displayDriver.h"


#if (REFRESH_MODE==1)
void __attribute__((vector(_TIMER_2_VECTOR), interrupt(ipl2auto), nomips16)) timer2_handler()
{
    asm volatile("di");
    
    refreshDisplay();
    IFS0bits.T2IF = 0;  // Clear interrupt flag for timer 2
    asm volatile("ei");
    
}

void initTimer(void)
{
    T2CON   = 0x0;      // Disable timer 2 when setting it up
    TMR2    = 0;        // Set timer 2 counter to 0
    IEC0bits.T2IE = 1;  // Disable Timer 2 Interrupt

    // Set up the period. Period = PBCLK3 frequency, which is SYS_FREQ / 2, divided by the frequency we want and then divided by 8 for our chosen pre-scaler.
    PR2 = SYS_FREQ/REFRESH_RATE/256;

    // Set up the pre-scaler
    T2CONbits.TCKPS = 0b111; // Pre-scale of 256

    IFS0bits.T2IF = 0;  // Clear interrupt flag for timer 2
    IPC2bits.T2IP = 2;  // Interrupt priority 3
    IPC2bits.T2IS = 1;  // Sub-priority 1
    IEC0bits.T2IE = 1;  // Enable Timer 2 Interrupt

    // Turn on timer 2
    T2CONbits.TON   = 1;
}
#endif

void set_performance_mode()
{   
    unsigned int cp0;

    // Unlock Sequence
    asm volatile("di"); // Disable all interrupts
    SYSKEY = 0xAA996655;
    SYSKEY = 0x556699AA;  

    // PB1DIV
    // Peripheral Bus 1 cannot be turned off, so there's no need to turn it on
    PB1DIVbits.PBDIV = 1; // Peripheral Bus 1 Clock Divisor Control (PBCLK1 is SYSCLK divided by 2)

    // PB2DIV
    PB2DIVbits.ON = 1; // Peripheral Bus 2 Output Clock Enable (Output clock is enabled)
    PB2DIVbits.PBDIV = 1; // Peripheral Bus 2 Clock Divisor Control (PBCLK2 is SYSCLK divided by 2)

    // PB3DIV
    PB3DIVbits.ON = 1; // Peripheral Bus 2 Output Clock Enable (Output clock is enabled)
    PB3DIVbits.PBDIV = 1; // Peripheral Bus 3 Clock Divisor Control (PBCLK3 is SYSCLK divided by 2)

    // PB4DIV
    PB4DIVbits.ON = 1; // Peripheral Bus 4 Output Clock Enable (Output clock is enabled)
    while (!PB4DIVbits.PBDIVRDY); // Wait until it is ready to write to
    PB4DIVbits.PBDIV = 0; // Peripheral Bus 4 Clock Divisor Control (PBCLK4 is SYSCLK divided by 1)

    // PB5DIV
    PB5DIVbits.ON = 1; // Peripheral Bus 5 Output Clock Enable (Output clock is enabled)
    PB5DIVbits.PBDIV = 1; // Peripheral Bus 5 Clock Divisor Control (PBCLK5 is SYSCLK divided by 2)

    // PB7DIV
    PB7DIVbits.ON = 1; // Peripheral Bus 7 Output Clock Enable (Output clock is enabled)
    PB7DIVbits.PBDIV = 0; // Peripheral Bus 7 Clock Divisor Control (PBCLK7 is SYSCLK divided by 1)

    // PB8DIV
    PB8DIVbits.ON = 1; // Peripheral Bus 8 Output Clock Enable (Output clock is enabled)
    PB8DIVbits.PBDIV = 1; // Peripheral Bus 8 Clock Divisor Control (PBCLK8 is SYSCLK divided by 2)

    // PRECON - Set up prefetch
 //   PRECONbits.PFMSECEN = 0; // Flash SEC Interrupt Enable (Do not generate an interrupt when the PFMSEC bit is set)
 //   PRECONbits.PREFEN = 0b11; // Predictive Prefetch Enable (Enable predictive prefetch for any address)
 //   PRECONbits.PFMWS = 0b010; // PFM Access Time Defined in Terms of SYSCLK Wait States (Two wait states)

    // Set up caching
    cp0 = _mfc0(16, 0);
    cp0 &= ~0x07;
    cp0 |= 0b011; // K0 = Cacheable, non-coherent, write-back, write allocate
    _mtc0(16, 0, cp0);  

    // Lock Sequence
    SYSKEY = 0x33333333;
    asm volatile("ei"); // Enable all interrupts
}


void init(void)
{
    set_performance_mode();

    ANSELB = 0;
    ANSELE = 0;
    ANSELG = 0;

#if (REFRESH_MODE==1)
    initTimer();
#endif 
    
#ifdef USE_SD_CARD
    unmountSD();   
#endif 
}

void main(void) 
{
    init();
    DATA_LED_IO;
    DATA_LED(1);
    
    setup();

    while(1)
    { 
        loop(); 
    }
}