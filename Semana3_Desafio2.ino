const int a1 = 55;
const int b1 = 62;
const int b2 = 123;
const int c2 = 65;
const int c3 = 131;
const int e2 = 82;
const int e3 = 165;
const int d2 = 73;
const int d3 = 147;
const int d1 = 37;

int buzzer = 8;


void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  beep(e2, 250);
  delay(250);
  beep(d3, 250);
  delay(250);
  beep(e3, 500);
  delay(250);
  beep(e2, 250);
  delay(250);
  beep(e2, 250);
  beep(d3, 250);
  delay(250);
  beep(e3, 250);
  delay(500);
  beep(e2, 250);
  delay(250);

  beep(d2, 250);
  delay(250);
  beep(d3, 250);
  delay(250);
  beep(e3, 500);
  delay(250);
  beep(d2, 250);
  delay(250);
  beep(d2, 250);
  beep(d3, 250);
  delay(250);
  beep(d3, 250);
  delay(500);
  beep(a1, 250);
  delay(250);

  beep(b1, 250);
  delay(250);
  beep(b2, 250);
  delay(250);
  beep(b2, 250);
  delay(250);
  beep(b1, 250);
  delay(250);
  beep(b1, 250);
  beep(b2, 250);
  delay(250);
  beep(b2, 250);
  delay(500);
  beep(b1, 250);
  delay(250);

  beep(c2, 250);
  delay(250);
  beep(c3, 250);
  delay(250);
  beep(c3, 250);
  delay(250);
  beep(c2, 250);
  delay(250);
  beep(c2, 250);
  beep(c3, 250);
  delay(250);
  beep(c3, 250);
  delay(500);
  beep(d1, 250);
}

void beep(int note, int duration)
{
tone(buzzer, note, duration);
  delay(50);
}