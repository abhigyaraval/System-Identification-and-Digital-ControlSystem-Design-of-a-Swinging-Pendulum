

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
HardwareSerial *port;

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
extern "C" void pHSensor_Outputs_wrapper(const real32_T *pHVal,
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
// float out1[3];
// String inString = ""; 
// int index=0;
// int flag = 0;
// if(Serial.available()>5){ 
//     while(Serial.read()!='B'){
//     }
//         
//           out1[0] = Serial.parseFloat();
//           Serial.read();
//           out1[1] = Serial.parseFloat();
//           Serial.read();
//           out1[2] = Serial.parseFloat();
//              flag=1;     
// }// if(Serial.available()>5)
// else
// // {
//     out[0]=xD[1];
//     out[1]=xD[2];
//     out[2]=xD[3];
// }

/* rakesh's code */

// String inString = ""; 
// int index=0;
// if(Serial.available()>12)
// {
//   while (Serial.available() > 0) {
//     int inChar = Serial.read();
//       if (inChar != '\n') { 
// 
//         if (inChar != ',')
//         {
//       inString += (char)inChar;
//         }
//         else
//         {
//         out[index]=inString.toFloat();
//         inString="";
//         index++;
//         }
//     }
//     else
//     {
//    
//     out[index]=inString.toFloat();
//     break;
//     }
//   }
// }



//out[0]=Serial.available();
// if(Serial.available()>2)
// {
// out[0]=Serial.parseFloat();
// }
// else
// {
//     out[0]=0;
// }
// out[0]=1234.12;
// if(Serial.available()>3)
// {
// String str1=Serial.readStringUntil(',');
// out[0]=str1.toFloat(); 
// String str2=Serial.readStringUntil(',');
// out[1]=str2.toFloat();
// 
// out[2]=Serial.parseFloat();
// }
// else
// {
//     out[0]=0;
// out[1]=0;
// out[2]=0;
//     
// }
# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void pHSensor_Update_wrapper(const real32_T *pHVal,
			real_T *xD,
			const int8_T  *SerialNumber,  const int_T  p_width0)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/
# ifndef MATLAB_MEX_FILE
if(xD[0]==0)
{
  Serial.println("inside if");
   if(SerialNumber[0]==1)
       port=&Serial1;
   if(SerialNumber[0]==2)
       port=&Serial2;  
    if(SerialNumber[0]==3)
       port=&Serial3;     
        
       
port->begin(9600);
xD[0]=10;
}

String command=""; 

 // port=&Serial1;
int noOfChars=port->available();
Serial.println(noOfChars);
for (int index=0;index<noOfChars;index++)
{
    char nextChar=port->read();
    if(nextChar!='\r')
     {
        command=command+ nextChar;
      }
     else
      {
        break;
       }
            
}
if(noOfChars>1)
Serial.println(command);

int flag=0;
if (command.equals("C,1"))
{
    xD[0]=1;
}
if (command.equals("C,0"))
    flag=10;
if (command.equals("R"))
    flag=2;

if(xD[0]==1||flag==2)
{
    String pHString=String(*pHVal,2)+"\r";
    port->print(pHString);

   
}
if(flag==10)
{
  xD[0]=10;
}


# endif
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
