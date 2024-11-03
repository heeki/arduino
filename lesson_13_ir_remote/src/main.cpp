#include <Arduino.h>
#include "IRremote.h"

// define pin constants
#define RECEIVER_PIN 11

// define variables
IRrecv irrecv(RECEIVER_PIN);
decode_results results;

void translateIR() {
    char buffer[32];
    char command[16];

    switch(results.value) {
        case 0xFFA25D: strcpy(command, "POWER"); break;
        case 0xFFE21D: strcpy(command, "FUNC/STOP"); break;
        case 0xFF629D: strcpy(command, "VOL+"); break;
        case 0xFF22DD: strcpy(command, "FAST BACK"); break;
        case 0xFF02FD: strcpy(command, "PAUSE"); break;
        case 0xFFC23D: strcpy(command, "FAST FORWARD"); break;
        case 0xFFE01F: strcpy(command, "DOWN"); break;
        case 0xFFA857: strcpy(command, "VOL-"); break;
        case 0xFF906F: strcpy(command, "UP"); break;
        case 0xFF9867: strcpy(command, "EQ"); break;
        case 0xFFB04F: strcpy(command, "ST/REPT"); break;
        case 0xFF6897: strcpy(command, "0"); break;
        case 0xFF30CF: strcpy(command, "1"); break;
        case 0xFF18E7: strcpy(command, "2"); break;
        case 0xFF7A85: strcpy(command, "3"); break;
        case 0xFF10EF: strcpy(command, "4"); break;
        case 0xFF38C7: strcpy(command, "5"); break;
        case 0xFF5AA5: strcpy(command, "6"); break;
        case 0xFF42BD: strcpy(command, "7"); break;
        case 0xFF4AB5: strcpy(command, "8"); break;
        case 0xFF52AD: strcpy(command, "9"); break;
        case 0xFFFFFFFF: strcpy(command, "REPEAT"); break;
        default: sprintf(command, "UNDEFINED: %lu", results.value);
    }
    sprintf(buffer, "{\"command\": \"%s\"}", command);
    Serial.println(buffer);
    delay(500);
}

void setup() {
    Serial.begin(9600);
    irrecv.enableIRIn();
}

void loop() {
    if (irrecv.decode(&results)) {
        translateIR();
        irrecv.resume();
    }
}
