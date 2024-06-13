
/// verde 
/// azul  
/// rojo

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 

int tiempo = 500;

int lector = 0;
int potenciometro = A0;

int rojo = 2; ////leds que indicarán el color
int verde = 3;
int azul = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(azul,OUTPUT);
 lcd.init();    ///////////////  LCD
 lcd.backlight();
}

void loop()
{
  lector = analogRead(potenciometro); //////LECTURA DE VALORES ARROJADOS POR EL LDR
  Serial.println(lector);
  delay(tiempo);

 if((lector >= ###) && (lector <= 1023)){ /// para tener todos los leds apagados cuando no haya nada
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  lcd.setCursor(0,0);
  lcd.print("DETC. DE COLORES");
  lcd.setCursor(0,1);
  lcd.println(" SIN DATOS");
 }

  if((lector >= ###) && (lector <= ###)){ ////para verde
  digitalWrite(rojo, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("DETC. DE COLORES");
  lcd.setCursor(0,1);
  lcd.println("COLOR VERDE");
 }

  if((lector >= ###) && (lector <= ###)){   ////////para azul
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH);
  lcd.clear();
  lcd.print("DETC. DE COLORES");
  lcd.setCursor(0,1);
  lcd.println("COLOR AZUL");
  }

  if((lector >= ###) && (lector <= ###)){ //// rojo
  digitalWrite(rojo, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  lcd.clear();
  lcd.print("DETC. DE COLORES");
  lcd.setCursor(0,1);
  lcd.println("COLOR ROJO");
  }
}
