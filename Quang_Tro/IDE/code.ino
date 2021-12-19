int ldr = 9; // chân đầu vào của quang trở
int led = 8; // chân ra của led
void setup()
{
  pinMode(ldr, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}
void loop()
{
  if(digitalRead(ldr) == HIGH) // quang trở điện trở thấp sẽ tắt đèn và ngược lại
  {
    digitalWrite(led, LOW);
  }
  else
  {
  digitalWrite(led, HIGH);
  }
}
