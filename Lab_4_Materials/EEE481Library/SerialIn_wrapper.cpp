

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
extern "C" void SerialIn_Outputs_wrapper(real32_T *Out,
			const real_T *xD,
			const int8_T  *SerialNumber, const int_T  p_width0)
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

if(*SerialNumber==1)
Out[0]=Serial1.parseFloat();
if(*SerialNumber==2)
{
      int val=Serial2.available();
  //   Serial.println(val);
Out[0]=Serial2.parseFloat();
//Serial.println(Out[0]);
}
if(*SerialNumber==3)
{
    int val=Serial3.available();
     Serial.println(val);
Out[0]=Serial3.parseFloat();
}

# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void SerialIn_Update_wrapper(real32_T *Out,
			real_T *xD,
			const int8_T  *SerialNumber,  const int_T  p_width0)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/
# ifndef MATLAB_MEX_FILE
if( xD[0]==0)
{
  //  Serial.begin(9600);
    if(*SerialNumber==0)
Serial1.begin(115200);
    if(*SerialNumber==1)
Serial1.begin(115200);
     
     if(*SerialNumber==2)
Serial2.begin(115200);
     
     if(*SerialNumber==3)
Serial3.begin(115200);
xD[0]=1;
}


# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
