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
#define NUM_LEDS 40
#define DATA_PIN 13

CRGB leds[NUM_LEDS];

void setup() { 
       FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);      
   }

void loop(){ 
  int i;
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Green;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Red;
  FastLED.show();
  delay(1000);  
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Blue;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Yellow;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::SkyBlue;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Magenta;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Orange;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::Pink;
  FastLED.show();
  delay(1000);
  for(i=0;i<NUM_LEDS;i++) leds[i] = CRGB::White;
  FastLED.show();
  delay(1000);
}
 
