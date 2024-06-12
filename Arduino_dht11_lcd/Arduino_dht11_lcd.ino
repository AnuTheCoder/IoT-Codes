//LCD libraries and object creation
#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2); 

#include "DHT.h"
#define DHTPIN 7    // Digital pin connected to the DHT sensor D7
#define DHTTYPE DHT11   //DHT 11
DHT dht(DHTPIN, DHTTYPE);  //object creation

void setup() {
  Serial.begin(9600);
  Serial.println("DHT Sensor"); //new line
  dht.begin();

  
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);
  // Check if any reads failed (any value is not a number then failed msg should be printed)
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity: ");
  Serial.print(h);
   Serial.print("% \t");    // for tab space (\t)
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("°C \t");
  Serial.print("Farenheit : ");
  Serial.print(f);
  Serial.println();


  lcd.setCursor(0,0);   //first column,first row
  lcd.print("Humidity");
  lcd.setCursor(9,0);   //9th column, first row
  lcd.print(h);


  lcd.setCursor(0,1);   //first column, second row
  lcd.print("Temperature");
  lcd.setCursor(12,1);  //12th column, second row
  lcd.print(t);

}
