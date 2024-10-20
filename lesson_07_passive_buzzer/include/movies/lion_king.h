#include "pitches.h"

int melody[] = {
    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4,

    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4,  REST, NOTE_A4,

    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
    NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
    NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4,

    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
    NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
    NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4,

    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
    NOTE_G4,
    NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_C5,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
    NOTE_G4,

    NOTE_C5,
    NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4,

    REST, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,
    NOTE_D4,
    REST, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,
    NOTE_D4,

    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
    NOTE_G4,
    NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_C5,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
    NOTE_G4,

    NOTE_C5,
    NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4,

    REST, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,
    NOTE_D4,
    REST, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,
    NOTE_D4,

    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4,

    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
    NOTE_G4,
    NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_C5,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
    NOTE_G4,

    NOTE_C5,
    NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4,

    REST, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,
    NOTE_D4,
    REST, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,
    NOTE_D4,

    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
    NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4,
    NOTE_A4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4,
    NOTE_C4
};

int durations[] = {
    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 8, 4, 8, 4,
    1,

    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 8, 4, 8, 4,
    2, 8, 16,

    8, 16, 8, 16, 8, 16, 8, 16,
    8, 16, 8, 16, 8, 16, 8, 16,
    8, 16, 8, 16, 8, 16, 8, 16,
    8, 16, 8, 16, 8, 16, 8, 16,

    8, 16, 8, 16, 8, 16, 8, 16,
    8, 16, 8, 16, 8, 16, 8, 16,
    8, 16, 8, 16, 8, 16, 8, 16,
    8, 16, 8, 16, 8, 16, 8, 16,

    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 4, 4, 4,
    1,
    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 4, 4, 4,
    1,

    1,
    4, 8, 8, 2,
    4, 8, 4, 8, 4,
    1,

    4, 8, 8, 8, 8, 8, 8,
    1,
    4, 8, 8, 8, 8, 8, 8,
    1,

    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 4, 4, 4,
    1,
    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 4, 4, 4,
    1,

    1,
    4, 8, 8, 2,
    4, 8, 4, 8, 4,
    1,

    4, 8, 8, 8, 8, 8, 8,
    1,
    4, 8, 8, 8, 8, 8, 8,
    1,

    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 8, 4, 8, 4,
    1,

    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 4, 4, 4,
    1,
    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 4, 4, 4,
    1,

    1,
    4, 8, 8, 2,
    4, 8, 4, 8, 4,
    1,

    4, 8, 8, 8, 8, 8, 8,
    1,
    4, 8, 8, 8, 8, 8, 8,
    1,

    4, 4, 8, 4, 8,
    4, 4, 8, 4, 8,
    4, 8, 4, 8, 4,
    1
};
