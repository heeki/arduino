#include <Arduino.h>

const int ledPin = 13;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(2, INPUT);
    digitalWrite(2, HIGH);
}

void loop() {
    int value = digitalRead(2);
    if (value == HIGH) {
        digitalWrite(ledPin, LOW);
    } else {
        digitalWrite(ledPin, HIGH);
    }
}