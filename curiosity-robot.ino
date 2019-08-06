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
  state = readState();
  if (curiositySholdBeAutonomous(state)) {
    selfDrive(sensor);
  } else {
    manualDrive(state);
  }
}

/**
 * Check if the user pressed a button
 */
int readState()
{
  if(Serial.available() > 0)
  { 
    state = Serial.read(); 
  }
  uint8_t i;
  return state;
}

/**
 * Checks if the user wanted curiosity to be autonomous
 */
boolean curiositySholdBeAutonomous(int state)
{
  return (state == 'i');
}

void selfDrive(sensor)
{
  
}

void manualDrive(Vehicle curiosity, int state)
{
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