



const int buttonPin = 7;
const int ledPin = 3;


//initialize
int buttonState = 0;


void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){

  buttonState = digitalRead(buttonPin);

  if(buttonState == LOW){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
