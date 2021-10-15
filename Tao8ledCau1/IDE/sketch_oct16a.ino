int pinLed[]={0,1,2,3,4,5,6,7}; // Mảng lưu các chân led

void phaisangtrai()
{
  // sáng led theo cặp
  for(int chay=0; chay <8; chay=chay+2)
  {
    digitalWrite(pinLed[chay],HIGH);
    digitalWrite(pinLed[chay+1],HIGH);
    delay(1000);
  }
  
}
void setup() {
  
  for(int i=0; i<=7; i++)
  {
    pinMode(pinLed[i],OUTPUT);  
  }
  
}

void loop() {
  
  phaisangtrai();
  tatled();
  tatledchanle();
  nhapnhay();
}
void tatled()
{
  for (int chay=0;chay<8;chay++) 
  {
      digitalWrite(pinLed[chay],LOW); //tắt tất cả led
  }
  delay(100);
}
void tatledchanle()
{
  // tắt led chân lẻ , chân chẵn sáng ( chay+2)
  for(int chay=0; chay <8; chay=chay+2)
  {
    digitalWrite(pinLed[chay],HIGH);
  }
  delay(5000);
}
void nhapnhay()
{
  tatled();
  // nháy led 3 lần
  for(int chay = 0;chay<=2;chay++)
  {
    for (int chay=0;chay<8;chay++) {
      digitalWrite(pinLed[chay],LOW); //led tắt tất cả
    }
      delay(300);
    for (int chay=0;chay<8;chay++) {
      digitalWrite(pinLed[chay],HIGH); //led sáng tất cả
    }
     delay(300);
  }
  tatled();

}
