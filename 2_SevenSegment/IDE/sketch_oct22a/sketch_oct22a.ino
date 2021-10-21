// Các chân 7 seg
const int a=7;
const int b=8;
const int c=2;
const int d=3;
const int e=4;
const int f=6;
const int g=5;
const int ones=10;
const int tens=11;

bool digit = HIGH; // khởi tạo trạng thái ban đầu của seg
long Millis_bandau =0;
long Millis_hientai =0;
long tgianchay =1000; // khoảng cách giữa các số
int x=0;
int y=0;

void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(ones, OUTPUT);
  pinMode(tens, OUTPUT);
}
void loop(){
  digit=!digit;
  if(digit==LOW)
  {
    digitalWrite(ones, LOW);
    digitalWrite(tens, HIGH);
      if(x==0) Zero();
        if(x==1) One();
        if(x==2) Two();
    if(x==3) Three();
    if(x==4) Four();
    if(x==5) Five();
    if(x==6) Six();
    if(x==7) Seven();
    if(x==8) Eight();
    if(x==9) Nine();

  }
  if(digit==HIGH)
  {
    digitalWrite(ones, HIGH);
    digitalWrite(tens, LOW);
    if(y==0) Zero();
    if(y==1) One();
    if(y==2) Two();
    if(y==3) Three();
    if(y==4) Four();
    if(y==5) Five();
    if(y==6) Six();
    if(y==7) Seven();
    if(y==8) Eight();
    if(y==9) Nine();
  }
    setupTime();
    reset();
}
void setupTime(){
  Millis_hientai = millis(); // tạo biến bằng hàm mili giây của hệ thống
  if(Millis_hientai - Millis_bandau >= tgianchay)
  {
    Millis_bandau=Millis_hientai;
    x++;
        // X(led trái) > 9 thì Y(led phải) chạy và lặp lại X
    if(x>9)
    {
      x=0;
      y++;
    }
        // khi 99 quay lại từ đầu 00
    if(y>9)
    {
      y=0;
    }
        Serial.print(y);
        Serial.println(x);
  } 
}
void reset(){
  delay(5);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void Zero(){
    digitalWrite(a, LOW );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, LOW );
  digitalWrite(e, LOW );
  digitalWrite(f, LOW );
  digitalWrite(g, HIGH );
}
void One(){
  digitalWrite(a, HIGH );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, HIGH );
  digitalWrite(e, HIGH );
  digitalWrite(f, HIGH );
  digitalWrite(g, HIGH );
}
void Two(){
  digitalWrite(a, LOW );
  digitalWrite(b, LOW );
  digitalWrite(c, HIGH );
  digitalWrite(d, LOW );
  digitalWrite(e, LOW );
  digitalWrite(f, HIGH );
  digitalWrite(g, LOW );
}
void Three(){
  digitalWrite(a, LOW );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, LOW );
  digitalWrite(e, HIGH );
  digitalWrite(f, HIGH );
  digitalWrite(g, LOW );
}
void Four(){
  digitalWrite(a, HIGH );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, HIGH );
  digitalWrite(e, HIGH );
  digitalWrite(f, LOW );
  digitalWrite(g, LOW );
}
void Five(){
  digitalWrite(a, LOW );
  digitalWrite(b, HIGH );
  digitalWrite(c, LOW );
  digitalWrite(d, LOW );
  digitalWrite(e, HIGH );
  digitalWrite(f, LOW );
  digitalWrite(g, LOW );
}
void Six(){
  digitalWrite(a, LOW );
  digitalWrite(b, HIGH );
  digitalWrite(c, LOW );
  digitalWrite(d, LOW );
  digitalWrite(e, LOW );
  digitalWrite(f, LOW );
  digitalWrite(g, LOW );
}
void Seven(){
  digitalWrite(a, LOW );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, HIGH );
  digitalWrite(e, HIGH );
  digitalWrite(f, HIGH );
  digitalWrite(g, HIGH );
}
void Eight(){
  digitalWrite(a, LOW );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, LOW );
  digitalWrite(e, LOW );
  digitalWrite(f, LOW );
  digitalWrite(g, LOW );
}
void Nine(){
  digitalWrite(a, LOW );
  digitalWrite(b, LOW );
  digitalWrite(c, LOW );
  digitalWrite(d, LOW );
  digitalWrite(e, HIGH );
  digitalWrite(f, LOW );
  digitalWrite(g, LOW );
}
