#include <Arduino.h>

//reference: https://github.com/hibit-dev/buzzer/tree/master/src
// #include "games/mario_bros.h"
// #include "games/tetris.h"
// #include "games/pacman.h"
// #include "movies/game_of_thrones.h"
#include "movies/harry_potter.h"
// #include "movies/lion_king.h"
// #include "movies/simpsons.h"
// #include "movies/star_wars.h"
// #include "songs/its_a_small_world.h"

#define BUZZER_PIN 8

void setup() {
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
    int size = sizeof(durations) / sizeof(int);

    for (int note = 0; note < size; note++) {
        // to calculate the note duration, take one second divided by the note type.
        // e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
        int duration = 1000 / durations[note];
        tone(BUZZER_PIN, melody[note], duration);

        // to distinguish the notes, set a minimum time between them.
        // the note's duration + 30% seems to work well:
        int pauseBetweenNotes = duration * 1.30;
        delay(pauseBetweenNotes);

        // stop the tone playing:
        noTone(BUZZER_PIN);
    }
}