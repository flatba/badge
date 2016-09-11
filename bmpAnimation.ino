/*  Instructables Logo TFT

    Displays Instructables logo onto the Arduino TFT LCD screen.
    
    Make sure that you load the bitmap file onto the microSD Card before you
    run the sketch!  Open the Serial Monitor to begin.
  
    modified 14 July 13 by Quin (Qtechknow)
    created 19 April 2013 by Enrico Gueli
 */
 
// include the necessary libraries
#include <SPI.h>
#include <SD.h>
#include <TFT.h>  // Arduino LCD library

// pin definitions
#define sd_cs  4
#define lcd_cs 10
#define dc     9
#define rst    8  

TFT TFTscreen = TFT(lcd_cs, dc, rst);

// this variable represents the image to be drawn on screen
PImage logo;
PImage logo1;
PImage logo2;
PImage logo3;
PImage logo4;
PImage logo5;
PImage logo6;
PImage logo7;
PImage logo8;
PImage logo9;
PImage logo10;

void setup() {
  
  // initialize the GLCD and show a message
  // asking the user to open the serial line
  
  TFTscreen.begin();
  TFTscreen.background(255, 255, 255);

  TFTscreen.stroke(0, 0, 255);
  TFTscreen.println();
  TFTscreen.println("Arduino TFT Bitmap Example");
  TFTscreen.stroke(0, 0, 0);
  TFTscreen.println("Open serial monitor");
  TFTscreen.println("to run the sketch");
  delay(2000);

  // initialize the serial port: it will be used to 
  // print some diagnostic info  
  Serial.begin(9600);
  while (!Serial) {
    // wait for serial line to be ready
  }

  // clear the GLCD screen before starting
  TFTscreen.background(255, 255, 255);
  
  // try to access the SD card. If that fails (e.g.
  // no card present), the setup process will stop.
  Serial.print("Initializing SD card...");
  if (!SD.begin(sd_cs)) {
    Serial.println("failed!");
    return;
  }
  Serial.println("OK!");
  
  // initialize and clear the GLCD screen
  TFTscreen.begin();
  TFTscreen.background(255, 255, 255);

  // now that the SD card can be access, try to load the
  // image file.
//  logo = TFTscreen.loadImage("circle10.bmp");
//  logo1 = TFTscreen.loadImage("i.bmp");
  logo2 = TFTscreen.loadImage("circle2.bmp");
  logo3 = TFTscreen.loadImage("circle3.bmp");
  logo4 = TFTscreen.loadImage("circle4.bmp");
  logo5 = TFTscreen.loadImage("circle5.bmp");
  logo6 = TFTscreen.loadImage("circle6.bmp");
//  logo7 = TFTscreen.loadImage("circle7.bmp");
//  logo8 = TFTscreen.loadImage("circle8.bmp");
//  logo9 = TFTscreen.loadImage("circle9.bmp");
//  logo10 = TFTscreen.loadImage("parrot.bmp");

//  if (!logo.isValid()) {
//    Serial.println("error while loading bmp image");
//  }
//  if (logo.isValid() == false) {
//    return;
//  }
  if (!logo1.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo1.isValid() == false) {
    return;
  }
  
    if (!logo2.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo2.isValid() == false) {
    return;
  }
  
    if (!logo3.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo3.isValid() == false) {
    return;
  }
  
    if (!logo4.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo4.isValid() == false) {
    return;
  }
  
    if (!logo5.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo5.isValid() == false) {
    return;
  }
  
    if (!logo6.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo6.isValid() == false) {
    return;
  }
  
    if (!logo7.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo7.isValid() == false) {
    return;
  }
  
    if (!logo8.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo8.isValid() == false) {
    return;
  }
  
      if (!logo9.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo9.isValid() == false) {
    return;
  }
  
      if (!logo10.isValid()) {
    Serial.println("error while loading i.bmp");
  }
  if (logo10.isValid() == false) {
    return;
  }

  
  Serial.println("drawing image");

  // draw the image to the screen
//  TFTscreen.image(logo, 0, 0);
//  TFTscreen.image(logo1, 0, 0);
//  TFTscreen.image(logo2, 0, 0);
}

void loop() {
  // we don't need anything here
//  TFTscreen.image(logo1, 0, 0);
//  delay(1);
  TFTscreen.image(logo2, 0, 0);
    delay(1);
  TFTscreen.image(logo3, 0, 0);
    delay(1);
  TFTscreen.image(logo4, 0, 0);
    delay(1);
  TFTscreen.image(logo5, 0, 0);
    delay(1);
  TFTscreen.image(logo6, 0, 0);
    delay(1);
//  TFTscreen.image(logo7, 0, 0);
//    delay(1);
//  TFTscreen.image(logo8, 0, 0);
//    delay(1);
//  TFTscreen.image(logo9, 0, 0);
//    delay(1);
//  TFTscreen.image(logo10, 0, 0);
//    delay(1);
}
