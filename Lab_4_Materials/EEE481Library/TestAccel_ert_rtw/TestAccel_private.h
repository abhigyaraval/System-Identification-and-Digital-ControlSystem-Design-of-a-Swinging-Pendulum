/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestAccel_private.h
 *
 * Code generated for Simulink model 'TestAccel'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 09 10:48:08 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TestAccel_private_h_
#define RTW_HEADER_TestAccel_private_h_
#include "rtwtypes.h"

extern void LIS3DHAccelerometer1_Outputs_wrapper(real_T *AccX,
  real_T *AccY,
  real_T *AccZ,
  const real_T *xD,
  const int8_T *CS, const int_T p_width0,
  const int8_T *Range, const int_T p_width1);
extern void LIS3DHAccelerometer1_Update_wrapper(real_T *AccX,
  real_T *AccY,
  real_T *AccZ,
  real_T *xD,
  const int8_T *CS, const int_T p_width0,
  const int8_T *Range, const int_T p_width1);

#endif                                 /* RTW_HEADER_TestAccel_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
