#include<LiquidCrystal.h>
#define D4 5
#define D5 4
#define D6 3
#define D7 2
#define RS 12
#define ENT 6
#define ESC 7
#define UP 8
#define DOWN 9
#define E 11

void setup()
{
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    digitalWrite(3,LOW);
    /*int i =0, j =1000;
    while(i<=800)
    {digitalWrite(2,HIGH);
    delayMicroseconds(j);
    digitalWrite(2,LOW);
    delayMicroseconds(j);
    j--;
    i++;
    }*/
    Serial.begin(9600);

}


void loop()
{
    
    int x = analogRead(0);
    Serial.println(x);
    int speed = map(x,0,1023,3500,200);
    digitalWrite(2,HIGH);
    delayMicroseconds(speed);
    digitalWrite(2,LOW);
    delayMicroseconds(speed);
    
}
