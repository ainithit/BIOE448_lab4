const int trigPin = A;
const int echoPin = B;
long duration
int distanceCm, distanceInch;


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digital.Write(trigPin, LOW);
  delayMicroseconds(2);
  digital.Write(trigPin, HIGH);
  delayMicroseconds(10); 
  digital.Write(trigPin, LOW);
  duration = pulseIn(echoPin HIGH);
}
