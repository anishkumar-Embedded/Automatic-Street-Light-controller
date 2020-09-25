int sensorPin = A0; 
int sensorValue = 0; 
void setup() 
{
Serial.begin(9600); 
pinMode(13, OUTPUT);
}
void loop() 
{
  sensorValue = analogRead(sensorPin);
  Serial.print("OUTPUT:");
  Serial.println(sensorValue); 
  delay(500);
  if(sensorValue<=500)
  {
  digitalWrite(13, HIGH);  
  delay(5000);
  }
  else
  {
  digitalWrite(13, LOW);  
  delay(5000);
  }
}
