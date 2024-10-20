#include <Arduino.h>

//the pin of the active buzzer
int buzzer = 12;

void setup() {
    pinMode(buzzer, OUTPUT); //initialize the buzzer pin as an output
}

void loop() {
    unsigned char i;
    while(1) {
        for(i=0; i<100; i++) {
            digitalWrite(buzzer, HIGH);
            delay(200);
            digitalWrite(buzzer, LOW);
            delay(200);
        }
    }
}
