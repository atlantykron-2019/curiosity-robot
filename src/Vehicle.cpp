#include <Arduino.h>
#include "Motor.h"
#include "Vehicle.h"


Vehicle::Vehicle(int pin_fata_dreapta, int pin_fata_stanga, int pin_spate_dreapta, int pin_spate_stanga):
  fata_dreapta(pin_fata_dreapta),
  fata_stanga(pin_fata_stanga),
  spate_dreapta(pin_spate_dreapta),
  spate_stanga(pin_spate_stanga)
{
  
}

void Vehicle::forward()
{
  int speed = 200;
  fata_dreapta.forward(speed);
  fata_stanga.forward(speed);
  spate_dreapta.forward(speed);
  spate_stanga.forward(speed);
}

void Vehicle::backward()
{
  int speed = 200;
  fata_dreapta.backward(speed);
  fata_stanga.backward(speed);
  spate_dreapta.backward(speed);
  spate_stanga.backward(speed);
}

void Vehicle::left()
{
  
}

void Vehicle::right()
{
  
}

void Vehicle::stop()
{
  fata_dreapta.stop();
  fata_stanga.stop();
  spate_dreapta.stop();
  spate_stanga.stop();
}

void Vehicle::test()
{
  fata_dreapta.forward(200);
  delay(1000);
  fata_dreapta.stop();
  delay(1000);

  fata_stanga.forward(200);
  delay(1000);
  fata_stanga.stop();
  delay(1000);
  
  spate_dreapta.forward(200);
  delay(1000);
  spate_dreapta.stop();
  delay(1000);
  
  spate_stanga.forward(200);
  delay(1000);
  spate_stanga.stop();
  delay(1000);
}


