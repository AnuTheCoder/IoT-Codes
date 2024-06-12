void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if (Serial.available()){
   String S = Serial.readString();
   S.trim();

    if(S == "ON"){
      Serial.print("LED IS ON");
        digitalWrite(13, HIGH);
        delay(2000);
    }
    else if(S == "OFF"){ 
      digitalWrite(13, LOW);
      Serial.print("Led turned OFF \n");
   }
  }

}
