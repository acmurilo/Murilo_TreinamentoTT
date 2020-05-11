#include <IRremote.h>

float tempo = 0;
float distancia = 0;

int echo = 7;
int trig = 6;
int ir = 12;
int motor1 = 5;
int motor2 = 11;

IRrecv irrecv(ir);
decode_results results;

void setup()
{
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);

  irrecv.enableIRIn();

  digitalWrite(trig, LOW);

}

void loop()
{
  if(irrecv.decode(&results))
  {
    if(results.value == 0xFD08F7)
    {
      delay(5000);

      while(results.value == 0xFD08F7)
      {
      	digitalWrite(trig, HIGH);
  	  	delay(10);
  	  	digitalWrite(trig, LOW);

  	  	tempo = pulseIn(echo, HIGH);
  	  	distancia = tempo/58;

      	if(distancia > 50)
      	{
        	digitalWrite(motor1, HIGH);
        	digitalWrite(motor2, LOW);
      	}

      	else
      	{
         	digitalWrite(motor1, HIGH);
      	 	digitalWrite(motor2, HIGH);
      	}
      }
    }
  }
}