# ULTRAScan
Sweeps 180°, spots objects, looks slick — all with Arduino
Here is a professional-style README.md file for your servo-based ultrasonic radar scanner project. You can use this directly on GitHub:


---

Ultrasonic Radar Scanner using Arduino and Servo Motor

This project implements a basic radar-like scanning system using an ultrasonic distance sensor mounted on a servo motor. As the servo sweeps through a predefined angular range, the ultrasonic sensor measures distances and outputs them through the serial interface. This data can be used to create a simple 2D radar map on a serial plotter or graphical interface.


---

**Features**

Automated 180-degree sweep using a standard servo motor

Real-time distance measurement using an ultrasonic sensor (HC-SR04)

Serial output in a structured format for data visualization

Modular code for easy adaptation to other scanning applications



---

**Hardware Components**

Arduino Uno or compatible microcontroller

Ultrasonic Sensor (HC-SR04)

Servo Motor (SG90 or equivalent)

Jumper wires and breadboard



---

**Pin Configuration**

Component	Arduino Pin

Ultrasonic Trig	D8
Ultrasonic Echo	D9
Servo Motor Signal	D10



---

**How It Works**

1. The servo motor rotates from 15° to 165° and back in small steps.


2. At each angle, the ultrasonic sensor emits a sound pulse and measures the time until it receives an echo.


3. The time is converted to a distance value (in centimeters).


4. The angle and corresponding distance are printed over serial in a CSV-like format (angle,distance.).


5. The output can be used with a serial plotter or visualized using custom radar interfaces.




---

**Serial Output Format**

The program sends data to the Serial Monitor in the following format:

angle,distance.

**Example:**

30,75.
31,74.
32,72.
...

This format can be easily parsed for plotting or interfacing with applications like Processing, Python (Matplotlib), or GUI dashboards.


---

**Installation**

1. Clone or download this repository.


2. Open the .ino file in the Arduino IDE.


3. Connect your Arduino board.


4. Upload the code.


5. Open the Serial Monitor or Serial Plotter to view live distance data.




---

**Use Cases**

Obstacle scanning and mapping

Robotic navigation systems

DIY radar visualizations

Educational demonstrations for sensor and servo integration

---

<img width="887" height="545" alt="image" src="https://github.com/user-attachments/assets/fbac5e04-c9e4-4a9b-8e6e-b7e4f03f1cce" />


---

**Author**

Avirup Bhunia
Electronics and Communication Engineering Student
Focus: Embedded Systems, Robotics, and Real-time Sensor Applications
