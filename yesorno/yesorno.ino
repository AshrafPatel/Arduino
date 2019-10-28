void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  int randomNum = 9;
  int pushButton = digitalRead(2);
  if (pushButton == LOW) {
  	randomNum = random(0, 2);
  } else if (pushButton == HIGH) {
  	randomNum = 9;
  }
  Serial.println(randomNum);
  if (randomNum == 0) {
    digitalWrite(12, LOW);
    delay(1000);
    digitalWrite(13, HIGH);
  } else if (randomNum == 1) {
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(12, HIGH);
  } else {
  	digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
}