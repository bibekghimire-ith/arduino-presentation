#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(2,3,4,5,11,12);
void setup()

{

  // set up the LCD's number of columns and rows:

lcd.begin(16, 2);

}

 

void loop()

{

// set the cursor to column 0, line 1

lcd.print("Ram Binay Sharma");//print name


delay(750);//delay of 0.75sec

lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1

}
