void setup () {
  Serial.begin (9600);

  int i;
  int value [4] = {2, 4, 6, 8};
  for (i = 0;i < 4;i++) {
    value [4] += 1;
  }

  for (i = 0;i < 4;i++) {
    Serial.println (value[4]);
  }
}
