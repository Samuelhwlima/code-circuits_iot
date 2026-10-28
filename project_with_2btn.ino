/*
---------------------------------------------------------------------------------
    Autor: Samuel Henrique
    Atividade: Controle de LEDs com Dois Botões utilizando Arduino

    Descrição:
    Desenvolvimento de um sistema utilizando Arduino com dois LEDs
    (verde e amarelo) e dois botões para controlar seus acionamentos.

    Funcionamento:
    O sistema utiliza a configuração INPUT_PULLUP nos dois botões,
    permitindo utilizar os resistores internos do Arduino.

    - BTN1: Quando pressionado, acende os LEDs verde e amarelo.
      Após 2 segundos, o LED verde apaga e o LED amarelo permanece
      aceso por mais 3 segundos.

    - BTN2: Quando pressionado, o LED verde pisca 8 vezes,
      permanecendo 1 segundo aceso e 1 segundo apagado
      a cada repetição.

    O programa verifica continuamente o estado dos botões
    por meio da função digitalRead() e controla os LEDs
    utilizando a função digitalWrite().

---------------------------------------------------------------------------------
*/
#define LEDVERDE 4
#define LEDAMARELO 3
#define BTN1 2
#define BTN2 5
void setup()
{
    pinMode(LEDVERDE, OUTPUT);
  	pinMode (LEDAMARELO, OUTPUT);
    pinMode(BTN1, INPUT_PULLUP);
  	pinMode(BTN2, INPUT_PULLUP);
}

void loop(){
	int estado_btn1 = digitalRead(BTN1);
  	int estado_btn2 = digitalRead(BTN2);
  
  	if (estado_btn1 == 0)
    {
      digitalWrite(LEDAMARELO, 1);
      digitalWrite (LEDVERDE, 1);
      delay(2000);
      digitalWrite(LEDVERDE, 0);
      delay(3000);
      
  	}

    else
    {
  		digitalWrite(LEDVERDE, 0);
      	digitalWrite(LEDAMARELO, 0);
    }
  
    if (estado_btn2 == 0)
    {
      for (int i = 0; i <= 8; i++)
      {
      	digitalWrite(LEDVERDE, 1);
        delay(1000);
        digitalWrite(LEDVERDE, 0);
        delay (1000);
      }
      
  	}
    else
    {
  		digitalWrite(LEDVERDE, 0);
      	digitalWrite(LEDAMARELO, 0);
    }
}