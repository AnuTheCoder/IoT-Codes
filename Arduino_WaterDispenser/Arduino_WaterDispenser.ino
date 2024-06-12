// defines pins numbers
#define trigPin 9
#define echoPin 10
#define led 5
#define Relay 3

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // To start serial communication  at a rate of 9600 bits per second.
pinMode(led,OUTPUT);
pinMode(Relay, OUTPUT);
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



if(distance <5){
  Serial.print("Start Pumping");
  digitalWrite(led, HIGH);
  digitalWrite(Relay, LOW); 
  delay(1000);
}
else{
  Serial.print("Stop Pumping");
    digitalWrite(Relay, HIGH); 
     digitalWrite(led, LOW);
     delay(1000);
}

}