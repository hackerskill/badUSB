---
title: "badUSB"
author: "hackerskill"
description: "A CH552G powered BadUSB keystroke injection tool that emulates a standard USB keyboard to execute automated payloads."
created_at: "2026-07-27"
---
# badUSB
&#x09;
&#x09;

### Total Hours : 5.2
---
# Journal 1: Started the project 

**Total time spent: 1 hours**

So for the goal of making a badUSB, a MCU which exposed d- and d+ in a premade module was needed.

Firstly, xiao rp2040 was thought, but then issue with this was same that it didnt expose the d- and d+ and hence would have required tampering, similar issue was with other MCUs also which were easliy available, do finally had to pivot towards the bare chips.

So, decided to use CH552G because of it's availability and not-so-difficult way of usage.

<img width="275" height="373" alt="image" src="https://github.com/user-attachments/assets/e280a06c-d317-4aa1-982d-0b7e7331d05f" />

Found the schematics and footprint for this module from official webiste and imported then in kicad.

---

# Journal 2: Schematics work done

**Total time spent: 2.2 hours**

Started off with making the schematics, imported footprint for MCU as well as VBUS, since the USB port would be directly integrated into the device.

After referencing the dataset, figured out that for putting the ch552g in programming port, we have to pull D+ pin high to power source, so made the schematics accordingly.

<img width="351" height="281" alt="image" src="https://github.com/user-attachments/assets/452c8e90-9b7d-4f81-9ad6-61844a063553" />
<img width="241" height="187" alt="image" src="https://github.com/user-attachments/assets/e6dd7684-7e72-4491-8d17-877f65ba8287" />

Also added another button most probably to toggle the payload which can be injected but it might be customised using code later on.

<img width="407" height="565" alt="image" src="https://github.com/user-attachments/assets/5935a354-880d-4402-bdf2-a623eb8e96b3" />


Overall, completed the work for basic schematics needed to start off the pcb.

---

# Journal 3: PCB work started

**Total time spent: 2 hours**

Started the PCB work with placing all the componenents but after rough placement, due to some space remaining, decided to add a couple of leds.

<img width="205" height="283" alt="image" src="https://github.com/user-attachments/assets/01b43884-949a-4ec7-9af8-e95d3595cfd2" />
<img width="299" height="303" alt="image" src="https://github.com/user-attachments/assets/0a1b64aa-d6aa-488b-95d5-72acd0ae28f0" />
<img width="314" height="367" alt="image" src="https://github.com/user-attachments/assets/13523b86-00c6-4301-9797-bfd0a9a710ff" />


Now need to add these leds back to pcb and place them, along with finishing the tracing work to moving to polishing part, for this referenced some already made pen drives as a inspiration for form factor and overall looks and functionality.

---

# Journal 4: PCB component placement

**Total time spent: 2.4 hours**

Read about the the physical need for keeping decoupling capacitors as close as possible and tried to implement the same in the pcb as well.

Kept the resistors for the LEDs also near the MCU only rather than near the LED to optimise for space above the MCU which will have switches and LEDs.

<img width="361" height="319" alt="image" src="https://github.com/user-attachments/assets/04df847b-9548-44bb-b078-23379a7d0184" />
<img width="366" height="466" alt="image" src="https://github.com/user-attachments/assets/120f0ff0-d9d6-4b6b-8ae5-611a3fb35c19" />

Plan to keep the switches one above the other and 1 led near the MCU and other at the top where hole for making it a keychain can go.

Inital placement took the height of usb stick quite high so tried to refine that and now reduced the overall board length down to around 50mm. Now need to start wiring with traces and finally do a ground pour for various grounds.






