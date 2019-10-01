/*
  Pisca o led utilizando comandos do teclado
    - Se receber 5 liga o led     (ativa com 5v)
    - Se receber d desliga o led  (desativa com 0v)
    - Se receber h finaliza o programa
*/

#include "wiringPi.h"
#include "iostream"
using namespace std;

#define led 7       //Pino 7 é o led (GPIO7)

int main (void)
{
    //Como se fosse o void setup()
    wiringPiSetup();          //Seta a wiringPi.h
    pinMode(led, OUTPUT);     //seta led como saída
    digitalWrite(led, LOW);   //inicia o led como desligado

    //Como se fosse o void loop()
    while(1){
      char comando = 0;   //inicia o comando como 0, ou seja, não entra em nenhum if
      cin >> comando;     //recebe o comando pelo teclado no terminal
      if(comando == '5')
        digitalWrite(led, HIGH);  //se recebeu 5, liga o led
      else if(comando == 'd')
        digitalWrite(led, LOW);   //se recebeu d, desliga o led
      else if(comando == 'h')
        break;                    //se recebeu h, sai do loop
    }
    digitalWrite(led, LOW);       //antes de finalizar, desliga o led
    return (0);
}
