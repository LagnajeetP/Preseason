#include <Adafruit_NeoPixel.h>
#ifdef _AVR_
#include <avr/power.h>
#endif

int const NUM_PIXELS = 12;
int8_t const PIN = 13;
Adafruit_NeoPixel strip;
enum State {
  RedMovingDown,
  RedMovingUp,
  BlueMovingDown,
  BlueMovingUp
};
State myState = RedMovingDown;
int red = 255;
int blue = 0;



void setup() {
  // put your setup code here, to run once:
  strip = Adafruit_NeoPixel (NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);
  strip.begin();
  strip.setBrightness(25);
  strip.show();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (myState == RedMovingDown) {
    red--;
    if (red == 0) {
      myState = BlueMovingUp;
    }
  }
  else if (myState == BlueMovingUp) {
    blue++;
    if (blue == 255) {
      myState = BlueMovingDown;
    }
  }
  else if (myState == BlueMovingDown) {
    blue--;
    if (blue == 0) {
      myState = RedMovingUp;
    }
  }
  else if (myState == RedMovingUp) {
    red++;
    if (red == 255) {
      myState = RedMovingDown;
    }
  }

  delay(10);

  strip.setPixelColor(1, red, 0, blue);
  strip.setPixelColor(2, red, 0, blue);
  strip.setPixelColor(3, red, 0, blue);
  strip.setPixelColor(4, red, 0, blue);
  strip.setPixelColor(5, red, 0, blue);
  strip.setPixelColor(6, red, 0, blue);
  strip.setPixelColor(7, red, 0, blue);
  strip.setPixelColor(8, red, 0, blue);
  strip.setPixelColor(9, red, 0, blue);
  strip.setPixelColor(10, red, 0, blue);
  strip.setPixelColor(11, red, 0, blue);
  strip.show();

}
