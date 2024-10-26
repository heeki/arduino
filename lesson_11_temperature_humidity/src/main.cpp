#include <Arduino.h>
#include <dht_nonblocking.h>

// define pin constants
#define DHT_SENSOR_PIN 2
#define DHT_SENSOR_TYPE DHT_TYPE_11
#define DELAY 4000ul

// define variables
DHT_nonblocking dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);

// helper function
// poll for measurement, keeping the state machine alive
// returns true if a measurement is available
static bool get_measurement(float *temperature, float *humidity) {
    static unsigned long timestamp = millis();
    if (millis() - timestamp >= DELAY) {
        if (dht_sensor.measure(temperature, humidity)) {
            timestamp = millis();
            return true;
        }
    }
    return false;
}

void setup() {
    Serial.begin(9600);
    Serial.println();
}

void loop() {
    char buffer[48];
    char buffer_celsius[6];
    char buffer_fahrenheit[6];
    char buffer_humid[6];
    float temp_celsius;
    float temp_fahrenheit;
    float humidity;

    if (get_measurement(&temp_celsius, &humidity)) {
        temp_fahrenheit = (9/5)*temp_celsius+32;
        // sprintf does not work with float on arduino devices
        // https://forum.arduino.cc/t/sprintf-with-float-values/937562/7
        dtostrf(temp_celsius, 4, 1, buffer_celsius);
        dtostrf(temp_fahrenheit, 4, 1, buffer_fahrenheit);
        dtostrf(humidity, 4, 1, buffer_humid);
        sprintf(buffer, "{\"temp_celsius\": %s, \"temp_fahrenheit\": %s, \"humidity_pct\": %s}", buffer_celsius, buffer_fahrenheit, buffer_humid);
        Serial.println(buffer);
    }
}
