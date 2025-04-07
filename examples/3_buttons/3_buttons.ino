#include "MyButton.h"

#define PIN_BTN_A 13
#define PIN_BTN_B 14
#define PIN_BTN_RST 15

MyButton btnA(PIN_BTN_A);
MyButton btnB(PIN_BTN_B);
MyButton btnRst(PIN_BTN_RST);

void setup() {
  Serial.begin(115200);

  btnA.init();
  btnB.init();
  btnRst.init();
}

void loop() {
  if (btnA.isPressed())
    Serial.println("BTN A PRESSED");

  if (btnB.isPressed())
    Serial.println("BTN B PRESSED");

  if (btnRst.isPressed())
    Serial.println("BTN RST PRESSED");
  
  delay(500);
}
