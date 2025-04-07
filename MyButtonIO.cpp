#include "MyButtonIO.h"

MyButtonIO::MyButtonIO(int _pin) {
  this->pin = _pin;
}

void MyButtonIO::init() {
  pinMode(this->pin, INPUT_PULLUP);
}

bool MyButtonIO::isPressed() {
  return !digitalRead(this->pin);
}