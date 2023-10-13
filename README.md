# counterHEX-with-4-digits-in-MSP430FR5994
Counter BCD with user library to show numbers in hexadecimal format.

A 7 Segment display is used to show numbers in decimal or hexadecimal format. In this repository it was used a common cathode configuration. 
This config. it´s ON with '1' and OFF with '0'.

In bcd_7seg.h you can see HEX coding, inside MSP430, we assigned 1 bit for each segment and 1 bit for each digit. This counter is from 0 to FFFF
