#include "Blink.h"

Blink::Blink(int pin){
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Blink::blink(){
  digitalWrite(_pin,1);
  delay(1000);
  digitalWrite(_pin,0);
  delay(1000);
}