/* 200118
 * Md. Nazimuddin Sheikh
 * RGBLED 
 * Green 0...<100% - 0..<255 
 * Red   0...<100% - 0..<255
 * Blue  0...<100% - 0..<255
 * <  since we use a char 8 Bit
 */
#include <Adafruit_NeoPixel.h>        

#define PIN       4   // DIN Data in of RGBLED
#define NUMPIXELS 1   // how many RGBLED are there


Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // initializes NeoPixel object
}

void loop() {
 for (int i=0; i<3; i++);
 pixels.setPixelColor(0, pixels.Color(0,0,0));
    pixels.show(); 
    delay(1000);
    pixels.setPixelColor(0, pixels.Color(255,0,0));
    pixels.show();
    delay(1000);
    {
for (int j=0; j<3; j++);
 pixels.setPixelColor(0, pixels.Color(0,0,0));
    pixels.show(); 
    delay(1000);
    pixels.setPixelColor(0, pixels.Color(0,255,0));
    pixels.show();
    delay(1000);
}
for (int k=0; k<3; k++);
 pixels.setPixelColor(0, pixels.Color(0,0,0));
    pixels.show(); 
    delay(1000);
    pixels.setPixelColor(0, pixels.Color(0,0,255));
    pixels.show();
    delay(1000);
}
