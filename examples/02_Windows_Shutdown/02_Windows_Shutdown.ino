#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

const int ACTION_BUTTON = 17;

void setup() {
  USBInit();
  pinMode(ACTION_BUTTON, INPUT_PULLUP);

  while(digitalRead(ACTION_BUTTON) == HIGH) { 
    delay(10);
  }

  delay(600);
  Keyboard_press(KEY_LEFT_GUI);
  delay(100);
  Keyboard_press('r');
  delay(100);
  Keyboard_releaseAll();
  
  Keyboard_print("shutdown /s /f /t 00")
  delay(100);
  Keyboard_press('\n')
  delay(100);
  Keyboard_releaseAll();
}

void loop() {

}
