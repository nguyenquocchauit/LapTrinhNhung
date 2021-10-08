int a=6 , b=5 , c=4, d=3, e=2, f=1, g=0;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(f, OUTPUT);
}

void KHONG(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,HIGH); 
   digitalWrite (g,LOW); 
   digitalWrite (e,HIGH); 
   digitalWrite (f,HIGH); 
}
void MOT(){
   digitalWrite (a,LOW); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,LOW); 
   digitalWrite (g,LOW); 
   digitalWrite (e,LOW); 
   digitalWrite (f,LOW); 
}
void HAI(){
   digitalWrite (a,LOW); 
   digitalWrite (b,LOW); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,LOW); 
   digitalWrite (g,LOW); 
   digitalWrite (e,LOW); 
   digitalWrite (f,HIGH); 
}
void BA(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,HIGH); 
   digitalWrite (g,HIGH); 
   digitalWrite (e,LOW); 
   digitalWrite (f,LOW); 
}
void BON(){
   digitalWrite (a,LOW); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,LOW); 
   digitalWrite (g,HIGH); 
   digitalWrite (e,LOW); 
   digitalWrite (f,HIGH); 
}
void NAM(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,LOW); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,HIGH); 
   digitalWrite (g,HIGH); 
   digitalWrite (e,LOW); 
   digitalWrite (f,HIGH); 
}
void SAU(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,LOW); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,HIGH); 
   digitalWrite (g,HIGH); 
   digitalWrite (e,HIGH); 
   digitalWrite (f,HIGH); 
}
void BAY(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,LOW); 
   digitalWrite (g,LOW); 
   digitalWrite (e,LOW); 
   digitalWrite (f,LOW); 
}
void TAM(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,HIGH); 
   digitalWrite (g,HIGH); 
   digitalWrite (e,HIGH); 
   digitalWrite (f,HIGH); 
}
void CHIN(){
   digitalWrite (a,HIGH); 
   digitalWrite (b,HIGH); 
   digitalWrite (c,HIGH); 
   digitalWrite (d,HIGH); 
   digitalWrite (g,HIGH); 
   digitalWrite (e,LOW); 
   digitalWrite (f,HIGH); 
}

void loop(){
  KHONG();
  delay(1000);
  MOT();
  delay(1000);
  HAI();
  delay(1000);
  BA();
  delay(1000);
  BON();
  delay(1000);
  NAM();
  delay(1000);
  SAU();
  delay(1000);
  BAY();
  delay(1000);
  TAM();
  delay(1000);
  CHIN();
  delay(1000);
}
