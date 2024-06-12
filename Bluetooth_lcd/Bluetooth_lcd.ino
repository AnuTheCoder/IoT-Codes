#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2);
String S;

void setup()  {
Serial.begin(9600); //To start serial communication  at a rate of 9600 bits per second.
pinMode(13,  OUTPUT);
lcd.begin(16,2);
lcd.init();
lcd.backlight();
}


void loop() {
  if(Serial.available()){
    S = Serial.readString();
    S.trim();

    lcd.setCursor(0,0);
    lcd.print(S);
  }
}