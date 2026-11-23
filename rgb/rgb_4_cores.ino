/**
 *---------------------------------------------------------------
- @file    rgb_4_cores
- @brief   Controle de um LED RGB com rotação de cores básicas
- @author  Samuel Henrique
- @date    23/11/2026
- @version 1.0.0
 *---------------------------------------------------------------
- @section HARDWARE - (Informar os componentes utilizados)
- - Microcontrolador: Arduino Uno
- - Entradas: Nenhuma
- - Saídas:
-     LED RGB (Vermelho) - pino 9 (Ativo em Nível Lógico Alto / PWM)
-     LED RGB (Verde)    - pino 10 (Ativo em Nível Lógico Alto / PWM)
-     LED RGB (Azul)     - pino 11 (Ativo em Nível Lógico Alto / PWM)
 *---------------------------------------------------------------
- @section DESCRIPTION
- 1. Define os pinos do LED RGB como saída (setup)
- 2. Altera continuamente as cores do LED RGB (loop)
- 3. Acende a cor Vermelha por 1 segundo e apaga
- 4. Acende a cor Verde por 1 segundo e apaga
- 5. Acende a cor Azul por 1 segundo e apaga
- 6. Acende a cor Roxa (Mistura de Vermelho e Verde) por 1 segundo
- Mapeamento Lógico:
- - Saída PWM (0 a 255) -> Intensidade de brilho proporcional
 *---------------------------------------------------------------
 */
#define pinoVermelho 9
#define pinoVerde 10
#define pinoAzul 11

void setup()
{
  pinMode(pinoVermelho, OUTPUT);
  pinMode(pinoVerde, OUTPUT);
  pinMode(pinoAzul, OUTPUT);
}

void corRGB (int vermelho, int verde, int azul){
	analogWrite (pinoVermelho, vermelho);
	analogWrite (pinoVerde, verde);
    analogWrite (pinoAzul, azul);
}


void loop()
{   
  corRGB (255,0,0);
  delay (1000);
  
  corRGB (0,255,0);
  delay (1000);
  
  corRGB (0,0,255);
  delay (1000);
  
  corRGB (255,255,0);
  delay (1000);
}