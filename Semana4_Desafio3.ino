#include <Servo.h>

int servo = 9;
Servo s;
int pos;

void setup ()
{
  s.attach(servo);
  Serial.begin(9600);
  s.write(0);
}

void loop()
{
  for(pos = 0; pos <= 180; pos++)
  {
    s.write(pos);
  	delay(15);
  }

delay(2000);

  for(pos = 180; pos >= 0; pos--)
  {
    s.write(pos);
    delay(15);
  }
}