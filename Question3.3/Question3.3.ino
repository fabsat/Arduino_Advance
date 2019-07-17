void setup () {
  Serial.begin (9600);

  char ch = 'a';
  if (65 <= ch && ch <=90) {
    Serial.println ("大文字!"); 
  } else if (97 <= ch && ch <= 122) {
    Serial.println ("小文字!");
  } else {
    Serial.println ("それ以外!");
  }
}

void loop () {
  
}
