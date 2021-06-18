

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

# include "Arduino.h"
# include "SPI.h"
# include "SPI.cpp"
# endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
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
extern "C" void SPIOut_Outputs_wrapper(const uint8_T *input1,
			const uint8_T *input2,
			const real_T *xD,
			const int8_T  *ADCNumber, const int_T  p_width0,
			const int8_T  *CS, const int_T  p_width1)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
 
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void SPIOut_Update_wrapper(const uint8_T *input1,
			const uint8_T *input2,
			real_T *xD,
			const int8_T  *ADCNumber,  const int_T  p_width0,
			const int8_T  *CS,  const int_T  p_width1)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/
# ifndef MATLAB_MEX_FILE

 if( xD[0]==0)
{
   pinMode(CS[0], OUTPUT);
//   // initialize SPI:
  SPI.begin();
  analogReadResolution(12);
  Serial.begin(9600);
      Serial.println("inside if");
xD[0]=1;
}
 
  //  digitalPotWrite(0x00, 0x0F);
   int val= analogRead(7); 
     digitalWrite(CS[0], LOW);
  //  send in the address and value via SPI:
  SPI.transfer(0x00);
  SPI.transfer( 0x0F);
  // take the SS pin high to de-select the chip:
  digitalWrite(CS[0], HIGH);
   Serial.println(val);
//   delay(100);
# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
