/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPOTTest_private.h
 *
 * Code generated for Simulink model 'SPIPOTTest'.
 *
 * Model version                  : 1.97
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 10:44:30 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SPIPOTTest_private_h_
#define RTW_HEADER_SPIPOTTest_private_h_
#include "rtwtypes.h"

extern void SPIPot_Outputs_wrapper(const uint8_T *PotLevel,
  const uint8_T *PotAddress,
  const real_T *xD,
  const int8_T *CS, const int_T p_width0);
extern void SPIPot_Update_wrapper(const uint8_T *PotLevel,
  const uint8_T *PotAddress,
  real_T *xD,
  const int8_T *CS, const int_T p_width0);

#endif                                 /* RTW_HEADER_SPIPOTTest_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
