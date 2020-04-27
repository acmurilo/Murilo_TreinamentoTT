int led = 2;
int botao = 4; //primeiro botao
int estado = 0;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
}

void loop()
{
  estado = digitalRead(botao);

  if (!(estado == HIGH))
  {
 	 digitalWrite(led, HIGH);
  }
  else
  {
     digitalWrite(led, LOW);
  }
}