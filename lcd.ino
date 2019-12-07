#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,11,12);
void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Ram Binay Sharma");
  delay(1000);
}

void loop() {

  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {

    lcd.scrollDisplayLeft();

    delay(150);
  }

  for (int positionCounter = 0; positionCounter < 33; positionCounter++) {

    lcd.scrollDisplayRight();

    delay(150);
  }

  
  delay(1000);

}
