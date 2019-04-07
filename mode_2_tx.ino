/*
 * Mode 2 tx
 * Elia Sulimanov
 * ATtiny84
 */
 
#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

// Analog pins def
const int THROTTLE = A0;
const int RUDDER = A1;
const int ELEVATORS = A2;
const int ALIERONS = A3;

// Digital pins def
const int CE = 0;
const int CS = 1;
const int MOSI = 2;
const int MISO = 3;
const int SCK = 4;
const int LIGHTS = 5;
const int SOS = 6;

// Radio object def
RF24 radio(CE,CS);
int msg[6];
const uint64_t pipe = 0xE8E8F0F0E1LL;

void setup() {
  pinMode(THROTTLE, INPUT);
  pinMode(RUDDER, INPUT);
  pinMode(ELEVATORS, INPUT);
  pinMode(ALIERONS, INPUT);

  radio.begin();
  radio.openWritingPipe(pipe);
}

void loop() {
  
  // Stick percentage
  msg[0] = analogRead(THROTTLE) * 100 / 1024;
  msg[1] = analogRead(RUDDER) * 100 / 1024;
  msg[2] = analogRead(ELEVATORS) * 100 / 1024;
  msg[3] = analogRead(ALIERONS) * 100 / 1024;

  // Digital buttons clicks
  if(digitalRead(LIGHTS) == HIGH)
    msg[4] = 1;
  else
    msg[4] = 0;

  if(digitalRead(SOS) == HIGH)
    msg[5] = 1;
  else
    msg[5] = 0;

  // Write to radio
  radio.write(msg, 1);
}
