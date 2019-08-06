#include "src/Vehicle.h"

int state=0;

Vehicle curiosity(3, 4, 2, 1);

void setup() 
{
  Serial.begin(9600);
  //curiosity.test();

}

void loop() 
{
  if(Serial.available() > 0)
  { 
    state = Serial.read(); 
  }
  uint8_t i;
  
  if (state == 'w')
    Vehicle forward();
  if (state == 's')
    Vehicle backwards();
  if (state == 'a')
    Vehicle left();  
  if (state == 'd')
    Vehicle right();
  if (state == 'p')
    Vehicle stop();  

}
