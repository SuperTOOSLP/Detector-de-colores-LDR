
///Programación para ver el valor de las tarjetas de color RGB.

/// verde
/// azul  
/// rojo  

#include <LiquidCrystal_I2C.h> ///// este programa es para lcd 16x2 con módulo I2C
LiquidCrystal_I2C lcd(0x27,16,2);  //// esta configuración es de mi lcd, debes ver si te funciona, si no entonces coloca otro

int tiempo = 500;

int lector = 0;
int potenciometro = A0;

void setup()
{
  Serial.begin(9600);
}

 void loop()
{
  lector = analogRead(potenciometro);
  Serial.println(lector);
  delay(tiempo);
}
