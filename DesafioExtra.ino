int brilho = 0;
int pin = 9;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  for (pin = 9; pin <= 11; pin++)
  {
  	for (brilho = 0; brilho <= 255; brilho += 5)
  	{
  		analogWrite(pin, brilho);
  		delay(50);
  	}
  	for (brilho = 255; brilho >= 0; brilho -= 5)
  	{
  		analogWrite(pin, brilho);
  		delay(50);
  	}
  }

}