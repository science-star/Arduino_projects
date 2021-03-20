void setup()
{
 Serial.begin(9600);
}

void loop()
{
  sad();
  surprise();
  smile();
  surprise();
}


void top()
{
  //oberteil des Gesichts
  Serial.println("");
  Serial.println("--sss--");
  Serial.println(" o   o ");
}

void sad()
{
  //trauriges Gesicht
  top();
  Serial.println("   o ; ");
  Serial.println(" _____ ");
  Serial.println("/_____\\");
}

void surprise()
{
  //schokiertes Gesicht
  top();
  Serial.println("   o   ");
  Serial.println("_______");
  Serial.println("I_____I");
}

void smile()
{
  //lachendes Gesicht
  top();
  Serial.println("(  o  )");
  Serial.println("_______");
  Serial.println("\\_____/");
}