//Jaskaran Singh
// Measuing Distance using Ultrasonic sensor HC-SR04

// Sensor 1
#define trigPin1 3
#define echoPin1 2
// Sensor 2
#define trigPin2 5
#define echoPin2 4
 
long duration1, duration2;
int distance1 , distance2;
void setup() {
Serial.begin(9600);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT); 

pinMode(trigPin2, OUTPUT);
pinMode(echoPin2, INPUT); 

}

void loop() {
  // Clears the trigPin
digitalWrite(trigPin1, LOW);
digitalWrite(trigPin2, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin1, HIGH);
digitalWrite(trigPin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);
digitalWrite(trigPin2, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration2 = pulseIn(echoPin1, HIGH);
duration2 = pulseIn(echoPin2, HIGH);
// Calculating the distance
distance1 = duration1*0.034/2;
distance2 = duration2*0.034/2;
// Prints the distance on the Serial Monitor
/*
Serial.print("Distance1: ");
Serial.println(distance1);

Serial.print("Distance2: ");
Serial.println(distance2);*/ 

if (distance1<10){ 
  if(distance2 <10){
    Serial.print("Person Exited");}
    }
if (distance2<10){ 
  if(distance1 <10){
    Serial.print("Person Ebtered");}
    }
    


}
