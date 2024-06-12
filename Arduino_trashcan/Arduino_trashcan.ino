#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2);

// defines pins numbers
#define trigPin 9
#define echoPin 10
#define led 5

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input 
Serial.begin(9600); // To start serial communication  at a rate of 9600 bits per second.
pinMode(led,OUTPUT);

lcd.begin(16,2);
lcd.init();
lcd.backlight();

}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(2000);


      if(distance < 5){
           lcd.setCursor(0,0);
           lcd.print("Trash Can Full !");
           lcd.setCursor(0,1);
           lcd.print("Clean Up Trash!");
           digitalWrite(led,HIGH);
         }
      else{
        digitalWrite(led,LOW);
        lcd.clear();

        lcd.setCursor(0,0);
        lcd.print("Distance");

        lcd.setCursor(9,0);
        lcd.print(distance);

        lcd.setCursor(0,1);
        lcd.print("Use Trash Can");
        
      }

}