#include <Servo.h> // khai báo thư viện của Servo
Servo myservo1 ; // tạo đối tượng servo
#define sensor 2 // cảm biến hồng ngoại chân 2
#define led 10 // led chân 10
void setup() {
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
  myservo1.attach(9);//thiết lập chân kết nối với motor
}

void loop() {
  // trạng thái ban đầu của servo là quay 90 độ vì vậy 
  // write(90) sẽ về trạng thái ban đầu và write(0) sẽ là trạng thái ban đầu
  if (digitalRead(sensor) == 1)
  {
    myservo1.write(90);  //nếu gặp vật cản thì quay về trạng thái ban đầu
    digitalWrite(led, HIGH);// và bật led
  }
  else
  {
    myservo1.write(0); // không phát hiện thì sẽ quay 1 góc 90 
    digitalWrite(led, LOW);//và tắt led
  }
}
