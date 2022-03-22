
#define echoPin 2 
#define trigPin 3 
int pump = 8;
long duration; 
int distance; 

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(pump, OUTPUT); 
  Serial.begin(9600); 
}
void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance < 20)
  {
   digitalWrite(pump, HIGH);
  }
  else
  {
  digitalWrite(pump, LOW);
  }
  
  
}
