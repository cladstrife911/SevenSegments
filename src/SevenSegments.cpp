

#include "SevenSegments.h"
#include <stdlib.h>

#define NUMBER_OF_SEGMENT 7

SevenSegments::SevenSegments(int nbLedPerSegment, int pin)
{
  u8NumberOfLedPerSegment = nbLedPerSegment;
  PIN = pin;
  pixels = Adafruit_NeoPixel(u8NumberOfLedPerSegment*NUMBER_OF_SEGMENT, PIN, NEO_GRB + NEO_KHZ800);
}

unsigned int SevenSegments::getNumber(){
  return u8NumberOfLedPerSegment;
}

void SevenSegments::begin(void)
{
  pixels.begin();
}

void SevenSegments::clear(void)
{
  pixels.clear();
}
void SevenSegments::setPixelColor(uint16_t n,  uint8_t r, uint8_t g, uint8_t b)
{
  for(int i=0; i< u8NumberOfLedPerSegment; i++) {
    pixels.setPixelColor(i, pixels.Color(r, g, b));
  }
  pixels.show();
}

