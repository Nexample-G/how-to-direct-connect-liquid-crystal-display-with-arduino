#include <LiquidCrystal.h>
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
void setup() {
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Hello Nexample");
lcd.setCursor(0,1);
lcd.print("On YouTube");
}
void loop() {}