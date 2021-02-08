#ifndef _SEVEN_SEGMENTS_DRIVER_H
#define _SEVEN_SEGMENTS_DRIVER_H

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

class SevenSegments {
    private :
      unsigned int u8NumberOfLedPerSegment;
      unsigned int PIN;
      
      Adafruit_NeoPixel pixels;
      
    public:
    
      SevenSegments(int nbSegment);
      SevenSegments(int nbLedPerSegment, int pin);
      unsigned int getNumber();
      void              begin(void);
      void              clear(void);
      // void              setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
      void              setPixelColor(uint16_t n,  uint8_t r, uint8_t g, uint8_t b);
};

#endif /*_SEVEN_SEGMENTS_DRIVER_H*/