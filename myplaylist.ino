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
 
  Keyboard.print("chrome https://soundcloud.com/user-972220735/sets/emo");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.end();
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
 
}
