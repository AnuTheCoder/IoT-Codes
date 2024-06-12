const int LED1 = 5;
const int LED2 = 6;
const int LED3 = 7;
const int LED4 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);

}

void loop() {
  
  if(Serial.available()){
    char value = Serial.read();

    if(value == "1"){
      digitalWrite(LED1,HIGH);
    }
    else if(value == "2"){
      digitalWrite(LED1,LOW);
    }
    else if(value == "3"){
      digitalWrite(LED2,HIGH);
    }
    else if(value == "4"){
      digitalWrite(LED2,LOW);
    }
    else if(value == "5"){
      digitalWrite(LED3,HIGH);
    }
    else if(value == "6"){
      digitalWrite(LED3,LOW);
    }
    else if(value == "7"){
      digitalWrite(LED4,HIGH);
    }
    else if(value == "8"){
      digitalWrite(LED4,LOW);
    }
  }

}
