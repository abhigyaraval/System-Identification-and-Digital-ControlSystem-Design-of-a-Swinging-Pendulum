/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestDAC_private.h
 *
 * Code generated for Simulink model 'TestDAC'.
 *
 * Model version                  : 1.78
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 14:52:06 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TestDAC_private_h_
#define RTW_HEADER_TestDAC_private_h_
#include "rtwtypes.h"

extern void DACI2CSend_Outputs_wrapper(const int16_T *DACValue,
  const real_T *xD,
  const int8_T *SlaveAddress, const int_T p_width0);
extern void DACI2CSend_Update_wrapper(const int16_T *DACValue,
  real_T *xD,
  const int8_T *SlaveAddress, const int_T p_width0);

#endif                                 /* RTW_HEADER_TestDAC_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
