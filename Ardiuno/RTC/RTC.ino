#include<Wire.h>
byte sec = 0x00;
byte Min = 0x50;
byte hour = 0x13;
byte Day = 0x06;
byte date = 0x19;
byte month = 0x03;
byte year = 0x22;
void setup(){
  Serial.begin(9600);
  Wire.begin();
  Wire.beginTransmission(0x68);
  Wire.write(0);
  Wire.write(sec);
  Wire.write(Min);
  Wire.write(hour);
  Wire.write(Day);
  Wire.write(date);
  Wire.write(month);
  Wire.write(year);
  Wire.endTransission();
}

void loop() {
  Wire.beginTransmission(0x68);
  Wire.write(0);
  Wire.endTransission();
  Wire.requestFrom(0x68,7);
  sec = bcdToDec(Wire.read())
  Min = bcdToDec(Wire.read())
}
{
  byte bcdToDec(byte val){
    return (val/16*10)+(val%16)
  }
}
