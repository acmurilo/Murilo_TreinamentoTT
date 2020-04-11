int led = 13;
int intervalo = 1000;
int tempo1 = 0;
int valor = LOW;


void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  unsigned long tempo2 = millis();

  if(tempo2 - tempo1 >= intervalo)
  {
    tempo1 = tempo2;

    if (valor == LOW)
    {
    	valor = HIGH;
    }
 	else
    {
        valor = LOW;
    }

    digitalWrite(led, valor);
  }
}