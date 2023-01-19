#include <Arduino.h>
// #define led LED_BUILTIN
#define amarillo D8
#define azul D5

void turnOnLed(){
  pinMode(amarillo, OUTPUT);
  pinMode(azul, OUTPUT);

  digitalWrite(amarillo, LOW);
  delay(500); 
  digitalWrite(amarillo, HIGH); 
  delay(500); 
  digitalWrite(azul, LOW);
  delay(500); 
  digitalWrite(azul, HIGH); 
  delay(500); 
}