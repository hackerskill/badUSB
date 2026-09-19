#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

const int ACTION_BUTTON = 17;

void setup() {
  USBInit();
  pinMode(ACTION_BUTTON, INPUT_PULLUP);

  while(digitalRead(ACTION_BUTTON) == HIGH) { 
    delay(10);
  }

  delay(600);
  Keyboard_print("Hello World! I am a BadUSB board built using the CH552 microcontroller.");
  delay(100);
  Keyboard_press('\n');
  delay(100);
  Keyboard_releaseAll();
}

void loop() {

}
