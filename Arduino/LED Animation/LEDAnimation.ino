
const int LED[8] = {13,12,11,10,9,8,7,6};

void setup() {
   for(int i = 0; i < 8;  i++){
     pinMode(LED[i],OUTPUT);
  }
}

void loop() {

  /*all LEDS blinking */
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(LED[i],HIGH);
  }

  delay(250);

  for(int i = 0; i < 8; i++)
  {
    digitalWrite(LED[i],LOW);
  }
  
  delay(500);

  /*Shifting effect (Down)*/
  for(int i = 0; i < 8;  i++)
  {
    digitalWrite(LED[i],HIGH);
    delay(300);
    digitalWrite(LED[i],LOW);
    delay(300);
  }
  
  /*Shifting effect (UP)*/
  for(int i = 0; i < 8;  i++)
  {
    digitalWrite(LED[7 - i],HIGH);
    delay(300);
    digitalWrite(LED[7 - i],LOW);
    delay(300);
  }

  delay(500);

  /*2 LEDS Converging and Diverging*/
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(LED[i], HIGH);
    digitalWrite(LED[i + 1], HIGH);
    digitalWrite(LED[7 - i], HIGH);
    digitalWrite(LED[7 - i - 1], HIGH);

    delay(500);
     
    digitalWrite(LED[i], LOW);
    digitalWrite(LED[i + 1], LOW);
    digitalWrite(LED[7 - i], LOW);
    digitalWrite(LED[7 - i - 1], LOW);

  }

  delay(500);

  /*PING PONG*/
  for(int i = 0; i < 8;  i++)
  {
    digitalWrite(LED[i],HIGH);
    delay(500);
    digitalWrite(LED[i],LOW);
  }
  for(int i = 0; i < 8;  i++)
  {
    digitalWrite(LED[7 - i],HIGH);
    delay(500);
    digitalWrite(LED[7 - i],LOW);
  }

  delay(500);

  /*Snake Effect*/
  for(int i = 0; i < 8; i++)
  {
    delay(500);
    digitalWrite(LED[i], HIGH);
  }
}
