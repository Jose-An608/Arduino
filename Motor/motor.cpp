#include "motor.h"

Motor::Motor(uint8_t inputA, uint8_t inputB, uint8_t inputPwm) {
  this->inputA = inputA;
  this->inputB = inputB;
  this->inputPwm = inputPwm;
}

void Motor::init() {
  pinMode(inputA, OUTPUT);
  pinMode(inputB, OUTPUT);
  pinMode(inputPwm, OUTPUT);
  stop();
}

void Motor::moveForward(uint8_t pwm) {
  digitalWrite(inputA, HIGH);
  digitalWrite(inputB, LOW);
  analogWrite(inputPwm, pwm);
}

void Motor::moveBackward(uint8_t pwm) {
  digitalWrite(inputA, LOW);
  digitalWrite(inputB, HIGH);
  analogWrite(inputPwm, pwm);
}

void Motor::stop() {
  digitalWrite(inputA, LOW);
  digitalWrite(inputB, LOW);
  analogWrite(inputPwm, LOW);
}

