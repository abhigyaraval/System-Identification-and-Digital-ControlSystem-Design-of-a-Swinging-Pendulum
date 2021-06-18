

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
extern "C" void SerialOut_Outputs_wrapper(const real32_T *input,
			const real_T *xD,
			const int8_T  *SerialNumber, const int_T  p_width0)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
 
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void SerialOut_Update_wrapper(const real32_T *input,
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
    // Serial.begin(9600);
     if(*SerialNumber==1)
Serial1.begin(115200);
     
     if(*SerialNumber==2)
Serial2.begin(115200);
     
     if(*SerialNumber==3)
Serial3.begin(115200);
     
xD[0]=1;
}
      if(*SerialNumber==1)
Serial1.println(input[0]);
     
     if(*SerialNumber==2)
     {
        // Serial.println("inside if");
       //  Serial.println(input[0]);
Serial2.println(input[0]);
     }
     
     if(*SerialNumber==3)
Serial3.println(input[0]);

# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
