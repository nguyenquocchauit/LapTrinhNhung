#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensorTMPPin;// chân analog kết nối tới cảm biến TMP36
int y = 0;
int pinled = 13;
int button = 2;
void setup() {
  
  pinMode(pinled, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(96000);
  // thiết lập số cột và số hàng của màn hình LCD:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Nhiet do");
  Serial.println("Nhiet do");
}

void loop() {
  int x = analogRead(A0);
  int sensorTMPPin = map ( ((x -20)*3.04),0,1023, -40, 125);
  lcd.setCursor(0, 0);
  lcd.print("Nhiet do");
  lcd.setCursor(0, 1);
  lcd.print(sensorTMPPin);
  lcd.print("C");  // ký tự sau nhiệt độ
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
