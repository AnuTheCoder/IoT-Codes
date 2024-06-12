#include LED_PIN D4
void setup() {
  pinMode(LED_PIN, OUTPUT);  // Initialize the LED_PIN pin as an output
}
void loop() {
  digitalWrite(LED_PIN, LOW); // Turn the LED OFF by making the voltage LOW
  delay(1000);                      // Wait for a second
  digitalWrite(LED_PIN, HIGH);  // Turn the LED ON by making the voltage HIGH
  delay(2000);                      // Wait for two seconds
}
