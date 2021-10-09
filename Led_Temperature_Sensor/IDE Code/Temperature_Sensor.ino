int LedPin =10;                  // Thay đổi cổng chân Led
void setup()
{
         pinMode(LedPin, OUTPUT);
        Serial.begin(96000);                         // khởi tạo kết nối nối tiếp ở 9600 bit mỗi giây
}

void loop()
{
          int x = analogRead(A0);
         int t = map ( x , 0 , 410 , -50 , 150);
        if ( t >=36)                               //Nhiệt độ lớn hơn 36 thì đèn sáng và ngược lại
             digitalWrite(LedPin,HIGH);
       else
            digitalWrite(LedPin, LOW);
      delay(100);                             // độ trễ đèn sáng
}
