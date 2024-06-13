/*
    Project name : Distance Sharp IR Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-distance-sharp-ir-sensor
*/

const int irSensorPin = A0; // Analog pin connected to the IR distance sensor
float distance_cm; // Variable to store distance in centimeters

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read analog voltage from IR sensor
  int sensorValue = analogRead(irSensorPin);

  // Convert analog value to distance in centimeters
  distance_cm = 10650.08 / (sensorValue - 27.728);

  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500); // Add a small delay before the next reading
}
