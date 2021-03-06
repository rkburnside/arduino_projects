/*
Blink
Turns on an LED on for one second, then off for one second, repeatedly.

This example code is in the public domain.
*/

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 9;
int led2 = 10;
int led3 = 11;
int i = 0;
// the setup routine runs once when you press reset:
void setup() {                
	// initialize the digital pin as an output.
	pinMode(led1, INPUT);
	pinMode(led2, INPUT);
	pinMode(led3, INPUT);
}

// the loop routine runs over and over again forever: 
void loop() {
	digitalWrite(led1, 100);
	digitalWrite(led2, 100);
	digitalWrite(led3, 100);
	for (i=1;i<5;i++){
		digitalWrite(led1, 255);   // turn the LED on (HIGH is the voltage level)
		delay(1500);               // wait for a second
		digitalWrite(led1, 100);    // turn the LED off by making the voltage LOW
		delay(1500);      // wait for a second
		/*digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(1500);               // wait for a second
digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW
delay(1500);      // wait for a second
digitalWrite(blue, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(1500);               // wait for a second
digitalWrite(blue, LOW);    // turn the LED off by making the voltage LOW
delay(1500);      // wait for a second
*/
	}
	while(1) {}
}