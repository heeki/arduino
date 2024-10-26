#include <Arduino.h>
#include <SR04.h>

// define pin constants
#define ECHO_PIN 11
#define TRIG_PIN 12

// define variables
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long dist;

void setup() {
    Serial.begin(9600);
    Serial.println();
    delay(1000);
}

void loop() {
    char buffer[18];

    dist = sr04.Distance();
    sprintf(buffer, "{\"dist_cm\": %lu}", dist);
    Serial.println(buffer);

    delay(1000);
}
