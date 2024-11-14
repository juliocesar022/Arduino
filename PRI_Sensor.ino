int pirPin = 2;    // Pin donde está conectado el sensor PIR
int ledPin = 7;    // Pin donde está conectado el LED

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorState = digitalRead(pirPin);
  
  if (sensorState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Movimiento detectado");
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(500);
}