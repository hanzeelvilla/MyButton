#include "MyButton.h"

MyButton::MyButton(int _pin) {
  this->pin = _pin;
}

void MyButton::init() {
  pinMode(this->pin, INPUT_PULLUP);
}

bool MyButton::isPressed() {
  return !digitalRead(this->pin);
}