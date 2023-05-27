#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  // Open Notepad by pressing the Windows key and typing "notepad"
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Type "I love you" 100 times
  for (int i = 0; i < 100; i++) {
    DigiKeyboard.print("I love you");
    DigiKeyboard.println(); // Send a newline character instead of Enter key
    DigiKeyboard.delay(100);
  }

  // Close Notepad
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  // Turn on the LED for 5 seconds and then turn it off
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(5000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
