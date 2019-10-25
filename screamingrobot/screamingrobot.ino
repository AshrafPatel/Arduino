void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  int isPressed = digitalRead(2);
  Serial.println(isPressed);
  if (isPressed == LOW) {
	digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    tone(9, random(100, 500));
    delay(150);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(250);
  } else {
  	digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    noTone(9);
  }
}