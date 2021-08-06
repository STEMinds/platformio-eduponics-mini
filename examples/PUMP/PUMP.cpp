// Arduino IDE BH1750 Eduponics Mini Example
// https://github.com/STEMinds/eduponics-mini
//
// MIT License
// Copyright (c) 2020 STEMinds
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <Arduino.h>

// set the pump on IO pin number 23
const int pump = 23;

void setup() {
  Serial.begin(115200);
  // configure pump as output
  pinMode(pump, OUTPUT);
}

void loop() {
  // when pump on low the relay is closed, no water is going through
  digitalWrite(pump, LOW);
  Serial.println("Relay is closed");
  delay(1000);
  // if the pump is high, the relay is open, the water goes through
  digitalWrite(pump, HIGH);
  Serial.println("Relay is open");
  delay(1000);
}
