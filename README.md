# Bluetooth Controlled RC Car using Arduino

## 📌 Introduction
This project demonstrates the design and development of a **Bluetooth controlled RC car** using **Arduino UNO**.  
The vehicle is controlled wirelessly through a **smartphone** using Bluetooth communication.  
The project helps in understanding embedded systems, motor control, and wireless communication.

---

## 🎯 Objective
- To design a Bluetooth controlled robotic car  
- To control DC motors using a motor driver  
- To understand Bluetooth communication using HC-05  
- To gain hands-on experience with Arduino programming  

---

## 🧩 Components & Modules Used

### Hardware Components
- Arduino UNO  
- L293D Motor Driver Shield  
- Bluetooth Module (HC-05)  
- DC Motors (4 × 9V)  
- Wheels and Chassis  
- Power Supply (6–9V Battery)  
- On/Off Switch  
- Connecting Wires  

### Software Used
- Arduino IDE  
- Bluetooth Controller Mobile Application  

---

## 💻 Programming Language
- Embedded C / C++ (Arduino based)

---

## ⚙️ Working Principle
The RC car is controlled using a smartphone through Bluetooth communication.  
The mobile application sends control commands such as **forward, backward, left, and right**.  
These commands are received by the **HC-05 Bluetooth module**, which sends them to the **Arduino UNO**.  
The Arduino processes the received data and controls the motors via the **L293D motor driver shield**, allowing the car to move in the desired direction.

---

## 📐 Circuit Diagram Explanation

### Arduino UNO
Arduino UNO acts as the main controller of the system.  
It receives commands from the Bluetooth module and generates control signals for the motor driver.

### Bluetooth Module (HC-05)
The HC-05 module enables wireless communication between the smartphone and Arduino.  
The TX pin of the Bluetooth module is connected to the RX pin of Arduino, and RX is connected to TX.

### L293D Motor Driver Shield
The motor driver shield is used to control the speed and direction of the DC motors.  
It supplies sufficient current to the motors and protects the Arduino from high current draw.

### DC Motors
Four DC motors are connected to the motor driver shield.  
These motors are responsible for the movement of the RC car in different directions.

### Power Supply
A 6–9V battery is used to power the entire system.  
A switch is provided to safely turn the system ON or OFF.

---

## 📱 Applications
- Wireless robotic vehicles  
- Educational and academic projects  
- Embedded system learning  
- Prototype for smart vehicle control  

---

## ✅ Advantages
- Wireless control using Bluetooth  
- Simple and low-cost design  
- Easy to understand and modify  
- Suitable for beginners  

---

## 🔚 Conclusion
This project successfully demonstrates a **Bluetooth controlled RC car using Arduino**.  
It provides practical knowledge of Bluetooth communication, motor control, and embedded programming.  
The project can be further enhanced by adding sensors, cameras, or IoT features.

---

## 🚀 Future Enhancements
- Obstacle avoidance using ultrasonic sensor  
- Speed control using PWM  
- Camera integration  
- IoT-based control using Wi-Fi  

---

## 👨‍🎓 Author
**Erpawan-tech**
Project – Arduino & Embedded Systems
