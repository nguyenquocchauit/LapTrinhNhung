int pinLed = 9;
int poten = A0;
void setup() {

    pinMode(poten,INPUT);
    pinMode(pinLed, OUTPUT);
    Serial.begin(9600);
}
int readA0 = 0;
void loop() {
  
    readA0 = analogRead(poten);
    Serial.println(readA0);

    digitalWrite(pinLed,HIGH);
    delay(readA0);
    digitalWrite(pinLed,LOW);
    delay(readA0);
}
