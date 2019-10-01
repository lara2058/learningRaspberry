/*
  Teste PWM via software
    - Usa a biblioteca softPWM.h para simular um sinal pwm nas portas do raspberry
*/

#include "wiringPi.h"
#include "softPWM.h"

//Definição de pinos como no arduino:
#define led 29

int main (void)
{
  //Setup das bibliotecas (equivalente ao void setup())
  wiringPiSetup();  //Setup da wiringPi.h
  softPwmBegin();   //Setup da SoftPWM
  pinMode(led, OUTPUT);
  //Cria as entradas PWM setadas nos pinos escolhidos com valores possíveis de 0 a 100
  softPwmCreate(led, 0, 100);

  //============================================================================
  //void loop()
  while(1){
    for(int i=0; i<=100; i++){  //fade in (0 a 100) em 5000ms
      softPwmWrite(led, i);     //seta o valor do led como i
      delay(50);                //delay de 50ms
    }
    for(int i=100; i>=0; i--){  //fade out (0 a 100) em 5000ms
      softPwmWrite(led, i);     //seta o valor do led como i
      delay(10);                //delay de 50ms
    }
  }

  return (0);
}
