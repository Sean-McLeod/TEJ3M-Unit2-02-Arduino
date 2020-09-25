
int led= 13;
int lightTime= 1000;


void setup() {
  
  pinMode(led, OUTPUT);
}


void loop() {
  digitalWrite(led, HIGH);
  delay(lightTime);
  digitalWrite(led, LOW);
  delay(1000);
  
  lightTime= lightTime+ 1000;
}


