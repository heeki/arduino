#include <Arduino.h>
#include <SR04.h>

// define pin constants
#define ECHO_PIN 11
#define TRIG_PIN 12

// define variables
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long dist_cm;
float dist_inch;

void setup() {
    Serial.begin(9600);
    Serial.println();
    delay(1000);
}

void loop() {
    char buffer[48];
    char buffer_inch[12];

    dist_cm = sr04.Distance();
    dist_inch = dist_cm * 0.393701;
    dtostrf(dist_inch, 4, 1, buffer_inch);
    sprintf(buffer, "{\"dist_cm\": %lu, \"dist_inch\": %s}", dist_cm, buffer_inch);
    Serial.println(buffer);

    delay(1000);
}
