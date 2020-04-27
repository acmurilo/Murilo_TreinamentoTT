int led = 2;
int botao = 4; //primeiro botao
int botao2 = 3; //segundo botao
int buzzer = 8;
int pir = A0;
int valorpir = LOW;

int estado = 0;
int estado2 = 0;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  pinMode(botao, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  estado = digitalRead(botao);
  estado2 = digitalRead(botao2);

  valorpir = digitalRead(pir);

  if(estado == HIGH && estado2 == HIGH)
  {
    	digitalWrite(led, LOW);
    	noTone(buzzer);
  }

  else
  {
      Serial.println(valorpir);
    	tone(buzzer, 1200);
    	delay(100);
    	noTone(buzzer);

      	digitalWrite(led, HIGH);
 		delay(1000);
 	 	digitalWrite(led, LOW);
  		delay(1000);
  }
}