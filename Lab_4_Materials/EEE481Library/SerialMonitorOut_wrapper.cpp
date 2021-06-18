

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
#define u_width 3
#define y_width 
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
extern "C" void SerialMonitorOut_Outputs_wrapper(const real32_T *input,
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



# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void SerialMonitorOut_Update_wrapper(const real32_T *input,
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
Serial.begin(115200);
xD[0]=1;
}

//Serial.prinln(arrayLength);
String str="";
for (int index=0;index<u_width;index++)
{
    float val=input[index];
//     int numOfDecimals=2;
//      float decPartFloat=val-(int)val;
//   if (decPartFloat<0)
//   decPartFloat=-decPartFloat;
// String decPart="";
// long multi=10;
// for (int i=0;i<numOfDecimals;i++)
// {
//   int temp1=decPartFloat*multi;
//   int temp2=temp1%10;
//   decPart=decPart+temp2;
//   multi=multi*10;
// }
// String intPart=String((int)val);
String finalVal=String(val, 4);//intPart+("."+(decPart));
//Serial.println(decPart);
//Serial.println(intPart);

str=str+finalVal;//[0]);
if(index!=u_width-1)
str=str+",";
//Serial.print(";");
}
Serial.print(str+"\r");
# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
