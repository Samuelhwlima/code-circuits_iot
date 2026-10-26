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
  digitalWrite(LEDVERDE, LOW);
  delay(0001);
 
  digitalWrite (LEDAMARELO, HIGH);
  delay (1000);
  digitalWrite(LEDAMARELO, LOW);
  delay (0001);
 
  digitalWrite (LEDVERMELHO, HIGH);
  delay (1000);
  digitalWrite (LEDVERMELHO, LOW);
  delay (0001);
 
  digitalWrite (LEDBRANCO, HIGH);
  delay (1000);
  digitalWrite (LEDBRANCO, LOW);
  delay (0001);
}