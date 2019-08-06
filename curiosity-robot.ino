#include "src/Vehicle.h"

/**
 * manual = 0  means that the control is autonomous
 * manual = 1  means that the control is manual
 */
int manual = 1;

/**
 * this is the value of the pressed key
 */
int key = 0;

int irSensor=13;

Vehicle curiosity(3, 4, 2, 1);

void setup()
{
  Serial.begin(9600);
  pinMode(irSensor, INPUT);
  //curiosity.test();
}

void loop()
{
  key = readKey();
  changeState(manual, key);
  
  if (curiositySholdBeAutonomous(manual)) {
    selfDrive(curiosity);
  } else {
    manualDrive(curiosity, key);
  }
}

/**
   Check if the user pressed a button
*/

int readKey()
{
  int state = 0;
  if (Serial.available() > 0)
  {
    state = Serial.read();
  }
  return state;
}

void changeState(int &manual, int key)
{
  if (key < 20) {
    return;
  }
  if (key == 'i') {
    manual = 0;
  } else {
    manual = 1;
  }
  return;
}

/**
   Checks if the user wanted curiosity to be autonomous
*/
boolean curiositySholdBeAutonomous(int manual)
{
  return (manual == 0);
}

void selfDrive(Vehicle curiosity)
{
  
  if(digitalRead(irSensor)==LOW)
  {
    curiosity.left();
  }
  else
  {
    curiosity.forward();
  }
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
