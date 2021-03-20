void setup()
{
  pinMode(13, OUTPUT);// grüne LED
  pinMode(9, OUTPUT);// gelbe LED
  pinMode(6, OUTPUT);//rote LED
}

void loop()
{
  digitalWrite(6, HIGH);// rot an
  delay(2000); // wait for 2s
  digitalWrite(9, HIGH);// gelb an
  delay(1000); // wait for 1s
  digitalWrite(6, LOW);// rot aus
  digitalWrite(9, LOW);// gelb aus
  digitalWrite(13, HIGH);// grün an
  delay(3000); // wait for 3s
  digitalWrite(13, LOW);// grün aus
  digitalWrite(9, HIGH);// gelb an
  delay(1000); // wait for 1s
  digitalWrite(9, LOW);// gelb aus
}