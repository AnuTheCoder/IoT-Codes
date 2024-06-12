#define BLYNK_TEMPLATE_ID "TMPL3ZZw4AHrF"
#define BLYNK_TEMPLATE_NAME "LED Blink"
#define BLYNK_AUTH_TOKEN "ijTDWNPWOQD6AWLx9GYxKVc7-fbEioQQ"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
char auth[] = BLYNK_AUTH_TOKEN;                                                       
char ssid[] = "Redmii";
char pass[] = "12345678900";

int LED = D0;
BLYNK_WRITE(V0){
  digitalWrite(D0,param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(115200);
  pinMode(D0,OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass,"blynk.cloud",80);
}

void loop()
{
  Blynk.run();
}
