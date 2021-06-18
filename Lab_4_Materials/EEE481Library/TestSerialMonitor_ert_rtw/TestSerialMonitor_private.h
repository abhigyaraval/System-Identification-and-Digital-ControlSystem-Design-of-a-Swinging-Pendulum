/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestSerialMonitor_private.h
 *
 * Code generated for Simulink model 'TestSerialMonitor'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Dec 26 13:03:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TestSerialMonitor_private_h_
#define RTW_HEADER_TestSerialMonitor_private_h_
#include "rtwtypes.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

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

#endif                                 /* RTW_HEADER_TestSerialMonitor_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
