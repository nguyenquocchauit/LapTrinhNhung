void setup()
{
  
  pinMode(10, OUTPUT);
  Serial.begin(96000);
}

void loop()
{
  int x = analogRead(A0);
  int t = map ( x , 0 , 410 , -50 , 150);
  
  if ( t >=36)
    digitalWrite(10,HIGH);
  else
    digitalWrite(10, LOW);
  delay(100);
  
}
