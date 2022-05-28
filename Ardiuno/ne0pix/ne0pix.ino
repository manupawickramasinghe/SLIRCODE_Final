#include<Adafruit_NeoPixel.h>

Adafruit_NeoPixel pixels(8,6, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
  pixels.clear();

}

void loop() {
  int i = 0;
  while(i<=8){
  pixels.setPixelColor(i,pixels.Color(0,255,0));
  pixels.show();
  
  delay(50);
  pixels.setPixelColor(i,pixels.Color(0,0,0));

  i = i + 1;
  }
  while(i>=0){
  pixels.setPixelColor(i,pixels.Color(0,0,0));
  pixels.show();
  
  delay(50);
  pixels.setPixelColor(i,pixels.Color(255,0,0));

  i = i - 1;
  }

}
