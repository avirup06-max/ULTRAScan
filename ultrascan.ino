#include <Servo.h>

// Ultrasonic Sensor Pins
const int trigPin = 8;
const int echoPin = 9;

// Variables for duration and distance
long duration;
int distance;

// Servo object
Servo myServo;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Setup pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Attach servo on pin 10
  myServo.attach(10);
}

void loop() {
  // Sweep from 15 to 165 degrees
  for (int i = 15; i <= 165; i++) {
    myServo.write(i);         // Move servo to position i
    delay(30);                // Wait for the servo to reach position
    distance = calculateDistance();

    // Output angle and distance
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }

  // Sweep from 165 back to 15 degrees
  for (int i = 165; i >= 15; i--) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

// Function to calculate distance using ultrasonic sensor
int calculateDistance() {
  // Clear the trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the ultrasonic burst
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  return distance;
}