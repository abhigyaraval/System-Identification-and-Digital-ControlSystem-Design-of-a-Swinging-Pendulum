

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
#include "Adafruit_LIS3DH.h"
#include "Adafruit_Sensor.h"
//Adafruit_LIS3DH lis ;
//HardwareSerial *port;
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
extern "C" void LIS3DHAccelerometer_Outputs_wrapper(real_T *AccX,
			real_T *AccY,
			real_T *AccZ,
			const real_T *xD,
			const int8_T  *CS, const int_T  p_width0,
			const int8_T  *Range, const int_T  p_width1)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
# ifndef MATLAB_MEX_FILE
//  sensors_event_t event; 
//   lis.getEvent(&event);
//   
//   /* Display the results (acceleration is measured in m/s^2) */
// 
//  AccX[0]=event.acceleration.x;
//   AccY[0]=event.acceleration.y;
//    AccZ[0]=event.acceleration.z;
//       Serial.print("\t\tX: "); 
// Serial.print(AccX[0] );
//    Serial.print(" , "); 
//    Serial.print(" \tY: "); 
//   Serial.print(AccY[0]); 
//    Serial.print(" , "); 
// Serial.print(" \tZ: "); 
//  Serial.print(AccZ[0]); 
//    Serial.print(" \n"); 

# endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */

extern "C" void LIS3DHAccelerometer_Update_wrapper(real_T *AccX,
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


if(xD[0]!=1){
	# ifndef MATLAB_MEX_FILE
    Serial.begin(9600);
   // Serial.println("Hi");
     // Serial.println(xD[0]);
      Serial.println("LIS3DH test!");
   accelerometer.assignCS(53);
  if (! accelerometer.begin(0x18)) {   // change this to 0x19 for alternative i2c address
    Serial.println("Couldnt start");
  xD[0]=2;
  }   
  else
  {
  Serial.println("LIS3DH found!");
  // Serial.println("LIS3DH found!");
  
  accelerometer.setRange(LIS3DH_RANGE_4_G);   // 2, 4, 8 or 16 G!
//   
   Serial.print("Range = "); Serial.print(2 << accelerometer.getRange());  
  Serial.println("G");
  	xD[0]=1;
      	xD[0]=1;
         	xD[0]=1;
          Serial.println(xD[0]);
  }
	# endif

   
}

/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
