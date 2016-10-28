/*
  Pumpkin (Easy)
  Blinks an LED and buzzer when PIR sensor senses motion.

  This is a simple circuit and code to add some LEDs and a piezo buzzer
  to a prop (I used a Halloween pumpkin). In this code, you will see
  the basics of define variables and constants, setting up the pin modes,
  reading a sensor, checking using an if statement, and writing a custom
  function.

  Should work on most Arduinos but tested on an UNO R3.

  The circuit itself can be found at:
  https://circuits.io/circuits/3028448-pumpkin-easy
  
  This example code is in the public domain.

  modified 28 Oct 2016
  by Louis DiCarro
*/


// defining variables for the pins
// using const because the variable will not change
const int ledPin = 13;
const int bzrPin = 12;
const int pirPin = 2; 

void setup() {
  // setting the mode of the pins
  // the led and buzzer are outpus
  // the PIR sensor is the input
  pinMode(ledPin,OUTPUT);
  pinMode(bzrPin,OUTPUT);
  pinMode(pirPin,INPUT);
}

void loop() {
  // setting a variable to read the state of the PIR sensor
  int val = digitalRead(pirPin);

  // if the PIR pin reads HIGH (senses activity)
  if(val == HIGH)
  {
    doAnimation(); // run the animation function
  }

}

void doAnimation()
{
  // we want to turn the ligts and buzzer
  // on and off 100 times
  for(int i = 0; i < 100; i++)
  {
    // set the pins to HIGH
    digitalWrite(ledPin,HIGH);
    digitalWrite(bzrPin,HIGH);
    
    // wait .25 seconds
    delay(250);

    // set the pins to LOW
    digitalWrite(ledPin,LOW);
    digitalWrite(bzrPin,LOW);

    // wait .25 seconds
    delay(100);

    // start the for-next-loop over unless i == 100
  }

  // function will automatically go back to loop()
}

