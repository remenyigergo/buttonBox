#include <stdlib.h>

const int buttonPin = D8;
const int ledPin =  LED_BUILTIN;

int buttonState1 = 0;
int buttonState1Previous = 0;
boolean button1Pressed = false;



bool currState_1 = HIGH;
bool prevState_1 = HIGH; 

unsigned long prevTime_1 = 0;
unsigned long waitTime_1 = 50;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  delay(200);
}

void loop() {
  checkButton();  
  
}

void checkButton() {
  bool currRead_button1 = digitalRead(buttonPin);

  if (currRead_button1 != prevState_1) {
    prevTime_1 = millis();
  }

  if ((millis() - prevTime_1) > waitTime_1) {
    if (currRead_button1 != currState_1) {
      currState_1 = currRead_button1;
      
      if (currState_1 == 1) {
        Serial.println("ON");
      } else {
        Serial.println("OFF");
      }
    }
  }

  prevState_1 = currRead_button1;
}


