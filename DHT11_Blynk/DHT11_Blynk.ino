#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3s1gZEC66"
#define BLYNK_TEMPLATE_NAME "DHT11"
#define BLYNK_AUTH_TOKEN "53CnB_zt4Y25PZwCkmrzTJc31bDzNbrf"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#define DHTPIN 2 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
// Your WiFi credentials.
char ssid[] = "Redmii";
char pass[] = "12345678900";
void setup()
{
  Serial.begin(9600);
  dht.begin();
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
void loop()
{
  Blynk.run();
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
Serial.println("Temperature: ");
Serial.println(temperature);
Serial.println(" °C, Humidity: ");
Serial.println(humidity);
Serial.println(" %");
  Blynk.virtualWrite(V0, humidity);
  Blynk.virtualWrite(V1, temperature);

  delay(10000); // Update every 2 seconds
}