#include <Arduino.h>

/*
 * STM32F4-DISCOVERY
 * Example 1:  LEDs
 */
 
void setup() {
  // put your setup code here, to run once:
  
  // Set the MCU's pin data direction.
  pinMode(PD13, OUTPUT);
  pinMode(PD14, OUTPUT);
  pinMode(PD15, OUTPUT);
  pinMode(PD12, OUTPUT);
  pinMode(PA1, INPUT);

  // Set all outputs LOW to have all LED's initially turned off.
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  // int potentiometreValue = 1;
  // potentiometreValue = analogRead(PA1);

  // int rate = map(potentiometreValue,0,4095,100,1000);
  int rate = 100;

  // Turn off the GREEN LED, turn on the ORANGE LED and wait for 100ms.
  digitalWrite(PD12, LOW);
  digitalWrite(PD13, HIGH);
  delay(rate);
  
  // Turn off the ORANGE LED, turn on the RED LED and wait for 200ms.
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, HIGH);
  delay(rate);

  // Turn off the RED LED, turn on the BLUE LED and wait for 400ms.
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, HIGH);
  delay(rate);

  // Turn off the BLUE LED, turn on the GREEN LED and wait for 800ms.
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, HIGH);
  delay(rate);

  // The code in the "loop()" statement will automatically repeat.
}