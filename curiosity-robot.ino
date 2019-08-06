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
    curiosity.forward();
  if (state == 's')
    curiosity.backward();
  if (state == 'a')
    curiosity.left();  
  if (state == 'd')
    curiosity.right();
  if (state == 'p')
    curiosity.stop();  

}
