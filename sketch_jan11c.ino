  // put your setup code here, to run once:
#include <Adafruit_NeoPixel.h>
#ifdef _AVR_
#include <avr/power.h>
#endif

int const NUM_PIXELS = 12;
int8_t const PIN = 13;
Adafruit_NeoPixel strip;

enum State { RedMovingDown, RedMovingUp, BlueMovingDown, BlueMovingUp };

State currentState = RedMovingDown;
int redValue = 0;
int blueValue = 0;
void setup() {
  // put your setup code here, to run once:
strip = Adafruit_NeoPixel (NUM_PIXELS, PIN, NEO_GRB+NEO_KHZ800);
  strip.begin();
  strip.setBrightness(25);
  strip.show();
}

void loop() {
  int i = 0;
  // put your main code here, to run repeatedly:
  strip.setPixelColor((0+i)%12, 0xFF0000);
  strip.setPixelColor((1+i)%12, 0xFF8000);
  strip.setPixelColor((2+i)%12, 0xFFFF00);
  strip.setPixelColor((3+i)%12, 0x80FF00);
  strip.setPixelColor((4+i)%12, 0x00FF00);
  strip.setPixelColor((5+i)%12, 0x00FF80);
  strip.setPixelColor((6+i)%12, 0x00FFFF);
  strip.setPixelColor((7+i)%12, 0x0080FF);
  strip.setPixelColor((8+i)%12, 0x0000FF);
  strip.setPixelColor((9+i)%12, 0x8000FF);
  strip.setPixelColor((10+i)%12,0xFF00FF);
  strip.setPixelColor((11+i)%12,0xFF0080);
  i++;
}
  // put your main code here, to run repeatedly:
  if (currentState == RedMovingDown) {
    if (redValue <= 0) {
      currentState = BlueMovingDown;
    }
  }
  else if (currentState == RedMovingUp) {
    if (redValue >= 255) {
      currentState = BlueMovingUp;
    }
  }
  else if (currentState == BlueMovingDown) {
    if (blueValue <= 0) {
      currentState = RedMovingUp;
    }
  }
  else if (currentState == BlueMovingUp) {
    if (blueValue >= 255) {
      currentState = RedMovingDown;
    }
  }

  //Handle actions based on current state
  if (currentState == RedMovingDown) {
    redValue--;
  }
  else if (currentState == RedMovingUp) {
    redValue++;
  }
  else if (currentState == BlueMovingDown) {
    blueValue--;
  }
  else if (currentState == BlueMovingUp) {
    blueValue++;
  }

  //Update LEDs with new values
  const int redLEDPin = 3;
  const int blueLEDPin = 5;
  analogWrite(redLEDPin, redValue);
  analogWrite(blueLEDPin, blueValue);
  delay(50);
}
