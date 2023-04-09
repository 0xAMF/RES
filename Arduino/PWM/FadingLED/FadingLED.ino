const int LED = 11;
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  
  for (int i = 0; i <=255; i++)
  {
    delay(10);
    analogWrite(LED, i);
  }

  for (int j = 255; j >=0; j--)
  {
    delay(10);
    analogWrite(LED, j);
  }

}
