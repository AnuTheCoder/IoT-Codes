#include <IRrecv.h>   //include library for TSOP1738
uint16_t RECV_PIN = D6; //Define pin for the sensor
IRrecv irrecv(RECV_PIN);//Create an object of type IRrecv to access all the functions of the library.
decode_results results;//Create a variable of decode_results type to store the values

void setup() {
  Serial.begin(9600);
  pinMode(D5,OUTPUT);//led
  irrecv.enableIRIn();  // Start the receiver//Enable TSOP
}

void loop() {
  if (irrecv.decode(&results)) {
   unsigned int ircode = results.value;
    Serial.println(ircode);
        if(ircode==3403500509){
         digitalWrite(D5,HIGH);//led ON
         delay(1000);
        }
    }
    irrecv.resume();  // Receive the next value
  digitalWrite(D5,LOW);// led OFF
  delay(300);
}
