void setup()
{
  
}

void loop()
{
  int tempo = 1153/2;
  tone (9,65);// erste Strophe
  delay (2.5*tempo);
  tone (9,73);
  delay (1*tempo);
  noTone (9);
  delay (0.1*tempo);
  tone (9,73);
  delay (0.5*tempo);
  tone (9,82);
  delay (1.5*tempo);
  refrain(tempo);//aufruf von refrain mit parameter tempo
   tone (9,110);// zweite Strophe
  delay (2.5*tempo);
  tone (9,73);
  delay (1*tempo);
  tone (9,207);
  delay (0.5*tempo);
  tone (9,82);
  delay (1.5*tempo);
  refrain(tempo);//aufruf von refrain mit parameter tempo
  noTone(9);
  delay(4*tempo);//ende des Liedes
}
void refrain(int tempo) // def. von refrain mit parameter tempo
  {
  tone (9,67);
  delay(1*tempo);
  tone (9,93);
  delay(1.5*tempo);
  tone (9,466);
  delay(4*tempo);
  }