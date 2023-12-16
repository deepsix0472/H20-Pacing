//================================
#include <FastLED.h>    // Led Librabray for WS28xx 
CRGB led[200];      //Number of LEDS per strip 


//==========================================
void setup()

{

  FastLED.addLeds<WS2812B, 2, GRB>(led, 50);
  FastLED.addLeds<WS2812B, 3, GRB>(led, 50);
  FastLED.addLeds<WS2812B, 4, GRB>(led, 50);
  FastLED.addLeds<WS2812B, 5, GRB>(led, 50);
  FastLED.addLeds<WS2812B, 6, GRB>(led, 50);
  FastLED.setBrightness(100);

}

void loop()


{
  uint8_t sine1 = beatsin8(60, 0, 49, 0, 0);
  uint8_t sine2 = beatsin8(40, 0, 49, 0, 50);
  uint8_t sine3 = beatsin8(30, 0, 49, 0, 100);
  uint8_t sine4 = beatsin8(20, 0, 49, 0, 150);
  uint8_t sine5 = beatsin8(10, 0, 49, 0, 200);

  
  led[sine1] = CHSV(0, 255, 255);
  led[sine2] = CHSV(45, 255, 255);
  led[sine3] = CHSV(95, 255, 255);
  led[sine4] = CHSV(160, 255, 255);
  led[sine5] = CHSV(210, 255, 255);
  blur1d(led, 10, 50);
  fadeToBlackBy(led, 10, 5);
  FastLED.show();
}
