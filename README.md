# Mobile Controlled Car with Arduino

This project implements a mobile-controlled car using Arduino and Arduino IDE. The car can be controlled remotely via serial communication from a mobile device or computer.

## Features

- Move the car forward
- Move the car backward
- Turn the car left
- Turn the car right
- Control LED on/off
- Drift left
- Drift right
- Stop the car

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- Motor driver module (e.g., L298N)
- DC motors (for driving)
- LED (optional)
- Resistors (for LED)
- Bluetooth module or Wi-Fi module (for wireless communication)

## Software Requirements

- Arduino IDE

## Installation and Setup

1. Connect the hardware components according to the wiring diagram.
2. Open the Arduino IDE and upload the provided code (`mobile_controlled_car.ino`) to your Arduino board.
3. Install a serial communication app on your mobile device or computer (e.g., Arduino Bluetooth Controller app for Android).
4. Pair your mobile device or computer with the Bluetooth module connected to the Arduino.
5. Open the serial communication app and establish a connection with the Bluetooth module.
6. Send commands from the app to control the car.

## Wiring Diagram

![WhatsApp Image 2024-05-17 at 16 46 28_45582224](https://github.com/iiiiOreo/Mobile-Controlled-Car-With-Arduino/assets/96269673/04c26027-641d-4e4e-bc9e-8115788441ad)

## Note
We Used in this Project 2 motor car only

## Usage

1. Power on the Arduino and ensure that the Bluetooth module is connected and paired with your mobile device or computer.
2. Launch the serial communication app on your mobile device or computer.
3. Use the app interface to send commands to control the car.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/new-feature`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature/new-feature`).
6. Create a new Pull Request.
