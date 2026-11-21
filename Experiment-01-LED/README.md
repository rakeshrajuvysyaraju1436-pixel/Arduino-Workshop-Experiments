LED Interfacing using Arduino

### Aim
To familiarize ourselves with Arduino and perform the necessary software installation. To interface an LED with Arduino and write a program to turn ON the LED for 1 second after every 2 seconds.

### Components Required
- Arduino UNO
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

### Software Used
- Arduino IDE 2.3.11

### Pin Connections
- Arduino Digital Pin 13 → LED Anode (through 220Ω resistor)
- LED Cathode → GND

### Working Principle
1. Configure digital pin 13 as OUTPUT.
2. Set the pin HIGH to turn ON the LED.
3. Keep the LED ON for 1 second.
4. Set the pin LOW to turn OFF the LED.
5. Keep the LED OFF for 2 seconds.
6. Repeat the process continuously.

### Programming Concepts
- pinMode()
- digitalWrite()
- delay()
- Digital Output Control

### Source Code
[View LED.ino](LED.ino)

### Result
The Arduino LED interfacing program was prepared and documented successfully.

### Note
This program is uploaded for learning and documentation purposes. It has  been tested on physical Arduino hardware.

---
**Platform:** Arduino UNO  
**Programming Language:** Embedded C/C++  
**Category:** Arduino Workshop / Embedded Systems
