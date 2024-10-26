#include <Arduino.h>

// define pin constants
#define LED_PIN 13

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(2, INPUT);
    digitalWrite(2, HIGH);
}

void loop() {
    int value = digitalRead(2);
    if (value == HIGH) {
        digitalWrite(LED_PIN, LOW);
    } else {
        digitalWrite(LED_PIN, HIGH);
    }
}