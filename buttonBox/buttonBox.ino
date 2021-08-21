#include <stdlib.h>

const int buttonPin = D8;
const int ledPin =  LED_BUILTIN;

int buttonState1 = 0;
int buttonState1Previous = 0;
boolean button1Pressed = false;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  delay(150);
  buttonState1 = digitalRead(buttonPin);
  if (buttonState1 != buttonState1Previous) {
    button1Pressed=true;
  }

  if (button1Pressed) {
    Serial.println("pressA");
    buttonState1Previous = buttonState1;
    button1Pressed = false;
  }
}


