#include <LiquidCrystal.h> // thêm thư viện cho màn hình LCD
LiquidCrystal lcd (9,8,7,6,5,4); // các cổng vào của LCD với mạch
const int TRIGG = 3;
const int ECHO = 2;
void setup()
{
  pinMode(TRIGG, OUTPUT);
  pinMode(ECHO, OUTPUT);
  lcd.begin(16,2);
}
void loop()
{
  float duration;
  float distance;
  digitalWrite(TRIGG, 0);
  delayMicroseconds(2);
  digitalWrite(TRIGG, 1); // phat xung tu chan trigg
  delayMicroseconds(10);
  digitalWrite(TRIGG, 1);
  duration = pulseIn(ECHO, HIGH,50000); /// do rong xung high sau 50000ms khong nhan duoc xung phan xa thi tra ve 0
  distance = (duration * 0.034/2);
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm");
  delay(1000);
  lcd.clear();
 }
