/*
---------------------------------------------------------------------------------
    Autores: Lucas Boeing & Samuel Henrique
    Atividade: Sequência de LEDs (Acionamento em Pares com Arduino)

    Descrição:
    Desenvolvimento de um sistema utilizando Arduino com 4 LEDs no total:

    - LEDVERDE    - Aciona o LED verde em conjunto com o LED branco.
    - LEDAMARELO  - Aciona o LED amarelo em conjunto com o LED vermelho.
    - LEDVERMELHO - Aciona o LED vermelho em conjunto com o LED amarelo.
    - LEDBRANCO   - Aciona o LED branco em conjunto com o LED verde.

    Funcionamento:
    O programa executa uma sequência de acionamento dos LEDs em pares.
    Inicialmente, os LEDs verde e branco são ligados simultaneamente por
    1 segundo e, em seguida, são desligados individualmente.

    Na próxima etapa, os LEDs amarelo e vermelho são ligados simultaneamente
    por 1 segundo e, em seguida, são desligados individualmente.

    Após completar as duas etapas, o ciclo é reiniciado automaticamente,
    utilizando a função delay() para controlar o tempo de cada etapa.

---------------------------------------------------------------------------------
*/
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
  digitalWrite (LEDBRANCO, HIGH);
  delay (1000);
 
  digitalWrite(LEDVERDE, LOW);
  delay(0001);
 
  digitalWrite (LEDBRANCO, LOW);
  delay (0001);
 
  digitalWrite (LEDAMARELO, HIGH);  
  digitalWrite (LEDVERMELHO, HIGH);
  delay (1000);

  digitalWrite(LEDAMARELO, LOW);
  delay (0001);
 
  digitalWrite (LEDVERMELHO, LOW);
  delay (0001);
 
}