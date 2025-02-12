const int trigPin = 11;
const int echoPin = 12;
long duration;
int distanceCm, distanceInch;

const int redLEDPin = 4;
const int greenLEDPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);

  distanceCm = duration/58;
  distanceInch = duration/148;
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.print(" cm/ ");
  Serial.print("Distance: ");
  Serial.print(distanceInch);
  Serial.println(" in");

  if (distanceCm < 10){
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, LOW);
  } else {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, HIGH);
  }
  delay(1000);
}
