int cur = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  //IF USER ENTERED VALUE > 0
  if (Serial.available() > 0){
    cur = Serial.read();
  }

  if (cur == '1'){
    digitalWrite(LED_BUILTIN, HIGH); //SET VOLTAGE LEVEL AS HIGH
  } else if (cur == '0'){
    digitalWrite(LED_BUILTIN, LOW);  //SET VOLTAGE LEVEL AS LOW
  }
}
