#include <Arduino.h>
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the lcd number of columns and rows:
  lcd.begin(16, 2);
  lcd.print("hello world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // note: line 1 is the second row, since counting begins with 0
  lcd.setCursor(0, 1);
  // print the number of seconds since reset
  lcd.print(millis() / 1000);
}
