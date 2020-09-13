#include <Keyboard.h>
 
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(1000);
 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(10);
  Keyboard.releaseAll();
  delay(200);
 
  Keyboard.print("chrome https://www.youtube.com/watch?v=4FqGpT3yhUI");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.end();
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
 
}
