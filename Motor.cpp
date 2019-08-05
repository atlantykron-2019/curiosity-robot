#include <AFMotor.h>
#include "Motor.h"

Motor::Motor(int pin):
  _motor(pin)
{
  _pin = pin;
  _motor.run(RELEASE);  
}
  
void Motor::forward(int speed) {
  _motor.run(FORWARD);
  _motor.setSpeed(speed);
};

void Motor::backward(int speed) {
  _motor.run(BACKWARD);
  _motor.setSpeed(speed);
}

void Motor::stop()
{
  _motor.run(RELEASE);
}
