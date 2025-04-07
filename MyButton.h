#ifndef MyButton_H
#define MyButton_H

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