#include <ESP8266WiFi.h> 
const char* ssid = "Redmii";
const char* password = "12345678900";

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println('\n');

  WiFi.begin(ssid,password);
  Serial.println("Connecting to ");
  Serial.println(ssid);
  Serial.println("..........");

  int i = 0;
  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(++i);
    Serial.print(" ");
  }

  Serial.println("\n");
  Serial.println("Connection established");
  Serial.println("IP Address : \t");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
