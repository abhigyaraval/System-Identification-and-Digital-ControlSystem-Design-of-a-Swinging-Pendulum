

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

# endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define y_width 1
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
void ADC12bit_Outputs_wrapper(int16_T *output,
			const real_T *xD,
			const int8_T  *ADCNumber, const int_T  p_width0)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/
# ifndef MATLAB_MEX_FILE
     if(ADCNumber[0]==0)
     output[0]=analogRead(A0);
    if(ADCNumber[0]==1)
     output[0]=analogRead(A1);
     if(ADCNumber[0]==2)
     output[0]=analogRead(A2);
     if(ADCNumber[0]==3)
     output[0]=analogRead(A3);
     if(ADCNumber[0]==4)
     output[0]=analogRead(A4);
     if(ADCNumber[0]==5)
     output[0]=analogRead(A5);
     if(ADCNumber[0]==6)
    output[0]=analogRead(A6);
     if(ADCNumber[0]==7)
     output[0]=analogRead(A7);
     if(ADCNumber[0]==8)
     output[0]=analogRead(A8);
     if(ADCNumber[0]==9)
     output[0]=analogRead(A9);
      if(ADCNumber[0]==10)
     output[0]=analogRead(A10);
      if(ADCNumber[0]==11)
      output[0]=analogRead(A11);
  
# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
void ADC12bit_Update_wrapper(int16_T *output,
			real_T *xD,
			const int8_T  *ADCNumber,  const int_T  p_width0)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/
# ifndef MATLAB_MEX_FILE

if( xD[0]==0)
{
analogReadResolution(12);
}
# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
