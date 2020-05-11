#include <IRremote.h>

int ir = 11;

int red = 10;
int blue = 9;
int green = 8;

IRrecv irrecv(ir);
decode_results results;


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop()
{
  results.value = 0;

  if(irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);

    if(results.value == 0xFD08F7)
    {
      digitalWrite(red, HIGH);
      delay(1000);
      digitalWrite(red, LOW);
    }
    if(results.value == 0xFD8877)
    {
      digitalWrite(green, HIGH);
      delay(1000);
      digitalWrite(green, LOW);
    }
    if(results.value == 0xFD48B7)
    {
      digitalWrite(blue, HIGH);
      delay(1000);
      digitalWrite(blue, LOW);
    }

    irrecv.resume();
  }
}