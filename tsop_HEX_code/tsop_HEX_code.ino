#include "IRremote.h"   //include library for TSOP1738
int recvPin=D6;         //Define pin for the sensor
IRrecv myIR(recvPin);    //Create an object of type IRrecv to access all the functions of the library.
decode_results results;  //Create a variable of decode_results type to store the values

void setup() {
  myIR.enableIRIn();    //Enable TSOP
  Serial.begin(9600);  //Set baud rate for serial communication
}

void loop() {
  if(myIR.decode(&results)){
    Serial.print(results.value,HEX);  //Print the data in the Hex form
    delay(1000);
    myIR.resume();
  }
}
