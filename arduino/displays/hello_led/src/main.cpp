// Author: Anthony Yalong
// Description: Non-blocking LED blink implementation for Arduino

#include <Arduino.h>

// Hardware configuration
const int DEFAULT_LED_PIN = 2;           // Configure based on needs
const int FALLBACK_LED_PIN = 2;          // Fallback pin if default fails (ESP32-WROOM-32E Built-in LED)
int led_pin = DEFAULT_LED_PIN;           // Working LED pin

// Timing configuration
const unsigned long BLINK_INTERVAL_MS = 1000;     // Blink interval in milliseconds
const unsigned long SERIAL_BAUD_RATE = 115200;    // Serial communication baud rate
const unsigned long SERIAL_TIMEOUT_MS = 5000;     // Serial initialization timeout
const unsigned long SYSTEM_ERROR_DELAY_MS = 1000; // Delay when in error state

// State variables
unsigned long previous_millis = 0;
bool led_state = false;
bool system_error = false;

// Debug configuration
#define DEBUG_SERIAL 1
#if DEBUG_SERIAL
unsigned long last_debug_output = 0;
const unsigned long DEBUG_INTERVAL_MS = 1000;
#endif

/**
 * Validate and configure LED pin with fallback mechanism
 * @return true if valid pin found, false if no valid pins available
 */
bool configureLedPin()
{
  // Test default pin first
  if (digitalPinCanOutput(led_pin))
  {
    Serial.print("setup: Using default LED pin: ");
    Serial.println(led_pin);
    return true;
  }

  // Try fallback pin
  Serial.println("WARNING: Default pin cannot be used as output");
  Serial.print("setup: Attempting fallback pin: ");
  Serial.println(FALLBACK_LED_PIN);

  if (digitalPinCanOutput(FALLBACK_LED_PIN))
  {
    led_pin = FALLBACK_LED_PIN;
    Serial.print("setup: Using fallback pin: ");
    Serial.println(led_pin);
    return true;
  }

  // No valid pins available
  Serial.println("ERROR: No valid output pins available");
  return false;
}

/**
 * Initialize hardware and serial communication
 */
void setup()
{
  // Initialize serial communication
  Serial.begin(SERIAL_BAUD_RATE);

  // Wait for serial connection with timeout
  unsigned long serial_start = millis();
  while (!Serial && (millis() - serial_start < SERIAL_TIMEOUT_MS))
  {
    // Wait for serial connection
  }

  Serial.println("setup: Serial communication initialized");


  // Configure LED pin with validation and fallback
  if (!configureLedPin())
  {
    system_error = true;
    Serial.println("setup: System initialization failed");
    return;
  }

  // Initialize LED pin
  pinMode(led_pin, OUTPUT);
  digitalWrite(led_pin, led_state);

  // Initialize timing
  previous_millis = millis();

  Serial.println("setup: System initialization complete");
}

/**
 * Main loop - non-blocking LED blink with rate-limited debug output
 */
void loop()
{
  // Handle system error state
  if (system_error)
  {
    Serial.println("ERROR: LED pin configuration failed - verify board type and pin assignments");
    delay(SYSTEM_ERROR_DELAY_MS);
    return;
  }

  unsigned long current_millis = millis();

  // Non-blocking LED blink logic
  if (current_millis - previous_millis >= BLINK_INTERVAL_MS)
  {
    previous_millis += BLINK_INTERVAL_MS;
    led_state = !led_state;
    digitalWrite(led_pin, led_state);

#if DEBUG_SERIAL
    // Rate-limited debug output to prevent serial buffer overflow
    if (current_millis - last_debug_output >= DEBUG_INTERVAL_MS)
    {
      Serial.print("loop: LED state changed to ");
      Serial.println(led_state ? "ON" : "OFF");
      last_debug_output = current_millis;
    }
#endif
  }
}