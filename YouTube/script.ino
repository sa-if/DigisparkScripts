#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  // Open the default browser and navigate to the YouTube link
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("http://www.youtube.com/watch?v=kJQP7kiw5Fk&pp=ygUJZGVzcGFjaXRv");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);

  // Play the song
  for (int i = 0; i < 2; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(500);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000); // wait for the video to load
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);

  // Turn on the LED for 10 seconds and then turn it off
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(10000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}