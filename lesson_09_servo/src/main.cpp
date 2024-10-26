#include <Arduino.h>
#include <Servo.h>

// define pin constants
#define SERVO_PIN 9
#define DELAY 10

// define variables
Servo s;

void setup() {
    Serial.begin(9600);
    s.attach(SERVO_PIN);
}

void loop() {
    for (int pos = 0; pos <= 180; pos += 1) {
        s.write(pos);
        delay(DELAY);
    }
    for (int pos = 180; pos >= 0; pos -= 1) {
        s.write(pos);
        delay(DELAY);
    }
}
