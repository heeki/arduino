#include <Arduino.h>

// define pin constants
#define BUZZER 12

void setup() {
    pinMode(BUZZER, OUTPUT); // initialize the buzzer pin as an output
}

void loop() {
    unsigned char i;
    while(1) {
        for(i=0; i<100; i++) {
            digitalWrite(BUZZER, HIGH);
            delay(200);
            digitalWrite(BUZZER, LOW);
            delay(200);
        }
    }
}
