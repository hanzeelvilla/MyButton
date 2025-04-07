#ifndef MyButtonIO_H
#define MyButtonIO_H

/*
  MyButtonIO.h - A small and simple Arduino library to handle physical buttons
  Created by Hanzeel Villa, April 6, 2025.
  Released into the public domain.

*/

#include <Arduino.h>

class MyButtonIO {
  private:
    int pin;

  public:
    MyButtonIO(int _pin);
    void init();
    bool isPressed();
};

#endif