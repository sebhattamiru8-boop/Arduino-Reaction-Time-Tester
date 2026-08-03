# Arduino Reaction Time Tester

An embedded systems project built using the Arduino Uno that measures a user's reaction time. The game randomly waits between 2 and 5 seconds before signaling the player to react by pressing a button. The Arduino records the reaction time in milliseconds and detects false starts.

---

## Features

- Random start delay (2–5 seconds)
- Reaction time measurement in milliseconds
- False start detection
- Green LED "GO" signal
- Red LED false start indicator
- Results displayed in the Arduino Serial Monitor
- Continuous gameplay

---

## Hardware Used

- Arduino Uno
- Breadboard
- Pushbutton
- Green LED
- Red LED
- Two 220 Ω resistors
- Jumper wires
- USB Type-B cable

---

## Software

- Arduino IDE
- Arduino (C++)

---

## How It Works

1. The Arduino waits a random amount of time.
2. If the button is pressed before the green LED turns on, the system detects a **False Start**.
3. When the green LED lights up, the timer begins.
4. The user presses the button as quickly as possible.
5. The Arduino calculates and displays the reaction time in milliseconds.
6. The game automatically restarts after a short delay.

---


## Skills Demonstrated

- Embedded Systems Programming
- Arduino Development
- Digital Input/Output
- Pushbutton Debouncing
- Random Number Generation
- Timing with `millis()`
- State-Based Logic
- Circuit Design
- Hardware Debugging

---

## Example Output

```
Reaction Time Tester
Wait for the GREEN light.
Don't press too early!

Get Ready...

GO!

Reaction Time: 287 ms

Get Ready...

FALSE START!
```

---

## What I Learned

Through this project, I gained hands-on experience with embedded systems programming and hardware integration. I learned how to interface LEDs and pushbuttons with an Arduino, generate random delays, measure elapsed time using `millis()`, detect false starts, and debug both software and hardware issues. This project strengthened my understanding of event-driven programming and reinforced the importance of testing and iterative development.

---
