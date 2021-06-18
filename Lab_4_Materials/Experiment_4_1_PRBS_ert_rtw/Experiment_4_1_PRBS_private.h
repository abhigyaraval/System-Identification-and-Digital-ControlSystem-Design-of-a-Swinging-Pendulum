/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_PRBS_private.h
 *
 * Code generated for Simulink model 'Experiment_4_1_PRBS'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Sat Apr 25 15:28:48 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Experiment_4_1_PRBS_private_h_
#define RTW_HEADER_Experiment_4_1_PRBS_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern void ADC12bit_Outputs_wrapper(int16_T *output,
  const real_T *xD,
  const int8_T *ADCNumber, const int_T p_width0);
extern void ADC12bit_Update_wrapper(int16_T *output,
  real_T *xD,
  const int8_T *ADCNumber, const int_T p_width0);
extern void DAC12bit_Outputs_wrapper(const int16_T *DACInput,
  const real_T *xD,
  const int8_T *DACNumber, const int_T p_width0);
extern void DAC12bit_Update_wrapper(const int16_T *DACInput,
  real_T *xD,
  const int8_T *DACNumber, const int_T p_width0);

#endif                                 /* RTW_HEADER_Experiment_4_1_PRBS_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
