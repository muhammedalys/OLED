#include <OLED_I2C.h>

OLED  myOLED(SDA, SCL, 8);

extern uint8_t SmallFont[];

void setup()
{
  myOLED.begin();
  myOLED.setFont(SmallFont);
}

void loop()
{
  myOLED.clrScr();
  myOLED.print("Ad Soyad:", LEFT, 0);
  myOLED.print("Muhammed Ali", CENTER, 16);
  myOLED.print("OZEN", CENTER, 48);
  myOLED.update();
  delay (5000);
  
  myOLED.clrScr();
  myOLED.print("Proje Adi ve Malzeme:", LEFT, 0);
  myOLED.print("OLED Ekran Kullanimi", CENTER, 16);
  myOLED.print("OLED Ekran", CENTER, 48);
  myOLED.update();
  delay (5000);
  
  myOLED.clrScr();
  myOLED.print("Tel NO :", LEFT, 0);
  myOLED.print("0541 111 11 11", CENTER, 24);
  myOLED.update();
  delay (5000);
  
 
}
