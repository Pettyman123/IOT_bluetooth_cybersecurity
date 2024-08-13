#include <SoftwareSerial.h>

// Initialize Bluetooth Serial on pins 10 and 11
SoftwareSerial bluetooth(10, 11); // RX, TX

void setup() {
  // Initialize the built-in Serial Monitor for debugging
  Serial.begin(9600);
  // Initialize the SoftwareSerial port for Bluetooth
  bluetooth.begin(9600);

  // Print a message to the Serial Monitor
  Serial.println("Bluetooth Device Tracker - Serial Monitor");
}

void loop() {
  // Check if Bluetooth data is available
  if (bluetooth.available()) {
    // Read the incoming data
    char c = bluetooth.read();
    // Print the received data to the Serial Monitor
    Serial.print(c);
  }

  // Optionally, send data to the Bluetooth device
  if (Serial.available()) {
    // Read the data from the Serial Monitor
    char c = Serial.read();
    // Send the data to the Bluetooth module
    bluetooth.write(c);
  }
}
