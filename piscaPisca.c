/*
  Pisca-Pisca
    - Alterna o led entre ligado e desligado a cada 1000ms
*/

#include "wiringPi.h"

#define led 7     //led no pino 7 (GPIO7)

int main (void)
{
  //como se fosse o void setup()
  wiringPiSetup();      //seta a wiringPi.h
  pinMode(led, OUTPUT); //seta o led como saída

  //como se fosse o void loop()
  while(1){
    digitalWrite(led, HIGH);  //liga o led
    delay(1000);              //aguarda 1000ms
    digitalWrite(led, LOW);   //desliga o led
    delay(1000);              //aguarda 1000ms
  }


  return (0);
}
