/*
  Lê o estado do botão e se o botão estiver pressionado liga o led por 1000ms
*/

#include "wiringPi.h" //para usar as portas como as do arduino

#define led 29      //define o led no pino 29 (GPIO29)
#define butt 28     //define o botão no pino 28 (GPIO28)

int main (void)
{
  //como se fosse o void setup()
  wiringPiSetup();  //seta a biblioteca wiringPi.h

  int buttON = 0;           //inicia o estado do botão como 0
  pinMode(butt, INPUT);     //seta o botão como entrada
  pinMode(led, OUTPUT);     //seta o led como saída
  digitalWrite(led, LOW);   //inicia o led como desligado

  //como se fosse void loop()
  while(1){
    buttON = digitalRead(butt);     //lê o estado do botao
    if(buttON == 1){              //se o botão está pressionado
      digitalWrite(led, HIGH);    //liga o led
      delay(1000);                //aguarda 1000ms
      digitalWrite(led, LOW);     //desliga o led
    }
  }

  return (0);
}
