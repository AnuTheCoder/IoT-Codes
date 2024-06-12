#include <ESP8266WiFi.h>

#include <FirebaseArduino.h>

// Set these to run example.

#define FIREBASE_HOST "ledblink-ccfbf-default-rtdb.firebaseio.com/"
#define FIREBASE_AUTH "9EgQ4CltApv1dt7FzUFXjn5rBZpVriUxKo9cvwzQ"

#define WIFI_SSID "Redmii"

#define WIFI_PASSWORD "12345678900"

void setup() {

Serial.begin(9600);

// connect to wifi.

WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

Serial.print("connecting");

while (WiFi.status() != WL_CONNECTED) {

Serial.print(".");
}
}