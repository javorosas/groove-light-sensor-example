#include <DHT.h>


int tempSensor = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  if (Serial.available() > 0) {
    inByte = Serial.read();
    tempSenor = analogRead(A0)
  }
}
