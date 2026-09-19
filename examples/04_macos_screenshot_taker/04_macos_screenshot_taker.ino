#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

const int ACTION_BUTTON = 17;

#define KEY_PRINT_SCREEN 206 // Print Screen key scan code is natively 206 

void setup() {
  USBInit();
  pinMode(ACTION_BUTTON, INPUT_PULLUP);

  delay(200);
}

void loop() {
  if (digitalRead(ACTION_BUTTON) == LOW) {
    Keyboard_press(KEY_LEFT_GUI);       // Using CMD+SHIFT+3 Shortcut
    Keyboard_press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard_press('3');
    delay(100);
    Keyboard_releaseAll();
    delay(500);
  }
}
