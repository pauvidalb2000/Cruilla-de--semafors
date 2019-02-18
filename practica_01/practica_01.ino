/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int vermellA = 7;          // donar nom al pin 7 de l’Arduino
const int taronjaA = 8;          // donar nom al pin 8 de l’Arduino
const int verdA = 9;          // donar nom al pin 9 de l’Arduino
const int vermellB = 10;         // donar nom al pin 10 de l’Arduino
const int taronjaB = 11;         // donar nom al pin 11 de l’Arduino
const int verdB = 12;         // donar nom al pin 12 de l’Arduino
unsigned long z = 1000;

//********** Setup ****************************************************************
void setup()
{
  pinMode(vermellA, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(taronjaA, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(verdA, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(vermellB, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(taronjaB, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(verdB, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(vermellA, HIGH);    // posar a 5V el pin 5
  digitalWrite(vermellB, HIGH);    // posar a 5V el pin 6
  
  delay(z);                  // es queden leds 500ms encesos
  
  digitalWrite(vermellB, LOW);     // posar a 0V el pin 5
  digitalWrite(verdB, HIGH);     // posar a 5V el pin 6
  
  delay(z*4);                  // es queden leds 500ms apagats
  
  digitalWrite(verdB, LOW);     // posar a 0V el pin 5
  digitalWrite(taronjaB, HIGH);     // posar a 5V el pin 7
  
  delay(z);                  // es queden leds 500ms apagats
  
  digitalWrite(taronjaB, LOW);     // posar a 0V el pin 7
  digitalWrite(vermellB, HIGH);     // posar a 5V el pin 8

  delay(z);                  // es queden leds 500ms apagats

  digitalWrite(vermellA, LOW);     // posar a 0V el pin 8
  digitalWrite(verdA, HIGH);     // posar a 5V el pin 9

  delay(z*4);                  // es queden leds 500ms apagats
  
  digitalWrite(verdA, LOW);     // posar a 0V el pin 5
  digitalWrite(taronjaA, HIGH);     // posar a 5V el pin 7
  
  delay(z);                  // es queden leds 500ms apagats
   
  digitalWrite(taronjaA, LOW);     // posar a 0V el pin 7
  digitalWrite(vermellA, HIGH);     // posar a 5V el pin 8

  delay(z);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************
