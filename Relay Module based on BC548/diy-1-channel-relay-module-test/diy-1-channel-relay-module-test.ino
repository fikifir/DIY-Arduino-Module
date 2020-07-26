/*
  1-Channel Relay Module Test
  Turns an Relay for one second, then off for two second, repeatedly.
  this code only made for DIY module based on BC548 that
  HIGH = Relay ON
  LOW = Relay OFF
  
  created: 26 july 2020
  by Fiki Firmansyah

  This example code is on GitHub.
  https://github.com/fikifir/DIY-Arduino-Relay-Module/tree/master/Based-on-BC548/1-Channel-Relay-Module
*/

// make an alias to your arduino pin
byte relay1 = 5;                    // make an alias for digital pin 5 arduino as "relay1" you can change it as you will.

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(relay1, OUTPUT);          // initialize digital pin "relay1" as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(relay1, HIGH);        // turn the relay1 ON (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(relay1, LOW);         // turn the relay2 OFF by making the voltage LOW
  delay(2000);                       // wait for two second
}
