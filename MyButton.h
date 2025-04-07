#ifndef MyButton_H
#define MyButton_H

/*
  MyButton.h - A small and simple Arduino library to handle physical buttons
  Created by Hanzeel Villa, April 6, 2025.
  Released into the public domain.

*/

#include <Arduino.h>

class MyButton {
  private:
    int pin;

  public:
    MyButton(int _pin);
    void init();
    bool isPressed();
};

#endif