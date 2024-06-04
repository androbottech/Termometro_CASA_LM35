#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

float temperatura;
int lm35 = 0;

void setup() 
{
 lcd.begin(16, 2);
}

void loop() {
 temperatura = analogRead(lm35);
 temperatura = (temperatura * 5/ 1024) / 0.01;

lcd.clear();
 lcd.home();
 lcd.print("Temperatura:");
 lcd.setCursor(4,1);
 lcd.print(temperatura);
 lcd.print(" C");
 delay(1000);
}
