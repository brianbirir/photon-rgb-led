/*
 * Project photon-rgb-led
 * Description: Light up RGB LED using the Photon
 * Author: Brian Birir
 * Date: April 25, 2020
 */

 #include "rgb-controls.h"
 using namespace RGBControls;


 int redPin = D2;
 int greenPin = D3;
 int bluePin = D4;

 Led led(D0, D1, D2);
 Color red(255, 0, 0);
 Color blue(0, 0, 255);

 void setup(){ }

 void loop()
 {
   // Fade the led light between red and blue every 5 seconds
   led.fade(red, blue, 5000);
 }
