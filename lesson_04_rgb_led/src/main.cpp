#include <Arduino.h>

// define pin constants
#define RED_PIN 6
#define GREEN_PIN 5
#define BLUE_PIN 3
#define DELAY_TIME 5 // fading time between colors

// define global variables
int redValue;
int greenValue;
int blueValue;

void setup() {
    Serial.begin(9600);
    Serial.println();
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(BLUE_PIN, LOW);
}

// main loop
void loop() {
    char buffer[18];

    // reset values
    redValue = 255;
    greenValue = 0;
    blueValue = 0;

    sprintf(buffer, "r=%d,g=%d,b=%d", redValue, greenValue, blueValue);
    Serial.println(buffer);
    for(int i = 0; i < 255; i += 1) {
        redValue -= 1;
        greenValue += 1;
        analogWrite(RED_PIN, redValue);
        analogWrite(GREEN_PIN, greenValue);
        delay(DELAY_TIME);
    }

    sprintf(buffer, "r=%d,g=%d,b=%d", redValue, greenValue, blueValue);
    Serial.println(buffer);
    for(int i = 0; i < 255; i += 1) {
        greenValue -= 1;
        blueValue += 1;
        analogWrite(GREEN_PIN, greenValue);
        analogWrite(BLUE_PIN, blueValue);
        delay(DELAY_TIME);
    }

    sprintf(buffer, "r=%d,g=%d,b=%d", redValue, greenValue, blueValue);
    Serial.println(buffer);
    for(int i = 0; i < 255; i += 1) {
        blueValue -= 1;
        redValue += 1;
        analogWrite(BLUE_PIN, blueValue);
        analogWrite(RED_PIN, redValue);
        delay(DELAY_TIME);
    }
}
