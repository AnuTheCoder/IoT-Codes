#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() 
{
  lcd.begin(16,2); 
 lcd.init();
 lcd.backlight();

lcd.setCursor(0,1);
   for(int i = 0; i<10; i++){
    lcd.print(i);
  }
}

void loop() 
{

}