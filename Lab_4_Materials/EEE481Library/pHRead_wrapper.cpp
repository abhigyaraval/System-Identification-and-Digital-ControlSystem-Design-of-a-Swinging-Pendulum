

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
#define COMMAND_0 "C,0\r"
#define COMMAND_1 "C,1\r"
#define COMMAND_2 "R\r"
HardwareSerial *port;
# endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
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
extern "C" void pHRead_Outputs_wrapper(const int8_T *CommandNumber,
			const int8_T *TriggerCommand,
			real_T *pHValue,
			const real_T *xD,
			const int8_T  *SerialPortNumber, const int_T  p_width0)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
# ifndef MATLAB_MEX_FILE
pHValue[0]=xD[1];

 // port=&Serial1;

//Serial.println(command); 

# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void pHRead_Update_wrapper(const int8_T *CommandNumber,
			const int8_T *TriggerCommand,
			real_T *pHValue,
			real_T *xD,
			const int8_T  *SerialPortNumber,  const int_T  p_width0)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/


if(xD[0]!=1){
	# ifndef MATLAB_MEX_FILE
	     
      
   if(SerialPortNumber[0]==1)
       port=&Serial1;
   if(SerialPortNumber[0]==2)
       port=&Serial2;  
    if(SerialPortNumber[0]==3)
       port=&Serial3;     
        
       
port->begin(9600);
   
	# endif
	xD[0]=1;
   
}
	# ifndef MATLAB_MEX_FILE
if(TriggerCommand[0]==1)
{
    if(CommandNumber[0]==0)
        port->print(COMMAND_0);
    if(CommandNumber[0]==1)
        port->print(COMMAND_1);
    if(CommandNumber[0]==2)
        port->print(COMMAND_2);
}
String str="";
int noOfChars=port->available();
if(noOfChars>0)
{
for (int index=0;index<noOfChars;index++)
{
    char nextChar=port->read();
    if(nextChar!='\r')
     {
        str=str+ nextChar;
      }
     else
      {
        break;
       }
            
}
xD[1]=str.toFloat();


}

    	# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
