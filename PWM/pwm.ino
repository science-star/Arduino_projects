void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i=0; i<255;i=i+1) //Definiton vom PWM-Wert 
    //(helligkeit runter)
  {
    analogWrite(9,i);
    Serial.println(i);//Serien-Monitor kontrolle
  }
  for (int i=255; i>0;i=i-1)//Definiton vom PWM-Wert 
    //(helligkeit hoch)
  {
    analogWrite(9,i);
    Serial.println(i);//Serien-Monitor kontrolle
  }
}