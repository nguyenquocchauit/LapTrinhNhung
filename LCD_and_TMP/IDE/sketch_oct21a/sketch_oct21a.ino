#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensorTMPPin;// chân analog kết nối tới cảm biến LM36
int y = 0;
int pinled = 13;
int button = 2;
void setup() {
  
  pinMode(pinled, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(96000);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Nhiet do");
  Serial.println("Nhiet do");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  int x = analogRead(A0);
  int sensorTMPPin = map ( ((x -20)*3.04),0,1023, -40, 125);
  lcd.setCursor(0, 0);
  lcd.print("Nhiet do");
  lcd.setCursor(0, 1);
  lcd.print(sensorTMPPin);
  lcd.print("C");  // print the number of seconds since reset:
  Serial.println(sensorTMPPin);
  delay( 1000);
  lcd.clear();
  batden();
  
 
}
void batden()
{
  int z = analogRead(A0);
  int t = map ( z , 0 , 410 , -50 , 150);
  y = digitalRead(button);
  // kiểm tra xem nút có được nhấn không. Nếu đúng như vậy, x là CAO:
  if (y == HIGH && t>=100) {
    // turn LED on:
    digitalWrite(pinled, HIGH);
  } else {
    // turn LED off:
    digitalWrite(pinled, LOW);
  }
  delay(10); // độ trễ button
}
