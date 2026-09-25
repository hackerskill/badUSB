# badUSB
A CH552G powered BadUSB keystroke injection tool that emulates a standard USB keyboard to execute automated payloads.

### A compact usb stick style badUSB based on CH552G.
---
USB stick style device to emulate a keyboard for automating payload execution.

## Features
- CH552G acts as the main microcontroller
- Fast injection speed
- USB A connectivity
- LEDs for visual status and feedback
- Compact USB stick style PCB

---

# Schematics-
<img width="717" height="425" alt="image" src="https://github.com/user-attachments/assets/6a0818f3-88d1-47cf-a854-ee953f03d425" />

# PCB-
<img width="414" height="425" alt="image" src="https://github.com/user-attachments/assets/a8b25fc6-c5f1-4680-953b-e746fbea1665" />

## How It Works

1. CH552G emulates a standard keyboard.

2. Depending on code, it either waits for bottom button input or automatically injects the payload coded in it.

3. The upper button in pressed while plugging in to enter programming mode.

# BOM-
| Component Name | Description | Quantity |
| :--- | :--- | :---: |
| **CH552G** | Chipset | 1 |
| **Resistors** | Resistors for Led| 3 |
| **Capacitors** | Capacitors for decoupling | 2 |
| **Leds** | Led for showing status | 3 |
| **Buttons** | Buttons for mode switching | 2 |
| **Custom PCB** | Custom PCB | 1 |

---

**Made by hackerskill**
