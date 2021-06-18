/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TempControlExperimentTest_private.h
 *
 * Code generated for Simulink model 'TempControlExperimentTest'.
 *
 * Model version                  : 1.75
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 05 15:25:55 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TempControlExperimentTest_private_h_
#define RTW_HEADER_TempControlExperimentTest_private_h_
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

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern void Pwm12BOut_Outputs_wrapper(const int16_T *input,
  const real_T *xD,
  const uint32_T *PwmPin, const int_T p_width0);
extern void Pwm12BOut_Update_wrapper(const int16_T *input,
  real_T *xD,
  const uint32_T *PwmPin, const int_T p_width0);
extern void SerialIn_Outputs_wrapper(real32_T *Out,
  const real_T *xD,
  const int8_T *SerialNumber, const int_T p_width0);
extern void SerialIn_Update_wrapper(real32_T *Out,
  real_T *xD,
  const int8_T *SerialNumber, const int_T p_width0);
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

#endif                                 /* RTW_HEADER_TempControlExperimentTest_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
