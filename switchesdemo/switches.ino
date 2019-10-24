void setup() {
  //start serial connection
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(12);
  //print out the value of the pushbutton
  Serial.println(sensorVal);
  
  if (sensorVal == HIGH) {
  	Serial.println("Light is OFF");
    digitalWrite(8, LOW);
  } else {
  	Serial.println("Light is ON");
    digitalWrite(8, HIGH);
  }
}