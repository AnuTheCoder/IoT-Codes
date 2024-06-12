#include "Blink.h"

Blink led1(9);
Blink led2(7);
Blink led3(8);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  led1.blink();
  led2.blink();
  led3.blink();
}
