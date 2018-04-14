 /*****************************************************
**                                                  **
**                       Titol:                     **
**                                                  **
**                                                  **
**  NOM: Daniel Morales           DATA: 08/01/2018  **
*****************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 6;          // donar nom al pin 5 de l’Arduino
const int led1 = 7;          // donar nom al pin 6 de l’Arduino
const int led2 = 8;          // donar nom al pin 7 de l’Arduino
const int led3 = 9;          // donar nom al pin 8 de l’Arduino
const int led4 = 10;          // donar nom al pin 9 de l’Arduino
const int led5 = 11;         // donar nom al pin 10 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);
  digitalWrite(led3, HIGH);   
  delay(800);                  

  digitalWrite(led3, LOW);
  digitalWrite(led5, HIGH);        

  delay(3200);               
  
   digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH); 

  delay(800);                

    digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH); 
  
  delay(800); 
                   
  digitalWrite(led0, LOW);
  digitalWrite(led2, HIGH); 
  
   delay(3200); 
   
   digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH); 
  
   delay(800); 
   
   digitalWrite(led1, LOW);
  digitalWrite(led0, HIGH); 
   
      delay(800); 
   
   digitalWrite(led0, LOW);
  digitalWrite(led3, LOW); 
  
}
   
   
  
