# Bluetooth Device Tracker using ESP32

![e05977eb807e7adc129036ea159a51f6](https://github.com/user-attachments/assets/f8a39adf-67fd-453d-8b0a-ff3fc4e860ba)


## Overview

This project involves creating a Bluetooth Device Tracker using an ESP32 development board. The tracker scans for and logs nearby Bluetooth devices, providing a simple interface for monitoring the Bluetooth environment. This tool can be used to identify unauthorized or suspicious devices in the vicinity.

## Project Objectives

- **Device Detection**: Scan and log nearby Bluetooth devices.
- **User-Friendly Interface**: Display detected devices on the Serial Monitor.
- **Customization**: Easily modify the code for specific tracking requirements.

## Components

- **Hardware**:
  - ESP32 Development Board
  - USB Cable for power and programming
  - Breadboard and jumper wires (optional)

- **Software**:
  - Arduino IDE
  - Bluetooth Terminal App (for testing)

## Setup

1. **Install ESP32 Board in Arduino IDE**:
   - Add the ESP32 board package in the Arduino IDE through the Board Manager.
2. **Connect the ESP32**:
   - Use a USB cable to connect the ESP32 to your computer.
3. **Upload the Code**:
   - Use the Arduino IDE to upload the code to the ESP32.

## Usage

1. **Monitor Output**:
   - Open the Serial Monitor in the Arduino IDE to view detected Bluetooth devices.
2. **Bluetooth Pairing**:
   - Use a Bluetooth-enabled device to connect and communicate with the ESP32.
3. **Data Transmission**:
   - Send and receive data via Bluetooth for additional monitoring.

## Troubleshooting

- **Serial Monitor Issues**: Check the COM port and baud rate settings.
- **Bluetooth Connectivity**: Ensure the ESP32 is discoverable and within range.
- **Data Transmission**: Verify device compatibility and signal strength.

## Further Improvements

- Add a physical display for standalone operation.
- Implement device filtering based on custom criteria.
- Enhance the interface for additional device information.

## Contribution

Contributions are welcome! Please follow these guidelines:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/your-feature-name`).
3. Commit your changes (`git commit -m 'Add your feature'`).
4. Push to the branch (`git push origin feature/your-feature-name`).
5. Open a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
