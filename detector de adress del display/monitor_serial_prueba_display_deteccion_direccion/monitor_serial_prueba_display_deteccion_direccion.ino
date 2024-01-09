#include <Wire.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);  // Espera a que la consola serial esté disponible

  Serial.println("Escaneando direcciones I2C...");

  Wire.begin();

  for (uint8_t address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    byte error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("Dispositivo encontrado en la dirección 0x");
      if (address < 16) {
        Serial.print("0");
      }
      Serial.println(address, HEX);
    }
  }

  Serial.println("Escaneo completo.");
}

void loop() {
  // No se realiza ninguna acción en el bucle de repetición
}
