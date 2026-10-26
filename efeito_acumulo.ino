/*
---------------------------------------------------------------------------------
    Autores: Lucas Boeing & Samuel Henrique
    Atividade: Sequência de LEDs (Controle com Arduino)

    Descrição:
    Desenvolvimento de um sistema utilizando Arduino com 4 LEDs no total:
    
    - LEDVERDE    - Indica o acionamento do LED verde.
    - LEDAMARELO  - Indica o acionamento do LED amarelo.
    - LEDVERMELHO - Indica o acionamento do LED vermelho.
    - LEDBRANCO   - Indica o acionamento do LED branco.

    Funcionamento:
    O programa executa uma sequência de acionamento individual dos LEDs
    controlando o tempo de cada etapa com a função delay().
    Após completar a sequência e o desligamento, o ciclo é reiniciado automaticamente.

---------------------------------------------------------------------------------
*/
//Declaração de constantes
#define LEDVERDE 13
#define LEDAMARELO 12
#define LEDVERMELHO 11
#define LEDBRANCO 10

void setup()
{
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDBRANCO, OUTPUT);
}

void loop()
{
   
  digitalWrite(LEDVERDE, HIGH);
  delay(1000);
 
  digitalWrite (LEDAMARELO, HIGH);
  delay (1000);
 
  digitalWrite (LEDVERMELHO, HIGH);
  delay (1000);
 
  digitalWrite (LEDBRANCO, HIGH);
  delay (1000);
   
  digitalWrite(LEDVERDE, LOW);
  delay(0001);
 
  digitalWrite(LEDAMARELO, LOW);
  delay (0001);
 
  digitalWrite (LEDVERMELHO, LOW);
  delay (0001);
 
  digitalWrite (LEDBRANCO, LOW);
  delay (0001);

}