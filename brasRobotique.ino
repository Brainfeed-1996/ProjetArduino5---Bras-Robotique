#include <Servo.h>

Servo baseServo;
Servo brasServo;
Servo pinceServo;

void setup() {
  baseServo.attach(9);  // Connecte le servomoteur de la base à la broche 9
  brasServo.attach(10); // Connecte le servomoteur du bras à la broche 10
  pinceServo.attach(11); // Connecte le servomoteur de la pince à la broche 11
}

void loop() {
  // Mouvement de la base
  baseServo.write(90);  // Positionne la base à 90 degrés
  delay(1000);
  
  // Mouvement du bras
  brasServo.write(45);  // Positionne le bras à 45 degrés
  delay(1000);
  
  // Mouvement de la pince
  pinceServo.write(10);  // Ferme la pince
  delay(1000);
  pinceServo.write(90);  // Ouvre la pince
  delay(1000);
}
