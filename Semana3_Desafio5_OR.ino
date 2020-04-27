int led = 2;
int botao = 4; //primeiro botao
int botao2 = 3; //segundo botao
int estado = 0;
int estado2 = 0;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  pinMode(botao, OUTPUT);
}

void loop()
{
  estado = digitalRead(botao);
  estado2 = digitalRead(botao2);

  if (estado == HIGH || estado2 == HIGH)
  {
 	 digitalWrite(led, HIGH);
  }

  else
  {
     digitalWrite(led, LOW);
  }
}