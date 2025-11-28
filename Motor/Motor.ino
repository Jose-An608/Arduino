#include "motor.h"

Motor leftMotor(4, 5, 6);
Motor rightMotor(8, 9, 10);

void setup() {
  leftMotor.init();
  rightMotor.init();
}

void loop() {
  // Ambos motores hacia adelante por 5 segundos
  leftMotor.moveForward(255);
  rightMotor.moveForward(255);
  delay(5000);

  // Motor izquierdo hacia atrás, motor derecho hacia adelante (giro)
  leftMotor.moveBackward(255);
  rightMotor.moveForward(255);
  delay(5000);

  // Detener ambos motores
  leftMotor.stop();
  rightMotor.stop();
  delay(5000);
}

