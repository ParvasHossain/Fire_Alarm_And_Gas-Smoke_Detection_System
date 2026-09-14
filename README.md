# Fire Alarm and Gas Detector System

An IoT-enabled safety and monitoring system designed to detect fire flames and hazardous gas leaks. The system utilizes Arduino and NodeMCU microcontrollers to trigger immediate local alerts and remote notifications.

## 📌 Features

* **Flame Detection:** Quick detection of fire source using flame sensors.
* **Gas Leak Detection:** Continuous monitoring of combustible and hazardous gases via MQ-2 sensor.
* **Dual Controller Support:**
  * **Arduino:** Handles local sensing, buzzer/LED alerts, and immediate actuators.
  * **NodeMCU (ESP8266):** Enables Wi-Fi connectivity for IoT alerts and monitoring.
* **Documentation & Schematics:** Includes complete circuit diagrams and project reports for easy deployment.

---

## 🛠️ Hardware Requirements
1. Microcontrollers: Arduino Uno / Nano, NodeMCU (ESP8266)

2. Sensors: Flame Sensor , MQ-2 Gas Sensor 

3. Alert & Output Devices: Buzzer , LEDs / LCD Display

4. Miscellaneous: Breadboard, Jumper Wires, Power Supply

## 💻 Software & Environment Setup
**Install the Arduino IDE.**

For NodeMCU support, add the ESP8266 board URL to Arduino IDE Preferences:
http://arduino.esp8266.com/stable/package_esp8266com_index.json

**Install required libraries for NodeMCU and MQ-2/Flame sensors via the Library Manager.**

## 🚀 Getting Started
Hardware Wiring: Refer to the image files in Arduino Code/Circuit Diagram/ and Node MCU Code/Circuit Diagram/ for exact wiring connections.

**Flash Arduino Code:**

1. Open Fire_Alarm_System.ino or Flame_And_MQ2.ino in the Arduino IDE.

2. Select your Arduino board, port, and click Upload.

**Flash NodeMCU Code:**

1. Open the NodeMCU source code inside Node MCU Code/Code/.

2. Configure your Wi-Fi credentials (SSID and Password).

3. Select NodeMCU 1.0 (ESP-12E Module) and click Upload.

## 📁 Repository Structure

```text
FireAlarm_and_GasDetector_System/
├── Arduino Code/
│   ├── Circuit Diagram/
│   │   └── Fire Alarm System.jpg
│   └── Code/
│       └── Fire Alarm System.txt
├── Node MCU Code/
│   ├── Circuit Diagram/
│   │   └── Node MCU.jpg
│   └── Code/
│       └── Node MCU.txt
├── Fire_Alarm_System.ino
├── Flame_And_MQ2.ino
└── Garments_fire_alarm_and_gas_detection_system.pdf
