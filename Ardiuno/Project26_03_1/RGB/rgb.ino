#include<Adafruit_NeoPixel.h>
#define r 3
#define g 5
#define b 6
void setup()
{
    Serial.begin(9600);
    pinMode(r,OUTPUT);
    pinMode(g,OUTPUT);
    pinMode(b,OUTPUT);    
}
void loop(){
    int x=0,y=0,z=0;
    while(x<255)
{    analogWrite(r, x);
    y=0;
    while(y<255)
{analogWrite(g, y);

z=0;
    while(z<255)
{analogWrite(b, z);
z++;Serial.print("G");Serial.println(z);delayMicroseconds(10);}
y++;Serial.print("B");Serial.println(y);delayMicroseconds(10);}
x++;Serial.print("R");Serial.println(z);delayMicroseconds(10);}

}