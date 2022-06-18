# code_Project_81
Chapter 4 code_Project_81 The second part 2 of "The Arduino World Book" code_Project_81
-code_experience_81_1
-code_experience_81_2
-code_experience_81_3

-  By:Farkad Adnan فرقد عدنان - 
 -E-mail: farkad.hpfa95@gmail.com 
-inst : farkadadnan 
- #farkadadnan , #farkad_adnan , فرقد عدنان# 
- FaceBook: كتاب عالم الاردوينو 
- inst : arduinobook
1. #كتاب_عالم_الاردوينو
2. #كتاب_عالم_الآردوينو

-https://www.facebook.com/profile.php?id=100002145048612
-https://www.instagram.com/farkadadnan/
-https://www.linkedin.com/in/farkad-adnan-499972121/

 <p>
 <a href='https://mobile.twitter.com/farkadadnan'>
        <img alt="Twitter Follow" src="https://img.shields.io/twitter/follow/farkadadnan?label=%40farkadadnan&style=social" alt='Twitter' align="center"/>
    </a>
</p>

# General structure

![1](https://user-images.githubusercontent.com/35774039/162108193-b7171464-f575-4143-a6e0-6bd2d410337e.JPG)

#  Description
- FastLED is a fast, efficient, easy-to-use Arduino library for programming addressable LED strips and pixels such as WS2810, WS2811, LPD8806, Neopixel and more. FastLED is used by thousands of developers, in countless art and hobby projects, and in numerous commercial products.
- FastLED هي مكتبة Arduino سريعة وفعالة وسهلة الاستخدام لبرمجة شرائط LED ووحدات البكسل مثل WS2810 و WS2811 و LPD8806 و Neopixel والمزيد. يتم استخدام FastLED بواسطة آلاف المطورين ، في عدد لا يحصى من المشاريع الفنية والهوايات ، وفي العديد من المنتجات التجارية.
![cd799611043c19a9fc034c74512cf4f8ca314cbe_1024_1024](https://user-images.githubusercontent.com/35774039/162107534-c979bb22-a8bd-4b16-a953-28039ebcbcfd.jpeg)
![Capture](https://user-images.githubusercontent.com/35774039/162107543-030e84ef-b26a-48c7-a1d2-3ec03aa86e3f.JPG)

# Basic usage
This documentation will walk your through the setup of a FastLED program, as well as provide some information on basic usage of the library, and also provides some basic information on writing code in general. The documentation here assumes a simple setup of a single strand of leds. For more involved uses with multiple strands of leds, or mixing up the types of leds, see the advanced documentation.

# Setting up the leds
When writing programs for leds, and when writing code in general, I find it quite helpful to use named constants rather than bare numbers for things. What is easier to read and understand what's going on - FastLED.addLeds<4,6>(leds,60); or FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);? There's a couple of reasons for doing this. One is, as just shown, it makes code a little bit easier to read. The other is that it means you only have to make changes in one place if you, say, change how many leds you're working with.

- So, with that said, let's throw in the beginning lines of our .ino file:

# library 

```
    #include <FastLED.h>
    #define NUM_LEDS 60
    #define DATA_PIN 6
```
# sources 
- FastLED Animation Library [fastled](https://fastled.io/).
-  Library [The FastLED library](https://github.com/FastLED/FastLED).
-  arduino reference FastLED [ Library Manager](https://www.arduino.cc/reference/en/libraries/fastled/).

# Code Arduino

```
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
 
```

