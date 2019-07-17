void setup () {
  pinMode (2, INPUT);
  pinMode (3, INPUT);
  pinMode (4, OUTPUT);
}

void loop () {
  int s1 = digitalRead (2);
  int s2 = digitalRead (3);

  if (s1 == 1 && s2 == 1) {
    digitalWrite (4, HIGH);
  } else {
    digitalWrite (4, LOW);
  }
}
