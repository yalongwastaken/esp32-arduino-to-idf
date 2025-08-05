# Arduino Implementations

Arduino framework versions of all SunFounder ESP32 tutorials, organized by topic and enhanced with clean coding practices.

## Setup

**Option 1: Arduino IDE**
1. Install Arduino IDE 2.0+
2. Add ESP32 board support via Board Manager
3. Open any `.ino` file from the project folders

**Option 2: PlatformIO**
1. Install PlatformIO (VS Code extension or CLI)
2. Open any project folder containing `platformio.ini`
3. Build and upload using PlatformIO commands

## Structure

```
arduino/
├── actuators/
├── bluetooth_sd_camera_speaker/
├── displays/
│   ├── 7segment/
│   ├── 74hc595/
│   ├── fading_led/
│   └── ...
├── funny_projects/
├── iot_networking/
├── sensors/
└── sounds/
```

## Key Features

- Clean, readable code with proper error handling
- Comprehensive comments explaining functionality
- Consistent naming conventions
- Resource management and cleanup
- Real-world applicable examples

## Running Projects

Each project folder contains:
- Main `.ino` file with Arduino code
- `platformio.ini` for PlatformIO users
- Wiring diagrams and component lists
- Individual README with specific setup instructions