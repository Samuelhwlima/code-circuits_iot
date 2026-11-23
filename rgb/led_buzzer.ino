/**
 *---------------------------------------------------------------
- @file    led_buzzer
- @brief   Controle de LED e Buzzer com base na luminosidade usando sensor LDR
- @author  Samuel Henrique
- @date    23/11/2026
- @version 1.0.0
 *---------------------------------------------------------------
- @section HARDWARE - (Informar os componentes utilizados)
- - Microcontrolador: Arduino Uno
- - Entradas:
-     Sensor LDR - pino analógico A1 (Leitura de luminosidade)
- - Saídas:
-     LED Vermelho - pino 8 (Ativo em Nível Lógico Alto)
-     Buzzer - pino 9 (Emissão de som / PWM)
 *---------------------------------------------------------------
- @section DESCRIPTION
- 1. Define os pinos do LED e do Buzzer como saída e inicializa a Serial (setup)
- 2. Lê continuamente o valor analógico do sensor LDR (loop)
- 3. Exibe o valor da leitura do LDR no Monitor Serial
- 4. Se a luminosidade for baixa (valor menor que 400), acende o LED vermelho e emite som no buzzer por 500 ms
- 5. Caso contrário, mantém o LED vermelho apagado
- Mapeamento Lógico:
- - Luminosidade Baixa (< 400) -> LED LIGADO (HIGH) e Buzzer Ativo
- - Luminosidade Alta (>= 400) -> LED DESLIGADO (LOW)
 *---------------------------------------------------------------
 */
#define pinoLDR A1
#define ledVermelho 8
#define buzzer 9

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin (9600);
}

void loop()
{   
 int valorLDR = analogRead(pinoLDR);
 Serial.println(valorLDR);
  
  if (valorLDR < 400){
  	digitalWrite (ledVermelho, HIGH);
    tone (buzzer, 1500, 500);
    delay (1000);
  }
  else{
    digitalWrite(ledVermelho, LOW);
  }
}