void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  int isON = digitalRead(2);
  Serial.println(isON);
  if (isON == LOW) {
    for(int i = 0; i < 5; i++) {
    	tone(13, 440);
      	delay(100);
      	tone(13, 880);
      	delay(100);
    }
  } else {
  	noTone(13);
  }
}