#include <msp430.h>
// Blink time constants

#define CTR1 3000

#define CTR2 30000

// led bit assignment

#define LED1 BIT0

#define LED2 BIT6



void main(void)

{





    //P1OUT ^= LED1;


int i,j;

WDTCTL = WDTPW + WDTHOLD;

P1DIR |= (LED1|LED2);

i=j=0;

for(;;)

{ // increment both counter

  i++;

  j++;

// check first counter, if end value reset and toggle led

  if (i>CTR1)

      { i=0; P1OUT^=LED1;}

// check 2nd counter, if end value reset and toggle led
  if (j>CTR2)

     { j=0; P1OUT^=LED2;}

} // forever

// End main

}

