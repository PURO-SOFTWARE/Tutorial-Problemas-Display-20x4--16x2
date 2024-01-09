#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Dirección I2C del módulo LCD
LiquidCrystal_I2C lcd(0x3F, 20, 4);  // Ajusta la dirección y el tamaño según corresponda

void setup() {
  lcd.init();      // Inicializa el LCD
  lcd.begin(20, 4);  // Inicializa el LCD con 20 columnas y 4 filas
  lcd.backlight();   // Enciende la retroiluminación
}

void loop() {
  lcd.clear();  // Limpia el contenido del LCD

  lcd.setCursor(0, 0);
  lcd.print("Hola");

  lcd.setCursor(0, 1);
  lcd.print("Hola");

  lcd.setCursor(0, 2);
  lcd.print("Hola");

  lcd.setCursor(0, 3);
  lcd.print("Hola");
  
  delay(2000);  // Espera 2 segundos antes de limpiar y volver a mostrar
}
