




const int ledPin = 3;
const int buttonPin = 7;
int buttonState = 0;
int lastButtonState = 0;


void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){
  static unsigned long timer = 0;
  unsigned long interval = 50;




if(millis() - timer >= interval){
  timer = millis();

  buttonState = digitalRead(buttonPin);


  if(buttonState != lastButtonState){
    if(buttonState == LOW){
      digitalWrite(ledPin, !digitalRead(ledPin));
    }
}


lastButtonState = buttonState;
}



};


