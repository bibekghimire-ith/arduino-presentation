#include <Keypad.h>

const byte numRows= 4

const byte numCols= 4;

keymap[numRows][numCols]= { {'1', '2', '3', 'A'},

{'4', '5', '6', 'B'},

{'7', '8', '9', 'C'},

{'*', '0', '#', 'D'} };

byte rowPins[numRows] = {9,8,7,6}; //Rows 0 to 3

byte colPins[numCols]= {5,4,3,2}; //Columns 0 to 3

//initializes an instance of the Keypad class

Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

void setup() {

Serial.begin(9600);

}

//If key is pressed, this key is stored in 'keypressed' variable //If key is not equal to 'NO_KEY', then this key is printed out //if count=17, then count is reset back to 0 (this means no key is pressed during the whole keypad scan process

void loop() {

char keypressed = myKeypad.getKey();

if (keypressed != NO_KEY)

{

Serial.print(keypressed);

}

}
