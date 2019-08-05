#ifndef Motor_h
#define Motor_h

#include <AFMotor.h>

class Motor
{  
  private:
    int _pin;
    AF_DCMotor _motor;
 
  public:
    Motor(int pin);    
    void forward(int speed);
    void backward(int speed);
    void stop();
};

#endif
