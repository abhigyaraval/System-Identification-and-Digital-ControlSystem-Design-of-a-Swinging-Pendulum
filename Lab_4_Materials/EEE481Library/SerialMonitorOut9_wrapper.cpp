

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
#define u_width 9
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
extern "C" void SerialMonitorOut9_Outputs_wrapper(const real32_T *input,
			real32_T *out,
			const real_T *xD,
			const int8_T  *SerialNumber, const int_T  p_width0,
			const int8_T  *rcvFrmMonRate, const int_T  p_width1)
{


# ifndef MATLAB_MEX_FILE

    out[0]=xD[1];
    out[1]=xD[2];
    out[2]=xD[3];

# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void SerialMonitorOut9_Update_wrapper(const real32_T *input,
			const real32_T *out,
			real_T *xD,
			const int8_T  *SerialNumber,  const int_T  p_width0,
			const int8_T  *rcvFrmMonRate,  const int_T  p_width1)
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

String str="";

for (int index=0;index<u_width;index++)
{
    
real32_T val=input[index];
str=str+String(val,4);//[0]);
if(index!=u_width-1)
str=str+",";
}
Serial.print(str+"\r");
xD[0]=xD[0]+1;
if(xD[0]==(*rcvFrmMonRate)+1)
{
float out1[3];
String inString = ""; 
int index=0;
int flag = 0;
if(Serial.available()>5){ 
    while(Serial.read()!='B'){
    }
        
          out1[0] = Serial.parseFloat();
          Serial.read();
          out1[1] = Serial.parseFloat();
          Serial.read();
          out1[2] = Serial.parseFloat();
          if(Serial.read()=='E')
             flag=1;     
}
if(flag==1)
{
   xD[1]=out1[0] ; 
   xD[2]=out1[1] ; 
   xD[3]=out1[2] ; 
}
xD[0]=1;
}
# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
