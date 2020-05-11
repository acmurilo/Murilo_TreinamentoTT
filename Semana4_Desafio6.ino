float tempo = 0;
float distancia = 0;
int min = 10000;
int max = 0;

int echo = 7;
int trig = 6;


void setup()
{
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);

  digitalWrite(trig, LOW);

  tempo = pulseIn(echo, HIGH);
  min = tempo/58;
}

void loop()
{

  while (millis() < 5000)
  {
    digitalWrite(trig, HIGH);
    delay(10);
    digitalWrite(trig, LOW);

    tempo = pulseIn(echo, HIGH);
    distancia = tempo/58;

    if(distancia > max)
    {
      max = distancia;
      Serial.println(max);
    }
    if(distancia < min)
    {
      min = distancia;
      Serial.println(min);
    }
  }

  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  tempo = pulseIn(echo, HIGH);
  distancia = tempo/58;

  distancia = map(distancia, min, max, 0, 255);

  Serial.println(distancia);
  delay(1000);
}