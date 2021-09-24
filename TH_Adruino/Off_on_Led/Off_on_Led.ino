// C++ code
//
int x = 0;
void setup()
{
  // tạo biến lưu chữ trạng thái của button
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // đọc trạng thái của giá trị nút bấm:
  x = digitalRead(2);
  // kiểm tra xem nút có được nhấn không. Nếu đúng như vậy, x là CAO:
  if (x == HIGH) {
    // turn LED on:
    digitalWrite(13, HIGH);
  } else {
    // turn LED off:
    digitalWrite(13, LOW);
  }
  delay(10); // độ trễ button
}
