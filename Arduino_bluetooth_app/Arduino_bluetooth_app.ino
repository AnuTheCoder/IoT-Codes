const int LED = 13;
char switchstate;

void setup()  {
Serial.begin(9600); //To start serial communication  at a rate of 9600 bits per second.
pinMode(LED,  OUTPUT);
}


void loop() {
while(Serial.available()>0){ 
switchstate = Serial.read();
Serial.print(switchstate);
Serial.print("\
");
delay(15);
if(switchstate  == '1'){//Checking if the value from app is '1'
 digitalWrite(13, HIGH);
}
else if(switchstate == '0'){
 digitalWrite(13, LOW);
}
}
}