#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

const int ACTION_BUTTON = 17; 

void setup() {
  USBInit();
  pinMode(ACTION_BUTTON, INPUT_PULLUP);

  delay(200);
}

void loop() {
  if (digitalRead(ACTION_BUTTON) == LOW) {
    Keyboard_press(KEY_LEFT_GUI);       // Using Windows+L Shortcut
    Keyboard_press('l');
    delay(100);
    Keyboard_releaseAll();
    delay(500);
  }
}
