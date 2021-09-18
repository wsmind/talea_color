/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
#include "scales.h"

/*int color[] = {
  major2_5,
  major2_6,
  major2_2,
  major2_3,
  major2_1
};

int talea[] = {
  400, 200, 200, 600
};*/

/*int color[] = {
  minor2_1,
  minor2_1,
  minor2_3,
  minor2_3,
  minor2_3,
  minor2_1,
  minor2_3,
  minor2_1,
  minor2_3,
  minor2_1,
  minor2_1,
  minor2_1,
};

int talea[] = {
  200, 200, 600
};*/

/*int color[] = {
  minor2_1,
  minor2_2,
  minor2_3,
  minor2_4,
  minor2_7
};

int talea[] = {
  100, 100, 100, 250, 250, 700
};*/

int color[] = {
  minor2_4,
  minor2_5,
  minor2_6,
  major2_7,
  major3_1,
  major2_3,
  major2_6
};

int talea[] = {
  250, 250, 100, 100, 100
};

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

int colorIndex = 0;
int taleaIndex = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  tone(8, color[colorIndex++]);
  
  if (colorIndex >= sizeof(color) / sizeof(int))
    colorIndex = 0;
  
  delay(200);
  
  noTone(8);
  delay(talea[taleaIndex++]);

  if (taleaIndex >= sizeof(talea) / sizeof(int))
    taleaIndex = 0;
}

