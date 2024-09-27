const int buttonPin = D3;  
int buttonState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP);  
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    Serial.println("Button Pressed");
  } else {
    Serial.println("Button Released");
  }
  
  delay(500);  
}