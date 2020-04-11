int botao = 2;
int led1 = 4;
int led2 = 7;
int led3 = 9;

int estado = 0;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(botao,INPUT);
}
int vezes = 0;
void loop()
{
  delay(50);
  estado = digitalRead(botao);
  if(estado == 1)
  {
    switch(vezes)
  	{
  		case 1:
  			digitalWrite(led1,HIGH);
      		digitalWrite(led2,LOW);
      		digitalWrite(led3,LOW);
      		break;
      	case 2:
      		digitalWrite(led1,LOW);
  			digitalWrite(led2,HIGH);
      		break;
  		case 3:
      		digitalWrite(led1,HIGH);
      		break;
      	case 4:
      		digitalWrite(led1,LOW);
      		digitalWrite(led2,LOW);
      		digitalWrite(led3,HIGH);
      		break;
      	case 5:
      		digitalWrite(led1,HIGH);
      		break;
      	case 6:
      		digitalWrite(led1,LOW);
      		digitalWrite(led2,HIGH);
      		break;
      	case 7:
      		digitalWrite(led1,HIGH);
      		vezes = -1;
      		break;
      	default:
      		digitalWrite(led1,LOW);
      		digitalWrite(led2,LOW);
      		digitalWrite(led3,LOW);
      		break;
     }
    while(estado != 0){
      	estado = digitalRead(botao);
    	delay(1);
    }
    vezes++;
  }
}