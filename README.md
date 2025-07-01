# iot-home-automation-digital-logic-
// Sensor reading and device control example

int sensorPin = 2;     // Interference sensor input pin
int devicePin = 8;     // Light/Fan control output pin

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(devicePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorState = digitalRead(sensorPin);

  if(sensorState == HIGH) {
    digitalWrite(devicePin, HIGH);  // Turn ON device
    Serial.println("Interference detected: Device ON");
  } else {
    digitalWrite(devicePin, LOW);   // Turn OFF device
    Serial.println("No interference: Device OFF");
  }

  delay(1000);  // Wait 1 second for stability and power saving
}
