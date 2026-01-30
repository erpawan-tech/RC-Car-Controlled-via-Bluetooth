#include <AFMotor.h> // Install "Adafruit Motor Shield" driver
#include <SoftwareSerial.h> // It comes bundled with the Arduino IDE by default.

// Define motor objects using AFMotor library
AF_DCMotor motor1(1, MOTOR12_1KHZ);  // Motor 1
AF_DCMotor motor2(2, MOTOR12_1KHZ);  // Motor 2
AF_DCMotor motor3(3, MOTOR34_1KHZ);  // Motor 3
AF_DCMotor motor4(4, MOTOR34_1KHZ);  // Motor 4

// Set up SoftwareSerial for Bluetooth communication
SoftwareSerial BTSerial(10, 11);  // RX, TX (you can change pins as needed)

void setup() {
  // Start Bluetooth serial communication
  BTSerial.begin(9600); // Bluetooth module baud rate
  Serial.begin(9600);   // Debugging serial monitor

  // Initialize motors to stop
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void loop() {
  // Check if data is available from Bluetooth module
  if (BTSerial.available()) {
    char command = BTSerial.read();  // Read incoming Bluetooth data

    // Display the received command on the serial monitor (for debugging)
    Serial.println(command);

    // Check for specific commands to control motors
    switch (command) {
      case 'F':  // Forward command
        moveForward();
        break;
      case 'B':  // Backward command
        moveBackward();
        break;
      case 'L':  // Left command (turn left by moving motor 1 and motor 2 in opposite directions)
        turnLeft();
        break;
      case 'R':  // Right command (turn right by moving motor 3 and motor 4 in opposite directions)
        turnRight();
        break;
      case 'S':  // Stop all motors
        stopMotors();
        break;
      default:
        stopMotors();  // Default stop if invalid command
        break;
    }
  }
}

// Function to move all motors forward
void moveForward() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

// Function to move all motors backward
void moveBackward() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

// Function to turn the vehicle left (motor 1 and motor 2 in opposite directions)
void turnLeft() {
  motor1.run(FORWARD);  // Motor 1 moves backward
  motor2.run(FORWARD);   // Motor 2 moves forward
  motor3.run(RELEASE);   // Motor 3 moves forward
  motor4.run(RELEASE);  // Motor 4 moves backward
}

// Function to turn the vehicle right (motor 3 and motor 4 in opposite directions)
void turnRight() {
  motor1.run(RELEASE);   // Motor 1 moves forward
  motor2.run(RELEASE);  // Motor 2 moves backward
  motor3.run(FORWARD);  // Motor 3 moves backward
  motor4.run(FORWARD);   // Motor 4 moves forward
}

// Function to stop all motors
void stopMotors() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
