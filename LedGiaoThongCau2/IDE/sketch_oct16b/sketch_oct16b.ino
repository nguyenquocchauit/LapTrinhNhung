int den_do=3; 
int den_vang=4;
int den_xanh=5;
// các chân led 
void setup() {
  pinMode(den_do,OUTPUT);
  pinMode(den_vang,OUTPUT);
  pinMode(den_xanh,OUTPUT);

}

void loop() 
{
 digitalWrite(den_do,HIGH);
 delay(25000);
 digitalWrite(den_do,LOW); // tắt led đỏ
 digitalWrite(den_vang,HIGH);
 delay(10000);
 digitalWrite(den_vang,LOW); // tắt led vàng
 digitalWrite(den_xanh,HIGH);
 delay(30000);
 digitalWrite(den_xanh,LOW); // tắt led xanh và lặp lại led đỏ sáng

}
