# Arduino to ESP-IDF Tutorial Collection

Following [SunFounder ESP32 Starter Kit tutorials](https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/arduino/for_arduino_user.html) and converting them to ESP-IDF.

## What This Is

- Complete Arduino implementations of SunFounder ESP32 tutorials
- Equivalent ESP-IDF versions with the same functionality
- Side-by-side comparison of both frameworks
- Enhanced error handling, improved resource management, and clean coding standards

## Structure

```
arduino/                    # Arduino framework versions
├── displays/
│   ├── hello_led/
│   ├── fading/
│   ├── colorful_light/
│   └── ...
├── sounds/
├── actuators/
├── sensors/
├── funny_projects/
├── bluetooth_sd_camera_speaker/
└── iot_networking/

esp-idf/                   # ESP-IDF framework versions
├── displays/
│   ├── hello_led/
│   ├── fading/
│   ├── colorful_light/
│   └── ...
├── sounds/
├── actuators/
├── sensors/
├── funny_projects/
├── bluetooth_sd_camera_speaker/
└── iot_networking/
```

## Tutorials Included

**Displays**
- Hello, LED!
- Fading
- Colorful Light
- Microchip - 74HC595
- 7 Segment Display
- Display Characters
- RGB LED Strip

**Sounds**
- Beep
- Custom Tone

**Actuators**
- Motor
- Pumping
- Swinging Servo

**Sensors**
- Reading Button Value
- Tilt It!
- Detect the Obstacle
- Detect the Line
- Detect Human Movement
- Two Kinds of Transistors
- Feel the Light
- Turn the Knob
- Measure Soil Moisture
- Thermometer
- Toggle the Joystick
- Measuring Distance
- Temperature - Humidity
- IR Receiver

**Funny Projects**
- Fruit Piano
- Flowing Light
- Reversing Aid
- Digital Dice
- Color Gradient
- Plant Monitor
- Guess Number

**Bluetooth & SD Card & Camera & Speaker**
- Bluetooth
- Bluetooth Control RGB LED
- Bluetooth Audio Player
- SD Card Write and Read
- MP3 Player with SD Card Support
- Take Photo SD

**IoT & Networking**
- Real-time Weather From OpenWeatherMap
- Camera Web Server
- Custom Video Streaming Web Server
- IoT Communication with MQTT
- CheerLights
- Temperature and Humidity Monitoring with Adafruit IO
- ESP Camera with Telegram Bot
- Camera with Home Assistant
- Blynk-based Intrusion Notification System
- Android Application - RGB LED Operation via Arduino and Bluetooth

## Quick Start

**Arduino:**
```bash
cd arduino/displays/hello_led
# Open in Arduino IDE or PlatformIO
```

**ESP-IDF:**
```bash
cd esp-idf/displays/hello_led
idf.py build flash monitor
```

## Requirements

- ESP32 development board
- SunFounder ESP32 Starter Kit components
- Arduino IDE or ESP-IDF installed
- PlatformIO used for both Arduino and ESP-IDF projects (but not required)

## Why Both Frameworks?

- **Arduino**: Easy to learn, great for beginners
- **ESP-IDF**: More control, better performance, professional development

Each lesson shows you how to do the same thing in both frameworks.

## Code Quality

The tutorials go beyond basic functionality to include:

- Proper error handling and validation
- Resource cleanup and memory management  
- Meaningful variable names and code organization
- Improved commenting and documentation
- Clean coding patterns and best practices
- Real-world applicable examples

This makes the code suitable for learning embedded development practices beyond just basic functionality.

## Contributing

1. Fork the repo
2. Add your improvements
3. Test on real hardware
4. Submit a pull request

## Author

**Anthony Yalong**  
Working through these tutorials to improve my own understanding while attempting to share quality coding practices with the community.