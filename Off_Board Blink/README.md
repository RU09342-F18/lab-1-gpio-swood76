# Off Board Blink
This repository includes documetation of the impelmentation of the MSP430G2553 20 pin chip on a breadboard to blink 2 red LEDS with reset functionality. As a result, the necessary source file (main.c) specific to the MSP430G2553. Essentially, the code programmed to the chip is identical to the multiple blink code, simply enhanced with reset functionality. Also included in this repository is a detailed explanation of the reset circuit with both video and picture, proper electrical components, and power operations to ensure that the chip was not fried and proper blink and reset functionality was achieved.


![off_board_blinkpic](https://user-images.githubusercontent.com/35699946/45919252-68d92800-be60-11e8-9ce9-e5060954dce8.jpeg)

Figure 1: MSP430G2553 Implemented on breadboard with Proper Reset Circuitry 






## "Power Supply and Electronic Components required?"
Due to the possibility of easily frying the 20 pin chip, proper precaution was followed in buildig the circuit which is listed in its folder with a image illustrating its set up, and video which verifies its multiple blink and reset functionality. To accomplish this wires were drawn from the 3V power supply pins on the G2553 launch pad. This circuit required that a 47 kOhm resistor and 1nF capacitor be used to minimize the power dissipation at the connection of the button to the reset pin of the 20 pin MSP430G2553 chip, specifically pin 16 of the chip. Programming the already written multiple blink code for the MSP430G2553 to the chip and building the above circuit listed as Figure 1 and using the correct componets was all that was requied to be able to control this pin with the push of a button and turn two multiple blinking LEDS off, or reset when blinking. As mentioned previously, attached in this repository is a video file, which displays two multiple blinking, red LEDS which proves the functionality of the above circuit and G2553 chip.
 


![off_board_blink](https://media.giphy.com/media/3JTq6E4b4vZyKDCsk1/giphy.mp4)
