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
void setup() { 
       FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);      
   }

void loop(){ 
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::White;
  leds[4] = CRGB::Red;
  leds[5] = CRGB::Green;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::White;
  FastLED.show();
  delay(1000);
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Black;
  FastLED.show();
  delay(1000);
}
