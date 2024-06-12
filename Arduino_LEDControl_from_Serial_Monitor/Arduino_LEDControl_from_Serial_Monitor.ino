void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if (Serial.available()){
   int S = Serial.parseInt();

    if(S == 1){
        digitalWrite(13, HIGH);
        delay(2000);
    }
    else if(S == 0){
      digitalWrite(13, LOW);
      Serial.print("Led turned OFF \n");
    }
    else {
      Serial.print("Invalid value \n");
    }
  }

}
