
#define PWM25 64
#define PWM50 128
#define PWM75 175
#define PWM100 255

void setup() {
  pinMode(PIN_PB0, INPUT_PULLUP);
  pinMode(PIN_PB1, INPUT_PULLUP);
  pinMode(PIN_PB2, INPUT_PULLUP);
  pinMode(PIN_PB3, INPUT_PULLUP);
  pinMode(PIN_PB4, OUTPUT);
}

void loop() {
  
  if (digitalRead(PIN_PB2) == LOW) {
    analogWrite(PIN_PB4, PWM25);
  }
  else if (digitalRead(PIN_PB1) == LOW) {
    analogWrite(PIN_PB4, PWM50);
  } 
  else if (digitalRead(PIN_PB0) == LOW) {
    analogWrite(PIN_PB4, PWM75);
  } 
  else if (digitalRead(PIN_PB3) == LOW) {
    analogWrite(PIN_PB4, PWM100);
  }
  // else don't change
}
