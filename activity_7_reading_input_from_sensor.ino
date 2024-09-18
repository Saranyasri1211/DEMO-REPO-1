int ir=D0;
void setup()
{
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int result=digitalRead(ir);
  Serial.println(result);
}
