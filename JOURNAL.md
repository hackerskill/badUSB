# badUSB
&#x09;
A CH552G powered BadUSB keystroke injection tool that emulates a standard USB keyboard to execute automated payloads.

&#x09;

### Total Hours : 1
---
### Journal 1-
Time Spent : 1 hour

So for the goal of making a badUSB, a MCU which exposed d- and d+ in a premade module was needed.

Firstly, xiao rp2040 was thought, but then issue with this was same that it didnt expose the d- and d+ and hence would have required tampering, similar issue was with other MCUs also which were easliy available, do finally had to pivot towards the bare chips.

So, decided to use CH552G because of it's availability and not-so-difficult way of usage.

<img width="275" height="373" alt="image" src="https://github.com/user-attachments/assets/e280a06c-d317-4aa1-982d-0b7e7331d05f" />

Found the schematics and footprint for this module from official webiste and imported then in kicad.

---
