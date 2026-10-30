//Declaração das constantes
#define LEDVERDE 8
#define LEDAMARELO 9
#define LEDVERMELHO 10
#define LEDVERDE2 13
#define LEDAMARELO2 12
#define LEDVERMELHO2 11

//Definições das configurações dos pinos
void setup()
{
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDVERDE2, OUTPUT);
  pinMode(LEDAMARELO2, OUTPUT);
  pinMode(LEDVERMELHO2, OUTPUT);
}

void loop()
{
  //Definindo led dos pedestre e carros
  digitalWrite(LEDVERMELHO, HIGH);
  digitalWrite(LEDVERDE2, HIGH);
  
  //Tempo que o led ira ficar ligado
  delay(5000);
  
  digitalWrite(LEDVERMELHO, LOW);
  digitalWrite(LEDVERDE2, LOW);
  delay(0001);
  
  digitalWrite (LEDAMARELO, HIGH);
  digitalWrite (LEDAMARELO2, HIGH);
  delay (2000);
  
  digitalWrite (LEDAMARELO2, LOW);
  digitalWrite(LEDAMARELO, LOW);
  delay (0001);
  
  digitalWrite (LEDVERDE, HIGH);
  digitalWrite (LEDVERMELHO2, HIGH);
  delay (5000);
  
  digitalWrite (LEDVERMELHO2, LOW);
  digitalWrite (LEDVERDE, LOW);
  delay (0001);
}