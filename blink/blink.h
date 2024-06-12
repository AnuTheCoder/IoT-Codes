#ifndef BLINK_H
#define BLINK_H
#include "Arduino.h"

class Blink
{
  public:
  Blink(int pin);
  int _pin;
  void blink();
};
#endif