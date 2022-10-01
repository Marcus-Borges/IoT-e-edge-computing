#include <LiquidCrystal.h> 

LiquidCrystal lcd(2,3,4,6,7,8,9,10,11,12,13);

byte coracao[8] = { 
0b00000, 
0b01010, 
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000
};

void setup() {
lcd.begin (16,2); 
lcd.setCursor(1,0); 
lcd.print("PASSEI POYATOS?"); 
lcd.createChar(1, coracao);
}

void loop() { 
lcd.setCursor(8,1); 
lcd.write(1); 
delay(300);
lcd.setCursor(8,1);
lcd.print(" "); 
delay(300); 
}