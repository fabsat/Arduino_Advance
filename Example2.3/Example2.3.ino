void setup () {
  Serial.begin (9600);
  pinMode (2, INPUT);

  while (digitalRead (2) == 0) {
    Serial.println ("Hello");
    delay (100);
  }
}

void loop () {
  
}
