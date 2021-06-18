

/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
# ifndef MATLAB_MEX_FILE
# include <Arduino.h>
# include "Wire.h"
# include "Wire.cpp"
#define  SLAVE_ADDRESS         0x29  //slave address, any number from 0x01 to 0x7F


#define  MAX_SENT_BYTES       2
byte receivedBytes[MAX_SENT_BYTES];
extern "C" void receiveEvent(int bytesReceived);
# endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output functions
 *
 */
extern "C" void DACI2C1_Outputs_wrapper(const real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */

extern "C" void DACI2C1_Update_wrapper(real_T *xD)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/

# ifndef MATLAB_MEX_FILE
if(xD[0]==0)
{
     Wire.begin(SLAVE_ADDRESS); 

     //Wire.onRequest(requestEvent);
  analogWriteResolution(12);
     Wire.onReceive(receiveEvent);
   
}



# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

extern "C" void receiveEvent(int bytesReceived)

{
# ifndef MATLAB_MEX_FILE
     for (int a = 0; a < bytesReceived; a++)

     {

          if ( a < MAX_SENT_BYTES)

          {

               receivedBytes[a] = Wire.read();

          }

          else

          {

               Wire.read();  // if we receive more data then allowed just throw it away

          }

     }
     
long DACRAWValue=0;
DACRAWValue |= receivedBytes[0];
	DACRAWValue <<= 4;
     byte byte2=receivedBytes[1]>>4;
	DACRAWValue |= byte2;
  analogWrite(DAC0, (int)DACRAWValue);
//Serial.println(DACRAWValue);
////Serial.println(receivedBytes[0]);
////Serial.println(receivedBytes[1]);
////Serial.println(byte2);
//
  

# endif
}


