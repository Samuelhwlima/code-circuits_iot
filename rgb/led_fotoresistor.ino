/**
 *---------------------------------------------------------------
- @file    main.cpp (nome_projeto.ino)
- @brief   Controle de LED com base na luminosidade usando sensor LDR
- @author  Samuel Henrique
- @date    30/10/2026
- @version 1.0.0
 *---------------------------------------------------------------
- @section HARDWARE - (Informar os componentes utilizados)
- - Microcontrolador: Arduino Uno
- - Entradas:
-     Sensor LDR - pino analógico A1 (Leitura de luminosidade)
- - Saídas:
-     LED Vermelho - pino 8 (Ativo em Nível Lógico Alto)
 *---------------------------------------------------------------
- @section DESCRIPTION
- 1. Define o pino do LED Vermelho como saída e inicializa a Serial (setup)
- 2. Lê continuamente o valor analógico do sensor LDR (loop)
- 3. Exibe o valor da leitura do LDR no Monitor Serial
- 4. Se a luminosidade for baixa (valor menor que 400), acende o LED vermelho
- 5. Caso contrário, mantém o LED vermelho apagado
- Mapeamento Lógico:
- - Luminosidade Baixa (< 400) -> LED LIGADO (HIGH)
- - Luminosidade Alta (>= 400) -> LED DESLIGADO (LOW)
 *---------------------------------------------------------------
 */
#define pinoLDR A1
#define ledVermelho 8

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  Serial.begin (9600);
}

void loop()
{   
 int valorLDR = analogRead(pinoLDR);
 Serial.println(valorLDR);
  
  if (valorLDR < 400){
  	digitalWrite (ledVermelho, HIGH);
  }
  else{
    digitalWrite(ledVermelho, LOW);
  }
}