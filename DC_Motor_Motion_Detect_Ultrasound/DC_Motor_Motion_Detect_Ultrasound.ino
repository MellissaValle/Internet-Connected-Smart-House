/*
*/
#include <SimpleDHT.h>
#include <Wire.h>

int pinDHT11 = 2;
const int pingTrig = A0;
const int pingEcho = A1;
int LED_Red = 5;
int LED_Green = 7;
int DCMOTOR = 8;
SimpleDHT11 dht11(pinDHT11);
void setup() {
// initialize serial communication
//Serial.begin(9600);
Serial.begin(115200);
// initialize sensor pins
pinMode(pingTrig, OUTPUT);
pinMode(pingEcho, INPUT);
pinMode(LED_Red, OUTPUT);
pinMode(LED_Green, OUTPUT);
pinMode(DCMOTOR, OUTPUT);
lcd.init(); // initialize the lcd
lcd.init();
// Print a message to the LCD.
lcd.backlight();
}
void loop()
{
// establish variables for the duration of the ping,
// and the distance result in inches and centimeters:

long duration, inches, cm;
// The HC-SR04 is triggered by a HIGH
//pulse of 2 or more microseconds.
// Give a short LOW pulse beforehand to
// ensure a clean HIGH pulse
digitalWrite(pingTrig, LOW);
delayMicroseconds( 5);
digitalWrite(pingTrig, HIGH);
delayMicroseconds(10);
digitalWrite(pingTrig, LOW);
duration = pulseIn(pingEcho, HIGH);
// convert the time into a distance
inches = microsecondsToInches(duration);
cm = microsecondsToCentimeters(duration);
Serial.print(inches);
Serial.print("in, ");
Serial.print(cm);
Serial.print("cm");
Serial.println();
if (inches <= 4)
{
digitalWrite (LED_Red, LOW);
digitalWrite (LED_Green, HIGH);
digitalWrite (DCMOTOR, HIGH);
}
if (inches > 4)
{
digitalWrite (LED_Red, HIGH);
digitalWrite (LED_Green, LOW );
digitalWrite (DCMOTOR, LOW);
}
delay(1000);
