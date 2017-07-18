#include <Mouse.h>
void setup() { 
delay(5);
  Mouse.press(MOUSE_LEFT);
  delay(5);
   for (int i=0; i<65; i++) {
    Mouse.move(0, 5);
    delay(20);
  }

 for (int i=0; i<24; i++) {
    Mouse.move(2, 5);
    delay(25);
 }

  for (int i=0; i<15; i++) {
    Mouse.move(-10, 1);
    delay(30);
 }

 for (int i=0; i<11; i++) {
    Mouse.move(13, 1);
    delay(30);
 }
    for (int i=0; i<3; i++) {
    Mouse.move(0, 6);
    delay(30);
 }

 for (int i=0; i<11; i++) {
    Mouse.move(-14, -2);
    delay(30);
 }
 
  Mouse.release(MOUSE_LEFT);
  delay(5);
  
  } // no setup needed
void loop() {
  
 
  }

