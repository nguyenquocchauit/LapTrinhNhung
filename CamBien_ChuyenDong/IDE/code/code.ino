#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int pir = 8;
int led = 9;  // den ket noi Pin 7
int peaker = 7; // ket noi loa
void setup() {
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(peaker, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("Thiet bi");

}
void loop() {
  if (digitalRead(8) == HIGH)
  {
    lcd.setCursor(0, 1);
    lcd.print("Bao Dong");
    digitalWrite(led, HIGH);
    digitalWrite(peaker, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(peaker, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Binh Thuong");
  }
}
