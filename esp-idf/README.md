# ESP-IDF Implementations

ESP-IDF framework versions of all SunFounder ESP32 tutorials, providing equivalent functionality.

## Setup

**Prerequisites:**
1. Install ESP-IDF v5.0+ following [official guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/)
2. Set up ESP-IDF environment variables
3. Verify installation with `idf.py --version`

**Option 1: Command Line**
```bash
cd project_folder
idf.py build flash monitor
```

**Option 2: PlatformIO**
1. Install PlatformIO ESP-IDF support
2. Open project folder
3. Build and upload using PlatformIO

## Structure

```
esp-idf/
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

- Full FreeRTOS task management
- Proper error handling with ESP-IDF error codes
- Efficient memory management
- Hardware abstraction layer usage
- Professional logging system
- Real-time capabilities and interrupt handling

## Project Structure

Each project contains:
- `main/` directory with source code
- `CMakeLists.txt` for build configuration
- `sdkconfig` for ESP-IDF configuration
- Component-specific subdirectories when needed
- Detailed README with setup and usage instructions

## Common Commands

```bash
# Build project
idf.py build

# Flash and monitor
idf.py flash monitor

# Clean build
idf.py fullclean

# Configure project
idf.py menuconfig
```