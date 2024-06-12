#include <Servo.h> 

// defines pins numbers
#define trigPin 9
#define echoPin 10
int servoPin = 3; 
#define led 5

//Object Creation
Servo Servo1;

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Servo1.attach(servoPin); 
Serial.begin(9600); // To start serial communication  at a rate of 9600 bits per second.
pinMode(led,OUTPUT);
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(2000);


      if(distance < 5){
           Servo1.write(90);  
           digitalWrite(led,HIGH);
           delay(5000);
         }
      else{
        Servo1.write(0);
      }

}