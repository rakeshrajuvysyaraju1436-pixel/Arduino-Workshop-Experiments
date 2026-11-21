# Experiment 02: Bluetooth Controlled LED using Arduino

## Aim
To write a program to turn an LED ON/OFF when '1'/'0' is received from a smartphone using Bluetooth.

## Components Required
- Arduino UNO
- HC-05 Bluetooth Module
- LED
- 220Ω Resistor
- Jumper Wires
- Smartphone

## Software Required
- Arduino IDE 2.3.11
- Bluetooth Serial Terminal Application

## Pin Connections

| Component | Arduino Pin |
|---|---|
| HC-05 TXD | Digital Pin 10 |
| HC-05 RXD | Digital Pin 11 (through voltage divider) |
| HC-05 VCC | 5V (breakout board) |
| HC-05 GND | GND |
| LED Anode | Digital Pin 8 (through resistor) |
| LED Cathode | GND |

## Working Principle
1. The smartphone sends commands through Bluetooth.
2. The HC-05 module receives the commands.
3. When character '1' is received, the LED turns ON.
4. When character '0' is received, the LED turns OFF.

## Programming Concepts
- Bluetooth Communication
- Serial Communication
- SoftwareSerial Library
- Digital Output Control
- Conditional Statements

## Source Code
[Bluetooth_LED.ino](Bluetooth_LED.ino)

## Result
The Arduino program for controlling an LED through Bluetooth commands was developed.

## Note
## Note
The Arduino code was successfully compiled and verified using Arduino IDE. However, physical hardware testing with the Arduino board and HC-05 Bluetooth module has  been performed.
**Platform:** Arduino UNO  
**Programming Language:** Embedded C/C++  
**Communication:** Bluetooth (HC-05)
