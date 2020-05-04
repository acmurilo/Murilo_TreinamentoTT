int botao = 7;
int led = 13;
int estado = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop()
{
  estado = digitalRead(botao);

  if (digitalRead(botao) == 1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}