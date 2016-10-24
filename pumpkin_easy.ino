const int ledPin = 13;
const int bzrPin = 12;
const int pirPin = 2; 

int animation = LOW;



void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(bzrPin,OUTPUT);
  pinMode(pirPin,INPUT);
}

void loop() {
  if(pirPin == HIGH)
  {
    doAnimation();
  }

}

void doAnimation()
{
  for(int i = 0; i < 100; i++)
  {
    digitalWrite(ledPin,HIGH);
    digitalWrite(bzrPin,HIGH);
    delay(100);
    digitalWrite(ledPin,LOW);
    digitalWrite(bzrPin,LOW);
    delay(100);
  }
}

