/// Arduino pin numbers for the sensor output and input pins
const int pingTrig = A0;
const int pingEcho = A1;
int LED_Red = 5;
int LED_Blue = 6;
int LED_Green = 7;
void setup() {
  // initialize serial communication
  Serial.begin(9600);
  // initialize sensor pins
  pinMode(pingTrig, OUTPUT);
  pinMode(pingEcho,  INPUT);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
  pinMode(LED_Green, OUTPUT);
}
void loop()
{
  // establish variables for duration of the ping,
  // and the distance result in inches and centimeters:
  long duration, inches, cm;
  // The HC-SR04 is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse
  digitalWrite(pingTrig,  LOW);
  delayMicroseconds( 5);
  digitalWrite(pingTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingTrig,  LOW);
  // The Echo pin is used to read the signal from HC-SR04; a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  duration = pulseIn(pingEcho, HIGH);
  // convert the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  if (inches < 3)
  {
    digitalWrite (LED_Red, HIGH);
    digitalWrite (LED_Blue, LOW);
    digitalWrite (LED_Green, LOW);
  }
  if (inches > 3 && inches < 13)
  {
    digitalWrite (LED_Red, LOW);
    digitalWrite (LED_Blue, HIGH);
    digitalWrite (LED_Green, LOW);
  }
  if (inches > 13)
  {
    digitalWrite (LED_Red, LOW);
    digitalWrite (LED_Blue, LOW);
    digitalWrite (LED_Green, HIGH);
  }
  delay(100);
}
long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the Ping sensor, there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}