/**
 * A simple class to demonstrate the capacity of a 4 wheel vehicle
 */
#ifndef Vehicle_h
#define Vehicle_h

#include "Motor.h"

class Vehicle
{
  private:
    Motor motor_fd;
    Motor motor_fs;
    Motor motor_sd;
    Motor motor_ss;

  public:
    Vehicle(int pin_fata_dreapta, int pin_fata_stanga, int pin_spate_dreapta, int pin_spate_stanga);

    void forward();
    void backward();
    void left();
    void right();

    void stop();
    void test();
};

#endif
