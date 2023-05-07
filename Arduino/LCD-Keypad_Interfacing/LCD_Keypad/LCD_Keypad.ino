#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4;
const byte COLS = 3;
int i = 0;

const int rs = 1, en = 0, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
byte rowPins[ROWS] = {10, 9, 8, 7};
byte colPins[COLS] = {13, 12, 11};

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char Keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
Keypad customKeypad = Keypad(makeKeymap(Keys), rowPins, colPins, ROWS, COLS);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  char button = customKeypad.getKey();
  if (button)
  {
    if (i = 15){
      lcd.autoscroll();
      i = 0;
    }
    else {
      lcd.print(button);
      i++;
    }
  }
}
