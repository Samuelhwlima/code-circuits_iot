/**
 *---------------------------------------------------------------
 * @file    main.cpp (nome_projeto.ino)
 * @brief   Controle de dois LEDs (verde e amarelo) por meio de dois botões
 * @author  Samuel Henrique
 * @date    30/10/2026
 * @version 1.0.0
 *---------------------------------------------------------------
 * @section HARDWARE - (Informar os componentes utilizados)
 * - Microcontrolador: Arduino Uno
 * - Entradas:
 *     Botão Push-Button 1 - pino 2 (Ativo em Nível Lógico Baixo / Pull-Up Interno)
 *     Botão Push-Button 2 - pino 3 (Ativo em Nível Lógico Baixo / Pull-Up Interno)
 * - Saídas:
 *     LED Verde - pino 4 (Ativo em Nível Lógico Alto)
 *     LED Amarelo - pino 5 (Ativo em Nível Lógico Alto)
 *---------------------------------------------------------------
 * @section DESCRIPTION
 * 1. Define os pinos dos botões como entrada com pull-up interno
 *    e os pinos dos LEDs como saída (setup)
 * 2. Lê continuamente o estado dos dois botões (loop)
 * 3. Botão 1 pressionado: acende o LED verde por 1 segundo e apaga
 * 4. Botão 2 pressionado: acende o LED amarelo por 1 segundo
 * 5. Botões 1 e 2 pressionados juntos: os dois LEDs piscam
 *    5 vezes, alternando 500 ms ligados e 500 ms desligados
 * Mapeamento Lógico:
 * - Botão Pressionado (GND) -> Entrada LOW -> LED LIGADO (HIGH)
 * - Botão Solto (Aberto) -> Entrada HIGH -> LED DESLIGADO (LOW)
 *---------------------------------------------------------------
 */
//Definição das constantes
#define BTN1 2
#define BTN2 3
#define LEDVERDE 4
#define LEDAMARELO 5

void setup()
{
  //Definição se será output ou input
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode (LEDVERDE, OUTPUT);
  pinMode (LEDAMARELO, OUTPUT);
}

void loop()
{
  //Criação de duas variaveis que recebe
  //O valor eletrico dos botões
  int estado_btn1 = digitalRead(BTN1);
  int estado_btn2 = digitalRead(BTN2);
  
  	//Estrutura de decisão que liga o led verde,
  	//caso o botão 1 esteja sendo pressionado
  	if (estado_btn1 == 0){
      
    digitalWrite (LEDVERDE, HIGH);
    delay (1000);
      
    digitalWrite(LEDVERDE, LOW);
    }
  
    //Estrutura de decisão que liga o led amarelo,
  	//caso o botão 2 esteja sendo pressionado
   	if (estado_btn2 == 0){
		digitalWrite (LEDAMARELO, HIGH);
      	delay (1000);
      }
  
  	//Função que faz os dois leds piscar caso os botões estejam apertados
  	if (estado_btn1 == 0 && estado_btn2 == 0){
      for (int i = 1; i < 6; i++){
      		digitalWrite (LEDVERDE, HIGH);
            digitalWrite (LEDAMARELO, HIGH);
            delay (500);
        	digitalWrite (LEDVERDE, LOW);
            digitalWrite (LEDAMARELO, LOW);
        	delay (500);
      	}
      }
}