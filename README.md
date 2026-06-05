# Voice-Controlled-Home-Automation-Using-ESP32
Voice-controlled smart home automation system using ESP32, relay modules, and Google Assistant for remote appliance control.
# Voice-Controlled Home Automation System Using ESP32

## Overview

This project implements a voice-controlled home automation system using ESP32, Google Assistant, and Sinric Pro. The system enables users to control connected devices through voice commands. Google Assistant processes the user's voice command and communicates with Sinric Pro Cloud, which sends the corresponding control signal to the ESP32 over Wi-Fi.

In this implementation, three LEDs (Red, Green, and Blue) are used to represent smart appliances. The LEDs can be switched ON or OFF using voice commands through Google Assistant.

---

## Objectives

* To develop a voice-controlled home automation system.
* To integrate ESP32 with Google Assistant using Sinric Pro.
* To control multiple devices through voice commands.
* To demonstrate IoT-based wireless communication.
* To provide a simple and cost-effective smart home solution.

---

## Components Used

* ESP32 Development Board
* Red LED
* Green LED
* Blue LED
* Current Limiting Resistors
* Jumper Wires
* Breadboard
* Wi-Fi Network
* Google Assistant
* Sinric Pro Platform

---

## System Architecture

User Voice Command
↓
Google Assistant
↓
Sinric Pro Cloud
↓
Wi-Fi Network
↓
ESP32
↓
Red LED / Green LED / Blue LED

---

## Working Principle

1. The ESP32 is connected to a Wi-Fi network.
2. The ESP32 is authenticated using Sinric Pro App Key and App Secret.
3. Virtual devices are created in the Sinric Pro dashboard.
4. Google Assistant is linked with Sinric Pro.
5. The user gives a voice command such as:

   * "Turn on Red LED"
   * "Turn off Green LED"
   * "Turn on Blue LED"
6. Google Assistant sends the command to Sinric Pro Cloud.
7. Sinric Pro forwards the command to the ESP32.
8. The ESP32 processes the command and controls the corresponding LED.

---

## Features

* Voice-controlled appliance operation
* Google Assistant integration
* Real-time device control
* Wireless communication using Wi-Fi
* Multiple device support
* Easy scalability for future expansion

---

## Results

The system successfully responded to voice commands issued through Google Assistant. The ESP32 received commands from Sinric Pro and controlled the connected Red, Green, and Blue LEDs accordingly. The response time was fast and reliable, demonstrating the effectiveness of cloud-based voice-controlled home automation.

---

## Applications

* Smart Home Automation
* Voice-Controlled Lighting Systems
* IoT-Based Appliance Control
* Assistive Technologies
* Smart Office Automation

---

## Future Scope

* Fan and Appliance Control using Relays
* Mobile Application Integration
* Energy Consumption Monitoring
* AI-Based Automation
* Smart Scheduling and Scene Control

---

## Author

Anil Kumar Senapati

B.Tech Electronics and Telecommunication Engineering (ETC)
