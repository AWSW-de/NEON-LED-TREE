// ###########################################################################################################################################
// #
// # Code for the printables "XMAS neon LED tree" project:
// # https://www.printables.com/de/model/684686-xmas-neon-led-tree
// #
// # Code by https://github.com/AWSW-de
// #
// # Released under license: GNU General Public License v3.0: https://github.com/AWSW-de/NEON-LED-TREE/blob/main/LICENSE
// #
// ###########################################################################################################################################


// ###########################################################################################################################################
// # Code version:
// ###########################################################################################################################################
String Code_Version = "V1.0.0";


// ###########################################################################################################################################
// # Includes:
// #
// # FastLED                // by Daniel Garcia               // https://github.com/FastLED/FastLED
// #
// ###########################################################################################################################################
#include "FastLED.h"


// ###########################################################################################################################################
// # Hardware settings:
// ###########################################################################################################################################
// How many LEDs are in your neon LED strip?:
#define NUM_LEDS 34
// Data pin - here D5 with GPIO 14 on the Wemos D1 mini ESP8266:
#define DATA_PIN 14


// ###########################################################################################################################################
// # Definitions:
// ###########################################################################################################################################
// Define the array of leds:
CRGB leds[NUM_LEDS];


// ###########################################################################################################################################
// # Startup function:
// ###########################################################################################################################################
void setup() {
  // Initialize the LED strip:
  FastLED.addLeds<WS2811, DATA_PIN, BRG>(leds, NUM_LEDS);

  // Switch all LEDs off first:
  LEDS.showColor(CRGB(0, 0, 0));

  // Set LED brightness (0-255);
  LEDS.setBrightness(255);

  // Some animation and LED color output testing first:

  // Set all LEDs to red:
  for (int i = 0; i < NUM_LEDS - 1; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(25);
  }
  delay(1000);

  // Set all LEDs to green:
  for (int i = 0; i < NUM_LEDS - 1; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(25);
  }
  delay(1000);

  // Set all LEDs to blue:
  for (int i = 0; i < NUM_LEDS - 1; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(25);
  }
  delay(1000);

  // Switch all LEDs off again:
  LEDS.showColor(CRGB(0, 0, 0));
  delay(1000);

  // Set all LEDs to green:
  for (int i = 0; i < NUM_LEDS - 1; i++) {
    leds[i] = CRGB::Green;
  }

  // Set colors for the ornamets and the tree trunk:
  leds[0] = CRGB::Orange;
  delay(250);
  FastLED.show();
  leds[33] = CRGB::Orange;
  delay(250);
  FastLED.show();
  leds[6] = CRGB::Red;
  delay(250);
  FastLED.show();
  leds[29] = CRGB::White;
  delay(250);
  FastLED.show();
  leds[8] = CRGB::White;
  delay(250);
  FastLED.show();
  leds[12] = CRGB::Red;
  delay(250);
  FastLED.show();
  leds[14] = CRGB::White;
  delay(250);
  FastLED.show();
  leds[16] = CRGB::White;
  delay(250);
  FastLED.show();
  leds[27] = CRGB::Red;
  delay(250);
  FastLED.show();
  leds[20] = CRGB::Red;
  delay(250);
  FastLED.show();
  leds[25] = CRGB::White;
  delay(250);
  FastLED.show();
}


// ###########################################################################################################################################
// # Runtime function:
// ###########################################################################################################################################
void loop() {
  // noting to do at runtime, xmas is chilling time... :)
}