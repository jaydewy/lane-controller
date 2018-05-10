#define PINSENSOR_0 15
#define PINSENSOR_1 16
#define PINSENSOR_2 17
#define PINSENSOR_3 18
#define PINSENSOR_4 19
#define PBR_REG 9
#define PBR_CLK 7
#define PBR_LATCH 6

#include <Ethernet.h>


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

bool pinStates[5]; // Pins are defined below:

/*
 * PIN #
 * 0   1   2   3   4
 * 2               2
 *     3       3
 *         5
 */

// Checks the state of the pins after a ball is detected and stores them in the pinStates array.
// TRUE (1) means the pin is standing. FALSE (0) means the pin has fallen.
void readPinStates() {
  for(int i = 0, i < 5, i++) {
    
  }
}

// Resets all of the pins and sets the pinStates array to [1,1,1,1,1]
void setPins() {

}

// Considers the current pinStates, and only resets the pins currently standing.
void spotPins() {
  
}

// Brings the pins up to the rack and holds them there. pinStates 
void pinsUp() {
  
}

// After a ball is detected and the pinStates are read, this function sends the new pinStates to the scoring computer
void sendRollData() {
  
}

