#include "DHT.h"
#define DHTPIN 7    // Digital pin connected to the DHT sensor D7
#define DHTTYPE DHT11   //DHT 11
DHT dht(DHTPIN, DHTTYPE);  //object creation

void setup() {
  Serial.begin(9600);
  Serial.println("DHT Sensor"); //new line
  dht.begin();
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
}
