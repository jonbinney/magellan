#include <Arduino.h>

const int deadman_pin = 0;

const unsigned long deadman_check_interval = 100;

void setup()
{
  pinMode(deadman_pin, INPUT_PULLDOWN);

  // Outputs over USB
  Serial.begin(9600);

  // UART, transmits on pin 14, receives on 13
  Serial1.begin(57600);
}

void loop()
{
  delay(deadman_check_interval);
  int deadman_on = digitalRead(deadman_pin);
  Serial.println(deadman_on);
  Serial1.println(deadman_on);
}
