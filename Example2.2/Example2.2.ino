void setup () {
  Serial.begin (9600);

  int rank = 1;
  switch (rank) {
    case 1:
      Serial.println ("金メダルゲット!");
      break;
     case 2:
      Serial.println ("銀メダルゲット!");
      break;
     case 3:
      Serial.println ("銅メダルゲット!");
      break;
     default:
      Serial.println ("メダルゲットならず...");
      break;
  }
}
