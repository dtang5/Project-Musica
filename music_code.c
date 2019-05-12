int buzzerPin = 40;

// notes in the melody:
int melody[] = {
   NOTE_C4,NOTE_D4, NOTE_E4, NOTE_D4,NOTE_C4,NOTE_D4,
   NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4,NOTE_A3,NOTE_G3,
   NOTE_C4,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_D4, NOTE_G4,NOTE_F4,
   NOTE_E4,NOTE_C4,NOTE_A3,NOTE_G3, /*intro-end*/ NOTE_C4,NOTE_C4,
   NOTE_C4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_D4,
   NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_C4, 
   NOTE_G3,/*chorus*/ NOTE_C4, NOTE_D4,NOTE_G3, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4,
   NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_D4,
   NOTE_E4, NOTE_D4, NOTE_C4};
   
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4 4, 1, 4,4,2,
  1, 4, 4, 1,1,1,
  4, 4, 1, 4,4,2,
  1, 4, 4, 1,1,1, /*intro end*/ 1, 4, 2, 2, 2, 1, 4, 2, 1, 2, 1, 1, 1, 4, 2, 2, 2, 1, 4, .5, /*chorus*/ .5, 1, 2, 1, 1, 4, 1, 1, 4, 1, 1, 4, 2, 1, 2, 2, 1, 2, 1, 1, .5};