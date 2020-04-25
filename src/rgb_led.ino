#include "lib/rgb-controls/rgb-controls.h"
using namespace RGBControls;


int redPin = D2;
int greenPin = D3;
int bluePin = D4;

Led led(redPin, greenPin, bluePin);

Color red(255, 0, 0);
Color blue(0, 0, 255);

void setup(){}

void loop()
{
  // Fade the led light between red and blue every 5 seconds
  led.fade(red, blue, 5000);
}
