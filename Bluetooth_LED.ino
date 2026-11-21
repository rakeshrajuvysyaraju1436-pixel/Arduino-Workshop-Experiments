#include <SoftwareSerial.h>

SoftwareSerial bt(10, 11);  // RX, TX
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);        
  bt.begin(9600);            
  Serial.println("Ready");
}

void loop() {
  if (bt.available()) {
    char cmd = bt.read();

    
    if (cmd == '\n' || cmd == '\r') return;

    Serial.print("Received: ");
    Serial.println(cmd);

    if (cmd == '1') {
      digitalWrite(ledPin, HIGH);
      bt.println("LED ON");
    } else if (cmd == '0') {
      digitalWrite(ledPin, LOW);
      bt.println("LED OFF");
    } else {
      bt.println("Send 1 (ON) or 0 (OFF)");
    }
  }
}