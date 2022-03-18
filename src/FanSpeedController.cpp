#include <Arduino.h>

#define PWM25 64
#define PWM50 127
#define PWM75 191
#define PWM100 255

void setup() {
  pinMode(PIN_PB0, INPUT_PULLUP);
  pinMode(PIN_PB1, INPUT_PULLUP);
  pinMode(PIN_PB2, INPUT_PULLUP);
  pinMode(PIN_PB3, INPUT_PULLUP);
  pinMode(PIN_PB4, OUTPUT);

  bitSet(PLLCSR, PCKE);   // Use 64MHz internal asynchronous clock
	bitSet(TCCR1,  CS10);   // No prescaler
  bitSet(GTCCR,  COM1B1); // OC1B (PIN_PB4) to HIGH on $00 and to LOW on match with OCR1B
  
	OCR1B = 0;              // Start with 0% duty cycle
}

void loop() {
  
  if (digitalRead(PIN_PB2) == LOW) {
    OCR1B = PWM25;
  }
  else if (digitalRead(PIN_PB1) == LOW) {
    OCR1B = PWM50;
  } 
  else if (digitalRead(PIN_PB0) == LOW) {
    OCR1B = PWM75;
  } 
  else if (digitalRead(PIN_PB3) == LOW) {
    OCR1B = PWM100;
  }
  // else don't change
}
