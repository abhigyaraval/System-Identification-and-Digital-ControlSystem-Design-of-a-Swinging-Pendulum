/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPOTTestBkp_private.h
 *
 * Code generated for Simulink model 'SPIPOTTestBkp'.
 *
 * Model version                  : 1.96
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 22 13:24:08 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SPIPOTTestBkp_private_h_
#define RTW_HEADER_SPIPOTTestBkp_private_h_
#include "rtwtypes.h"

extern void SPIOut2_Outputs_wrapper(const uint8_T *input1,
  const uint8_T *input2,
  const real_T *xD,
  const int8_T *ADCNumber, const int_T p_width0,
  const int8_T *CS, const int_T p_width1);
extern void SPIOut2_Update_wrapper(const uint8_T *input1,
  const uint8_T *input2,
  real_T *xD,
  const int8_T *ADCNumber, const int_T p_width0,
  const int8_T *CS, const int_T p_width1);

#endif                                 /* RTW_HEADER_SPIPOTTestBkp_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
