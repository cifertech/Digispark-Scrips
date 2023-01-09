#include "DigiKeyboard.h"

void setup() {
  }
  
void loop() {
  DigiKeyboard.delay(2000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  
  DigiKeyboard.print("https://fakeupdate.net/win10ue/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  
  for(;;){ /*empty*/ }
}
