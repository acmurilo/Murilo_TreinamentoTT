int buzzer = 8;
int pir = A0;
int valor = LOW;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}
void loop()
{
  valor = digitalRead(pir);
  if (valor == HIGH)
  {
    tone(buzzer, 1200);
    delay(100);
    noTone(buzzer);
    delay(100);
  }
  else
  {
    noTone(buzzer);
  }
}