/*
---------------------------------------------------------------------------------
    Autores: Samuel Henrique
    Atividade: Controle de LED com Botão utilizando Arduino

    Descrição:
    Desenvolvimento de um sistema utilizando Arduino com um LED
    e um botão para controlar seu acionamento.

    Funcionamento:
    O botão utiliza a configuração INPUT_PULLUP, que permite
    utilizar o resistor interno do Arduino.

    Quando o botão é pressionado, o LED acende.
    Quando o botão é solto, o LED apaga.

    O programa verifica continuamente o estado do botão
    por meio da função digitalRead().

---------------------------------------------------------------------------------
*/
#define LED 3
#define BTN 2
void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(BTN, INPUT_PULLUP);
}

void loop()
{
	int estado_btn = digitalRead(BTN);
  
  if (estado_btn == 0){
    digitalWrite(LED, 1);
  }
  else{
  	digitalWrite(LED, 0);
  }
}