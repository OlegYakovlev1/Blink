# 🚔 ESP32 Police Lights

> Simple ESP32 project that simulates police flashing lights using red and blue LEDs.

---

## 📋 Description

This project demonstrates how to control two LEDs with an ESP32 to create a police light effect.

Each LED performs quick double flashes, alternating between red and blue.  
The program runs continuously in a loop.

---

## ⚙️ Components

- ESP32
- 2 LEDs (Red & Blue)
- 2 Resistors (220 Ω)
- Breadboard
- Jumper wires

---

## 🔌 Wiring

- GPIO 18 → resistor → Red LED → GND
- GPIO 16 → resistor → Blue LED → GND

---

## 🔍 How It Works

- Each LED is connected to a separate GPIO pin
- LEDs blink alternately
- Each performs a short burst (double flash)
- The sequence repeats infinitely
