#include <EEPROM.h> // inclusion des librairies
#include <LiquidCrystal.h>
#include <Wire.h>
#define Mecanisme 0x20 
#define Auxiliaire 0x21
#define Clavier 0x22
#define Controleur_Lcd 0x3B
#define Carte_Puce 0x50
#define EEPROM_Maintenance 0x57 




void setup() {
    Serial.begin(9600); // initialisation de la liaison serie a 9600 bauds
  Wire.begin(); 
 // Wire.begin(Mecanisme); 
  
}


void loop() {
 
char caractere;
  Wire.requestFrom(Mecanisme,6); 
  while(Wire.available())
  {
   caractere=Wire.read();
   Serial.print(caractere);
    
  }
  delay(500);
//  Wire.endTransmission();



}
