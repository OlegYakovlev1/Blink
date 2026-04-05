#include <Arduino.h>

#define LED_RED 18
#define LED_BLUE 16

void blinkLed(int, int, int, int);

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

void loop() {
  blinkLed(LED_RED, 2, 120, 100);
  delay(150);

  blinkLed(LED_BLUE, 2, 120, 100);
  delay(150);
}

void blinkLed(int pin, int times, int onDelay, int offDelay) {
  for (int i = 0; i < times; i++) {
    digitalWrite(pin, HIGH);
    delay(onDelay);
    digitalWrite(pin, LOW);
    delay(offDelay);
  }
}