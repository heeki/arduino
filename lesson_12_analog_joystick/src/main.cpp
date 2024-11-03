#include <Arduino.h>

// define pin constants
#define SW_PIN 2 // digital pin connected to switch output
#define X_PIN A0 // analog pin connected to X output
#define Y_PIN A1 // analog pin connected to Y output

void setup() {
    pinMode(SW_PIN, INPUT);
    digitalWrite(SW_PIN, HIGH);
    Serial.begin(9600);
}

void loop() {
    char buffer[32];
    char buffer_x[8];
    char buffer_y[8];
    int sw = digitalRead(SW_PIN);
    float x = analogRead(X_PIN);
    float y = analogRead(Y_PIN);

    dtostrf(x, 4, 1, buffer_x);
    dtostrf(y, 4, 1, buffer_y);
    sprintf(buffer, "{\"sw\": %d, \"x\": %s, \"y\": %s}", sw, buffer_x, buffer_y);
    Serial.println(buffer);
    delay(250);
}
