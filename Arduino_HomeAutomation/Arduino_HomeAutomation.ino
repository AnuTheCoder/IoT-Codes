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
    String value = Serial.readString();
    value.trim();

    if(value == "LED1_ON"){
      digitalWrite(LED1,HIGH);
    }
    else if(value == "LED1_OFF"){
      digitalWrite(LED1,LOW);
    }
    else if(value == "LED2_ON"){
      digitalWrite(LED2,HIGH);
    }
    else if(value == "LED2_OFF"){
      digitalWrite(LED2,LOW);
    }
    else if(value == "LED3_ON"){
      digitalWrite(LED3,HIGH);
    }
    else if(value == "LED3_OFF"){
      digitalWrite(LED3,LOW);
    }
    else if(value == "LED4_ON"){
      digitalWrite(LED4,HIGH);
    }
    else if(value == "LED4_OFF"){
      digitalWrite(LED4,LOW);
    }
  }

}
