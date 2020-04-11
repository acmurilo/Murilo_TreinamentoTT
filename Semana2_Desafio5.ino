int led[] = {4, 7, 9, 13};
int i = 0;
int tempo = 500;

void setup()
{
  for(i = 0; i < 4; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  for(i = 0; i < 4; i++)
  {
  	digitalWrite(led[i], HIGH);
    delay(tempo);
  }

  delay(tempo);

  for(i = 4; i >= 0; i--)
  {
    digitalWrite(led[i], LOW);
    delay(tempo);
  }

  delay(tempo);
}