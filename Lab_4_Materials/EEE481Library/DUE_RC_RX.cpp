// These bit flags are set in bUpdateFlagsShared to indicate which
// channels have new signals
#include "DUE_RC_RX.h"
#include <Arduino.h>

// Assign your channel in pins

#define CHANNEL1_IN_PIN 2
#define CHANNEL2_IN_PIN 3
#define CHANNEL3_IN_PIN 19
#define CHANNEL4_IN_PIN 18
#define CHANNEL5_IN_PIN 10
#define CHANNEL6_IN_PIN 42
//#define CHANNEL6_IN_PIN 17
//#define CHANNEL6_IN_PIN 18

// These bit flags are set in bUpdateFlagsShared to indicate which
// channels have new signals
#define CHANNEL1_FLAG 1
#define CHANNEL2_FLAG 2
#define CHANNEL3_FLAG 4
#define CHANNEL4_FLAG 8
#define CHANNEL5_FLAG 16
#define CHANNEL6_FLAG 32
#define CHANNEL7_FLAG 64
#define CHANNEL8_FLAG 128

// holds the update flags defined above
volatile uint32_t bUpdateFlagsShared;volatile uint32_t unChannel1InShared;

// shared variables are updated by the ISR and read by loop.
// In loop we immediatley take local copies so that the ISR can keep ownership of the
// shared ones. To access these in loop
// we first turn interrupts off with noInterrupts
// we take a copy to use in loop and the turn interrupts back on
// as quickly as possible, this ensures that we are always able to receive new signals
volatile uint32_t unChannel2InShared;
volatile uint32_t unChannel3InShared;
volatile uint32_t unChannel4InShared;
volatile uint32_t unChannel5InShared;
volatile uint32_t unChannel6InShared;
volatile uint32_t unChannel7InShared;
volatile uint32_t unChannel8InShared;

unsigned int unChannel1In;
unsigned int unChannel2In;
unsigned int unChannel3In;
unsigned int unChannel4In;
unsigned int unChannel5In;
unsigned int unChannel6In;
unsigned int unChannel7In;
unsigned int unChannel8In;

void calcChannel1()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL1_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel1InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL1_FLAG;
  }
}

void calcChannel2()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL2_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel2InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL2_FLAG;
  }
}

void calcChannel3()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL3_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel3InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL3_FLAG;
  }
}

void calcChannel4()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL4_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel4InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL4_FLAG;
  }
}

void calcChannel5()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL5_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel5InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL5_FLAG;
  }
}

#ifdef CHANNEL6_IN_PIN
void calcChannel6()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL6_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel6InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL6_FLAG;
  }
}
#endif

#ifdef CHANNEL7_IN_PIN
void calcChannel7()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL7_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel7InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL7_FLAG;
  }
}
#endif

#ifdef CHANNEL8_IN_PIN
void calcChannel8()
{
  static uint32_t ulStart;
 
  if(digitalRead(CHANNEL8_IN_PIN))
  {
    ulStart = micros();
  }
  else
  {
    unChannel8InShared = (uint32_t)(micros() - ulStart);
    bUpdateFlagsShared |= CHANNEL8_FLAG;
  }
}
#endif

void init_rc_rx_channels(){
  // attach the interrupts used to read the channels
  attachInterrupt(CHANNEL1_IN_PIN, calcChannel1,CHANGE);
  attachInterrupt(CHANNEL2_IN_PIN, calcChannel2,CHANGE);
  attachInterrupt(CHANNEL3_IN_PIN, calcChannel3,CHANGE);
  attachInterrupt(CHANNEL4_IN_PIN, calcChannel4,CHANGE);
  attachInterrupt(CHANNEL5_IN_PIN, calcChannel5,CHANGE);
#ifdef CHANNEL6_IN_PIN
  attachInterrupt(CHANNEL6_IN_PIN, calcChannel6,CHANGE);
#endif  
  
#ifdef CHANNEL7_IN_PIN
  attachInterrupt(CHANNEL7_IN_PIN, calcChannel7,CHANGE);
#endif

#ifdef CHANNEL8_IN_PIN
  attachInterrupt(CHANNEL8_IN_PIN, calcChannel8,CHANGE);
#endif
}

void read_rc_channels(){
  // create local variables to hold a local copies of the channel inputs
  // these are declared static so that thier values will be retained
  // between calls to loop.
/*
  static uint32_t unChannel1In;
  static uint32_t unChannel2In;
  static uint32_t unChannel3In;
  static uint32_t unChannel4In;
  static uint32_t unChannel5In;
  static uint32_t unChannel6In;
  static uint32_t unChannel7In;
  static uint32_t unChannel8In;
*/ 
  // local copy of update flags
  static uint32_t bUpdateFlags;

  // check shared update flags to see if any channels have a new signal
  if(bUpdateFlagsShared)
  {
    noInterrupts(); // turn interrupts off quickly while we take local copies of the shared variables

    // take a local copy of which channels were updated in case we need to use this in the rest of loop
    bUpdateFlags = bUpdateFlagsShared;
  
    // in the current code, the shared values are always populated
    // so we could copy them without testing the flags
    // however in the future this could change, so lets
    // only copy when the flags tell us we can.
  
    if(bUpdateFlags & CHANNEL1_FLAG)
    {
      unChannel1In = (unsigned int)unChannel1InShared;
    }
  
    if(bUpdateFlags & CHANNEL2_FLAG)
    {
      unChannel2In = (unsigned int)unChannel2InShared;
    }
  
    if(bUpdateFlags & CHANNEL3_FLAG)
    {
      unChannel3In = (unsigned int)unChannel3InShared;
    }
   
    if(bUpdateFlags & CHANNEL4_FLAG)
    {
      unChannel4In = (unsigned int)unChannel4InShared;
    }
  
    if(bUpdateFlags & CHANNEL5_FLAG)
    {
      unChannel5In = (unsigned int)unChannel5InShared;
    }
  
    if(bUpdateFlags & CHANNEL6_FLAG)
    {
      unChannel6In = (unsigned int)unChannel6InShared;
    }
   
    if(bUpdateFlags & CHANNEL7_FLAG)
    {
      unChannel7In = (unsigned int)unChannel7InShared;
    }
  
    if(bUpdateFlags & CHANNEL8_FLAG)
    {
      unChannel8In = (unsigned int)unChannel8InShared;
    }
    // clear shared copy of updated flags as we have already taken the updates
    // we still have a local copy if we need to use it in bUpdateFlags
    bUpdateFlagsShared = 0;
  
    interrupts(); // we have local copies of the inputs, so now we can turn interrupts back on
    // as soon as interrupts are back on, we can no longer use the shared copies, the interrupt
    // service routines own these and could update them at any time. During the update, the
    // shared copies may contain junk. Luckily we have our local copies to work with :-)
  }
  
    bUpdateFlags = 0;
}
