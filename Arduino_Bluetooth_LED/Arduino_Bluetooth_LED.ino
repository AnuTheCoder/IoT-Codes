#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 2);

void  setup(){
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop(){
  while(mySerial.available()>0){
    String value = mySerial.readString();
    value.trim();

    if(value == 'ON'){
      digitalWrite(13,HIGH); 
      mySerial.print("LED ON");
    }
    else if(value == 'OFF'){
      digitalWrite(13,LOW);
      mySerial.print("LED OFF");
    }
  }
}