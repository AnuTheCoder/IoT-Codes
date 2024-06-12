#define MQ2pin 0

float sensorValue;  //variable to store sensor value

void setup() {
	Serial.begin(9600); // sets the serial port to 9600
  pinMode(13,OUTPUT);
	Serial.println("MQ2 warming up!");
	delay(20000); // allow the MQ2 to warm up
}

void loop() {
	sensorValue = analogRead(MQ2pin); // read analog input pin 0
  if(sensorValue>500){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }

	Serial.print("Sensor Value: ");
	Serial.println(sensorValue);
	
	delay(2000); // wait 2s for next reading
}