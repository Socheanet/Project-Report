int a=13;
int b=12;
int c=11;
int d=10;
int e=9;
int f=8;
int g=7;
int a1=6;
int b1=5;
int c1=4;
int d1=3;
int e1=2;
int f1=1;
int g1=0;
int green=A3;
int yellow=A4;
int red=A5;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(a1,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(c1,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(d1,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(e1,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(f1,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);         // 9
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);     //8
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);     //7
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);     //6
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);     //5
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);     //4
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);     //3
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);     //2
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);     //1
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);     //0
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(1000);
  //// prepare ////
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);     //3
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);     //2
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);     //1
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);     //0
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(1000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);     //stop green segment
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);

  /// stop /////
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);         // 9
  digitalWrite(e1,LOW);
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);     //8
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);     //7
  digitalWrite(f1,LOW);
  digitalWrite(g1,LOW);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);     //6
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,LOW);     //5
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);     //4
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,LOW);     //3
  digitalWrite(f1,LOW);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,LOW);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);     //2
  digitalWrite(f1,LOW);
  digitalWrite(g1,HIGH);
  delay(1000);
  digitalWrite(a1,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);     //1
  digitalWrite(f1,LOW);
  digitalWrite(g1,LOW);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);     //0
  digitalWrite(f1,HIGH);
  digitalWrite(g1,LOW);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);     //stop green segment
  digitalWrite(f1,LOW);
  digitalWrite(g1,LOW);
  delay(1000);
  
 
  
  

}
