#include "MyButton.h"

#define PIN_BTN_A 15

MyButton btnA(PIN_BTN_A);

void setup() {
  Serial.begin(115200);

  btnA.init();
  Serial.println("BTN A INICIALIZADO");
}

void loop() {
  if (btnA.isPressed())
    Serial.println("BTN A PRESIONADO");
  
  delay(500);
}
