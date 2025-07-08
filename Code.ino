int pir = 2;         // PIR sensor pin
int relay = 8;       // Appliance (LED/Fan)
int button = 4;      // Remote control input (simulate Bluetooth)

void setup() {
  pinMode(pir, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(button, INPUT_PULLUP); // HIGH by default, LOW when pressed
  Serial.begin(9600);
}

void loop() {
  bool motion = digitalRead(pir);             // Motion from PIR
  bool remote = !digitalRead(button);         // Button press = LOW

  if (motion && remote) {
    digitalWrite(relay, HIGH);                // Turn ON
    Serial.println("Motion + Remote: Device ON");
  } else {
    digitalWrite(relay, LOW);                 // Turn OFF
    Serial.println("Condition not met: Device OFF");
  }

  delay(200);
}