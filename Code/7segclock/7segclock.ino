#include <Wire.h>
#include "DS3231.h"
#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8

#define c1 A0
#define c2 A1
#define c3 A2
#define c4 A3
#define c5 10
#define c6 11

RTClib RTC;
int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,1,0,1,1 }};   // 9


void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(c1,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(c3,OUTPUT);
pinMode(c4,OUTPUT);
pinMode(c5,OUTPUT);
pinMode(c6,OUTPUT);

digitalWrite(c1,LOW);
digitalWrite(c2,LOW);
digitalWrite(c3,LOW);
digitalWrite(c4,LOW);
digitalWrite(c5,LOW);
digitalWrite(c6,LOW);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//Serial.begin(9600);

 Wire.begin();
}
void printno(int pos , int no){

  
  int p;
  
  switch(pos)
  {
    case 1:p=14;break;
    case 2:p=15;break;
    case 3:p=16;break;
    case 4:p=17;break;
    case 5:p=10;break;
    case 6:p=11;break;
    }
    
    digitalWrite(p,HIGH);

    digitalWrite(a,!num_array[no][0]);
    digitalWrite(b,!num_array[no][1]);
    digitalWrite(c,!num_array[no][2]);
    digitalWrite(d,!num_array[no][3]);
    digitalWrite(e,!num_array[no][4]);
    digitalWrite(f,!num_array[no][5]);
    digitalWrite(g,!num_array[no][6]);
    delay(3);  
    digitalWrite(p,LOW); 
     
   
  
  
  }


  
void loop() {
   DateTime now = RTC.now();
  int h=now.hour();
  int h1=h%10;
  printno(2,h1);
  printno(1,h/10);

  int m=now.minute();
  int m1=m%10;
  printno(4,m1);
  printno(3,m/10);
  

  int s=now.second();
  int s1=s%10;
  printno(6,s1);
  printno(5,s/10);
}
