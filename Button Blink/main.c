#include <msp430fr2311.h>

//***************************************************************************************
//#include <msp430g2231.h>



#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer

    P1OUT &= ~BIT0;                         // Clear P1.0 output latch for a defined power-on state
    P1DIR |= BIT0;                          // Set P1.0 to output direction

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings

    P1DIR &= ~BIT1;               // P1.3 (SW2) -> Input
      P1REN |= BIT1;              // P1.3 Pull Up/Down Enable
      P1OUT |= BIT1;              // P1.3 Pull Up Enable

      while(1)
      {
          if(P1IN & BIT1)         // If SW is NOT pressed
              P1OUT &= ~BIT0;     // LED OFF
          else
              P1OUT |= BIT0;      // else LED ON
      }
  }
/*
    while(1)
    {
        if
        P1OUT ^= BIT0;                      // Toggle P1.0 using exclusive-OR
        //__delay_cycles(100000);             // Delay for 100000*(1/MCLK)=0.1s
    }
    */





