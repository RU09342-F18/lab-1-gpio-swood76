# Button Blink
This repository includes the necessary files to execute a switch on both the MSP430FR2311 and MSP430G2553. The switch rests in the normally closed position such that when the button is pressed the LED is turned off and is on prior to being pressed. Includes code which implemented both the simple button blink on the MSP430FR2311 and blink color change on button press on the MSP430G25

# Code
In general, the code to accomplish a basic switch on both the MSP430FR2311 and MSP430G2553 are fairly similar. Both programs involve simple condition statements, which verify if the button is pressed by performing an AND operation between register P1IN and its respective bit. For example, FR2311's button is configured and controlled as an output or input with bit 1 since the button is P1.1 through the intialization of P1DIR, if met LED is turned off at the moment bit1 and pin1 are high due to the AND operation, if this condition is not met, meaning the button is not pressed then the LED is left on. Since the application requires a switch, or input from the user, the P1DIR register is configured with the complement of bit1, which is why as mentioned the switch rests in the normally closed position due to the fact bit1 is set as 0, and does not change until P1.1 is pressed, and of course bitwise AND results in a logical '0' for (0 & obxxxxxxxx) regardless what is in the P1IN register. More information regarding the bitwise operations is described within each program.


# Author
Scott Wood

