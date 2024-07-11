int redPin = 10;    // Red LED pin
int greenPin = 9;  // Green LED pin
int bluePin = 8;   // Blue LED pin
int delayTime = 1000;  // Delay time in milliseconds

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red
  setColor(255, 0, 0);
  delay(delayTime);

  // Green
  setColor(0, 255, 0);
  delay(delayTime);

  // Blue
  setColor(0, 0, 255);
  delay(delayTime);

  // Yellow (Red + Green)
  setColor(255, 255, 0);
  delay(delayTime);

  // Cyan (Green + Blue)
  setColor(0, 255, 255);
  delay(delayTime);

  // Purple (Red + Blue)
  setColor(255, 0, 255);
  delay(delayTime);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
