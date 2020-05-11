#include <Servo.h>

int servo = 9;
Servo s;
int pos;
int led = 13;
int botao = 2;

void setup ()
{
  s.attach(servo);
  Serial.begin(9600);
  s.write(0);

  pinMode(led,OUTPUT);
  pinMode(botao,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(botao) == 1)
  {
    digitalWrite(led, LOW);

    s.write(0);
  }
  else
  {
	digitalWrite(led, HIGH);

  	s.write(90);
  }
}
