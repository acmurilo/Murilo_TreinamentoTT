const int led = 9;
const int pot = A0;

int valor = 0;
int valor2 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  valor = analogRead(pot);
  valor2 = map(valor, 0, 1023, 0, 255);

  analogWrite(led, valor2);
  Serial.println(valor);

  delay(1000);
}