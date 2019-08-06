#include <Arduino.h>
#include "Motor.h"
#include "Vehicle.h"


Vehicle::Vehicle(int pin_fata_dreapta, int pin_fata_stanga, int pin_spate_dreapta, int pin_spate_stanga):
  motor_fd(pin_fata_dreapta),
  motor_fs(pin_fata_stanga),
  motor_sd(pin_spate_dreapta),
  motor_ss(pin_spate_stanga)
{
  
}

void Vehicle::forward()
{
  int speed = 200;
  motor_fd.forward(speed);
  motor_fs.forward(speed);
  motor_sd.forward(speed);
  motor_ss.forward(speed);
}

void Vehicle::backward()
{
  int speed = 200;
  motor_fd.backward(speed);
  motor_fs.backward(speed);
  motor_sd.backward(speed);
  motor_ss.backward(speed);
}

void Vehicle::left()
{
  int speed = 200;
  motor_fd.forward(speed);
  motor_fs.backward(speed);
  motor_sd.forward(speed);
  motor_ss.backward(speed);
}

void Vehicle::right()
{
  int speed = 200;
  motor_fd.backward(speed);
  motor_fs.forward(speed);
  motor_sd.backward(speed);
  motor_ss.forward(speed);
}

void Vehicle::stop()
{
  motor_fd.stop();
  motor_fs.stop();
  motor_sd.stop();
  motor_ss.stop();
}

void Vehicle::test()
{
  motor_fd.forward(200);
  delay(1000);
  motor_fd.stop();
  delay(1000);

  motor_fs.forward(200);
  delay(1000);
  motor_fs.stop();
  delay(1000);
  
  motor_sd.forward(200);
  delay(1000);
  motor_sd.stop();
  delay(1000);
  
  motor_ss.forward(200);
  delay(1000);
  motor_ss.stop();
  delay(1000);
}


