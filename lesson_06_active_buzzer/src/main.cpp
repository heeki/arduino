#include <Arduino.h>

// define pin constants
#define BUZZER_PIN 12

void setup() {
    pinMode(BUZZER_PIN, OUTPUT); // initialize the buzzer pin as an output
}

void loop() {
    unsigned char i;
    while(1) {
        for(i=0; i<100; i++) {
            digitalWrite(BUZZER_PIN, HIGH);
            delay(200);
            digitalWrite(BUZZER_PIN, LOW);
            delay(200);
        }
    }
}
