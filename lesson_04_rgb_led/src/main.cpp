#include <Arduino.h>

// define pin constants
#define BLUE 3
#define GREEN 5
#define RED 6
#define DELAY_TIME 5 // fading time between colors

// define global variables
int redValue;
int greenValue;
int blueValue;

void setup() {
    Serial.begin(9600);
    Serial.println();
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
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
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        delay(DELAY_TIME);
    }

    sprintf(buffer, "r=%d,g=%d,b=%d", redValue, greenValue, blueValue);
    Serial.println(buffer);
    for(int i = 0; i < 255; i += 1) {
        greenValue -= 1;
        blueValue += 1;
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
        delay(DELAY_TIME);
    }

    sprintf(buffer, "r=%d,g=%d,b=%d", redValue, greenValue, blueValue);
    Serial.println(buffer);
    for(int i = 0; i < 255; i += 1) {
        blueValue -= 1;
        redValue += 1;
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        delay(DELAY_TIME);
    }
}
