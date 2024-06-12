void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Initialize the LED_BUILTIN pin as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000);                      // Wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(2000);                      
}
