// code.ino - Smart Hydrate

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <SoftwareSerial.h>

#define LED_PIN 9
#define UV_PIN 10
#define LEVEL_SENSOR A0
#define BUTTON_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(UV_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int level = analogRead(LEVEL_SENSOR);
  Serial.print("Water Level: ");
  Serial.println(level);

  // Glowing LED as reminder
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);

  // Button to turn on UV
  if (digitalRead(BUTTON_PIN) == LOW) {
    digitalWrite(UV_PIN, HIGH);
    delay(5000);  // UV on for 5 sec
    digitalWrite(UV_PIN, LOW);
  }

  delay(1000);  // Basic loop delay
}

