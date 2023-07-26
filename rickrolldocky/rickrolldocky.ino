/*
RickrollDocky
Juan Delgado Aka. ByteSling3r
*/
#include "DigiKeyboard.h"

void setup() {
//nothings
}

void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  //WIN + R
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd"); //typing cmd
  DigiKeyboard.delay(200); 
  DigiKeyboard.println("start brave"); //start brave navegator
  DigiKeyboard.delay(2000);
  //https://n9.cl/lxgn --> url shortened
  DigiKeyboard.print("n9.cl");
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT); // this line is /
  DigiKeyboard.print("lxgn");
  DigiKeyboard.sendKeyPress(KEY_ENTER); //enter
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit"); //close keyboard
  //led indicatorr
  while(true) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    delay(300);
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    delay(300);
  }
}

