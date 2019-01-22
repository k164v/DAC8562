/*
 * Simple example of using DAC8562 library for Arduino 
 *
 * For arduino UNO, data = pin 11, clock = pin 13
 *
 * You can define your Slave Select pin using the DAC8562 construction 
 * as showed in the example below
 *
 * inspired by @machinesalem  
 *
 * 2018-07-24 @km7,  (cc) https://creativecommons.org/licenses/by/3.0/
 *
 * @auther km7
 */

#include <DAC8562.h>

//This power is for referencing
//In case you do not have a pefect 5 volt power supply.
#define REF_POWER 5
#define SS_PIN 10


//Initialize the DAC object
DAC8562 dac=DAC8562(SS_PIN,REF_POWER);

void setup() {
  dac.begin();
}

void loop() {
  //Use these functions to update two channels of the DAC
  dac.writeA(-5);
  dac.writeB(+5);
}
