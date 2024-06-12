#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2); //Create object - > class_name object_name(parameters); check header file(.h) from library for className


void setup() 
{

lcd.begin(16,2);//Defining 16 columns and 2 rows of lcd display
lcd.init();
lcd.backlight();//To Power ON the back light

}

void loop() 
{
lcd.setCursor(0,0); //Defining positon to write from first column,first row .
lcd.print(" LCD Display "); //You can write 16 Characters per line .
delay(1000);//Delay used to give a dynamic effect
lcd.setCursor(0,1);  //Defining positon to write from first column,second row .
lcd.print("Sensors");
delay(8000); 

lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print(" ARDUINO ");
lcd.setCursor(0,1);
    lcd.print(" LIBRARY ");
delay(8000); 
}

