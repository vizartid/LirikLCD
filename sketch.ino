#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();      // Inisialisasi LCD
  lcd.backlight(); // Menyalakan lampu latar
}

void loop() {
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Tante...");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Sudah terbiasa");
  lcd.setCursor(0, 1);
  lcd.print("terjadi, tante");
  delay(3500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Teman datang");
  lcd.setCursor(0, 1);
  lcd.print("ketika lagi...");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("...butuh saja.");
  delay(2500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Coba kalau");
  lcd.setCursor(0, 1);
  lcd.print("lagi susah");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Mereka semua");
  lcd.setCursor(0, 1);
  lcd.print("menghilangggg..."); 
  delay(5500);
  lcd.clear();
  lcd.setCursor(4, 0); 
  lcd.print("Tante...");
  delay(1500); 

  lcd.clear();
  lcd.setCursor(4, 0); 
  lcd.print("Tante...");
  delay(5000); 
}