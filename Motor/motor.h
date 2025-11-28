#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor {
  private:
    uint8_t inputA;
    uint8_t inputB;
    uint8_t inputPwm;

  public:
    Motor() {}  // Constructor vacío
    Motor(uint8_t inputA, uint8_t inputB, uint8_t inputPwm);

    void init();
    void moveForward(uint8_t pwm);
    void moveBackward(uint8_t pwm);
    void stop();
};

#endif
