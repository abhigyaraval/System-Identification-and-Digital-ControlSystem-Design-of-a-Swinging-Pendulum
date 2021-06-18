

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
# include "Wire.h"
#include "Adafruit_LIS3DH1.h"
//#include "Adafruit_LIS3DH1.cpp"
//Adafruit_LIS3DH lis ;
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
extern "C" void LIS3DHAccelerometer1_Outputs_wrapper(real_T *AccX,
			real_T *AccY,
			real_T *AccZ,
			const real_T *xD,
			const int8_T  *CS, const int_T  p_width0,
			const int8_T  *Range, const int_T  p_width1)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
# ifndef MATLAB_MEX_FILE
     if(xD[0]==1)
     {
   Serial.println("Onside if");
  accelerometer.read();
     AccX[0]=accelerometer.x_g;
  AccY[0]=accelerometer.y_g;
    AccZ[0]=accelerometer.z_g;
//       Serial.print("\t\tX: "); 
// Serial.print(AccX[0] );
//    Serial.print(" , "); 
//    Serial.print(" \tY: "); 
//   Serial.print(AccY[0]); 
//    Serial.print(" , "); 
// Serial.print(" \tZ: "); 
//  Serial.print(AccZ[0]); 
//    Serial.print(" \n"); 
    }
//      sensors_event_t event; 
//   accelerometer.getEvent(&event);


# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
extern "C" void LIS3DHAccelerometer1_Update_wrapper(real_T *AccX,
			real_T *AccY,
			real_T *AccZ,
			real_T *xD,
			const int8_T  *CS,  const int_T  p_width0,
			const int8_T  *Range,  const int_T  p_width1)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/


if(xD[0]==0){
	# ifndef MATLAB_MEX_FILE
    
    
//    Serial.begin(9600);
//    // Serial.println("Hi");
//      // Serial.println(xD[0]);
//       Serial.println("LIS3DH test!");
//    accelerometer.assignCS(53);
//   
//   if (! accelerometer.begin()) {   // change this to 0x19 for alternative i2c address
//     Serial.println("Couldnt start");
//   xD[0]=2;
//   }   
//   else
//   {
//     
//   Serial.println("LIS3DH found!");
//   // Serial.println("LIS3DH found!");
// //   
//   accelerometer.setRange(LIS3DH_RANGE_4_G);   // 2, 4, 8 or 16 G!
// //   
//   Serial.print("Range = "); Serial.print(2 << accelerometer.getRange());  
//   Serial.println("G");
  
         // Serial.println(xD[0]);
  
//  }

  Serial.begin(9600);
  Serial.println("LIS3DH test!");
  accelerometer.assignCS(53);
  if (! accelerometer.begin(0x19)) {   // change this to 0x19 for alternative i2c address
    Serial.println("Couldnt start");
    while (1);
  }
  Serial.println("LIS3DH found!");
  
  accelerometer.setRange(LIS3DH_RANGE_4_G);   // 2, 4, 8 or 16 G!
  
  Serial.print("Range = "); Serial.print(2 << accelerometer.getRange());  
  Serial.println("G");
# endif
	xD[0]=1;
}
Serial.println(accelerometer.x_g);
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
