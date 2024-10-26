#include <Arduino.h>

// define pin constants
#define LED_PIN 5
#define BUTTON_A 9
#define BUTTON_B 8

byte leds = 0;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_A, INPUT_PULLUP);
    pinMode(BUTTON_B, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(BUTTON_A) == LOW) {
        digitalWrite(LED_PIN, HIGH);
    }
    if (digitalRead(BUTTON_B) == LOW) {
        digitalWrite(LED_PIN, LOW);
    }
}
