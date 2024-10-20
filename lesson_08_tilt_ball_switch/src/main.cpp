#include <Arduino.h>

const int LED = 13;

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(2, INPUT);
    digitalWrite(2, HIGH);
}

void loop() {
    int value = digitalRead(2);
    if (value == HIGH) {
        digitalWrite(LED, LOW);
    } else {
        digitalWrite(LED, HIGH);
    }
}