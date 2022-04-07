/*
 By:Farkad Adnan
 E-mail: farkad.hpfa95@gmail.com
 inst : farkadadnan
 #farkadadnan , #farkad_adnan , فرقد عدنان#
 FaceBook: كتاب عالم الاردوينو
 inst : arduinobook
 #كتاب_عالم_الاردوينو  #كتاب_عالم_الآردوينو 
 */
#include <FastLED.h>
#define NUM_LEDS 8 
#define DATA_PIN 13

CRGB leds[NUM_LEDS]; 
int i;
void setup() { 
       FastLED.addLeds<WS2811, DATA_PIN, BRG>(leds, NUM_LEDS);      
   }

void loop(){ 
  leds[0] = CRGB::Cyan;
  delay(100);
  FastLED.show();
  leds[1] = CRGB::Magenta;
  delay(100);
  FastLED.show();
  leds[2] = CRGB::Yellow;
  delay(100);
  FastLED.show();
  leds[3] = CRGB::Pink;
  delay(100);
  FastLED.show();
  leds[4] = CRGB::SeaGreen;
  delay(100);
  FastLED.show();
  leds[5] = CRGB::DarkGreen;
  delay(100);
  FastLED.show();
  leds[6] = CRGB::DarkBlue;
  delay(100);
  FastLED.show();
  leds[7] = CRGB::White;
  delay(100);
  FastLED.show();
  delay(1000);  
  for(i=0;i<8;i++) {
      leds[i] = CRGB::Black;
      FastLED.show();
      delay(100);
    }
}
