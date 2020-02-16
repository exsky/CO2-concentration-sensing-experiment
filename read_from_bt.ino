#include <SoftwareSerial.h>

// Define the  BlueTooth RX/TX
// The RX/TX pins of NANO are 1 and 0
SoftwareSerial BT(1, 0);
char val;
int switch_status;
int temperature;
int humidity;

void setup() {
  Serial.begin(38400);
  Serial.println("BlueTooth is ready!");

  // The baudrate of HC-06 is 9600
  // The baudrate of HC-05 is 38400
  BT.begin(38400);

  // init variables
  switch_status = 0;
  temperature = 0;
  humidity = 0;
}

void loop() {
  if (Serial.available()){
    val = BT.read();
    Serial.print(val);
  }
  
}
