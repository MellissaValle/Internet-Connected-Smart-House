/*

*/
#include &lt;Servo.h&gt;
#include &lt;LiquidCrystal_I2C.h&gt;
LiquidCrystal_I2C lcd(0x27, 16, 2); //
Servo myservo; // create servo object to control a servo
const int pingTrig = A0;
const int pingEcho = A1;
int LED_Red = 5;
int LED_Green = 7;
void setup() {
myservo.attach(8); // attaches the servo on pin 9 to the servo object
pinMode(pingTrig, OUTPUT);

pinMode(pingEcho, INPUT);
Serial.begin(9600);
pinMode(LED_Red, OUTPUT);
pinMode(LED_Green, OUTPUT);
lcd.init();
// Print a message to the LCD.
lcd.backlight();
}
void loop() {
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
Serial.print(inches);
Serial.print(&quot;in, &quot;);
Serial.println();
// reads the value of the potentiometer
// (value between 0 and 1023)
if (inches &lt; 4)
// scale it to use it with the servo
//(value between 0 and 180)
{
myservo.write(180);
digitalWrite (LED_Red, LOW);
digitalWrite (LED_Green, HIGH);
lcd.setCursor(0, 0);
lcd.print(&quot; Welcome 2 :) &quot;);

lcd.setCursor(0, 1);
lcd.print(&quot;Mellsmart House&quot;);
}

else
{ myservo.write(0);
digitalWrite (LED_Red, HIGH);
digitalWrite (LED_Green, LOW );
lcd.setCursor(0, 0);
lcd.print(&quot;Door closed :(&quot;);
lcd.setCursor(0, 1);
lcd.print(&quot;Mellsmart House&quot;);
}
delay(15); // waits for the servo to get there
}
long microsecondsToInches(long microseconds)
{
return microseconds / 74 / 2;
}