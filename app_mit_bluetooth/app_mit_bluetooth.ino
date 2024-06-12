const int LED = 4;

void setup()  {
Serial.begin(9600); 
pinMode(LED,  OUTPUT);
}


void loop() {

  if(Serial.available()){

    char data = Serial.read();

    if(data == '1'){
      digitalWrite(4,HIGH);
    }
    else if(data == '0'){
      digitalWrite(4,LOW);
    }
  }
}