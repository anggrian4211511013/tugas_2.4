/* PRAKTIKUM 2.4 ANGGRIAN Q (4211511013) */

void setup()
{
 pinMode(A0,INPUT);
 digitalWrite(A0,HIGH);
 pinMode(12,OUTPUT);
}

void loop()
{
 if(digitalRead(A0)==LOW)
 {
  digitalWrite(12,HIGH);
 }
 else
 {
  digitalWrite(12,LOW);
 }
}
