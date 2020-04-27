int sensor = A0;
int valor = 0;

void setup()
{
  	Serial.begin(9600);
	pinMode(sensor,INPUT);
}

void loop()
{
	valor = analogRead(sensor);

	Serial.println(valor);

  	delay(1000);
}