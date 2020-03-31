int pin = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
   for ( pin = 9; pin <= 11; pin ++)
   {
    digitalWrite(pin, HIGH);
    delay(1000);

    digitalWrite(pin, LOW);
    delay(1000);
  }
}