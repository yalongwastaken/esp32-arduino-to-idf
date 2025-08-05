# References Directory

This directory contains the original Arduino code from the [SunFounder ESP32 Starter Kit tutorials](https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/arduino/for_arduino_user.html) for reference purposes.

## Purpose

The reference code serves as the baseline implementation that the Arduino and ESP-IDF versions in this repository are based on. This allows for easy comparison between:
- Original SunFounder tutorial code
- Enhanced Arduino implementations 
- ESP-IDF conversions

## Directory Structure

```
references/
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

## What's Included

Each subdirectory contains the original `.ino` files exactly as provided in the SunFounder documentation, organized by tutorial category. These serve as the reference implementation for creating the enhanced versions in the `arduino/` and `esp-idf/` directories.

## How to Use

1. **Before starting a tutorial** - Review the original reference code to understand the basic implementation
2. **During development** - Compare your enhanced version against the reference to ensure functionality is preserved
3. **For troubleshooting** - Use as a baseline to isolate issues in enhanced implementations

## File Organization

Files are named and organized to match the tutorial structure from the SunFounder documentation:
- Directory names correspond to tutorial categories
- File names match the tutorial titles
- Code is preserved exactly as provided by SunFounder

## Attribution

All code in this directory is from SunFounder's ESP32 Starter Kit tutorial collection and is used for educational reference purposes. Original source: https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/arduino/for_arduino_user.html

## Note

This reference code is **not modified** - it represents the original tutorial implementations. For enhanced versions with improved error handling, better coding practices, and ESP-IDF conversions, see the `arduino/` and `esp-idf/` directories.