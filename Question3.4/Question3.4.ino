void setup () {
  Serial.begin (9600);

  char ch = 'a';
  if (65 <= ch && ch <=90) {
    ch += 32;
  } else if (97 <= ch && ch <= 122) {
    ch -= 32;
  }
  Serial.println (ch);
}

void loop () {
  
}
