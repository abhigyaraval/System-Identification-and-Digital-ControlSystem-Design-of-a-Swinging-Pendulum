/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Temp_controlPlantTest_private.h
 *
 * Code generated for Simulink model 'Temp_controlPlantTest'.
 *
 * Model version                  : 1.98
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 05 12:56:59 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Temp_controlPlantTest_private_h_
#define RTW_HEADER_Temp_controlPlantTest_private_h_
#include "rtwtypes.h"

extern void SerialOut_Outputs_wrapper(const real32_T *input,
  const real_T *xD,
  const int8_T *SerialNumber, const int_T p_width0);
extern void SerialOut_Update_wrapper(const real32_T *input,
  real_T *xD,
  const int8_T *SerialNumber, const int_T p_width0);
extern void PWMRead_Outputs_wrapper(int16_T *PWMValue,
  const real_T *xD);
extern void PWMRead_Update_wrapper(int16_T *PWMValue,
  real_T *xD);
extern void SerialMonitorOut9_Outputs_wrapper(const real32_T *input,
  real32_T *out,
  const real_T *xD,
  const int8_T *SerialNumber, const int_T p_width0,
  const int8_T *rcvFrmMonRate, const int_T p_width1);
extern void SerialMonitorOut9_Update_wrapper(const real32_T *input,
  real32_T *out,
  real_T *xD,
  const int8_T *SerialNumber, const int_T p_width0,
  const int8_T *rcvFrmMonRate, const int_T p_width1);

#endif                                 /* RTW_HEADER_Temp_controlPlantTest_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
