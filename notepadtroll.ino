#include <Keyboard.h>

void setup() {
  // this is for prank notepad
  Keyboard.begin();
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(10);
  Keyboard.releaseAll();
  delay(10);

  Keyboard.print("notepad");
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.end();

  Keyboard.print("you have been hacked contact this number to get rid of being hacked!!!!!! OwO");
  delay(10);
  Keyboard.releaseAll();
  Keyboard.end();
  
}

void loop() {
  // put your main code here, to rin repeatedly
  
}
