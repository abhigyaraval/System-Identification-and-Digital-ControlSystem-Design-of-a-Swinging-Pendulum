/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestAccel.h
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

#ifndef RTW_HEADER_TestAccel_h_
#define RTW_HEADER_TestAccel_h_
#include <stddef.h>
#include <string.h>
#ifndef TestAccel_COMMON_INCLUDES_
# define TestAccel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* TestAccel_COMMON_INCLUDES_ */

#include "TestAccel_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T SFunctionBuilder9_o1;         /* '<Root>/S-Function Builder9' */
  real_T SFunctionBuilder9_o2;         /* '<Root>/S-Function Builder9' */
  real_T SFunctionBuilder9_o3;         /* '<Root>/S-Function Builder9' */
} B_TestAccel_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder9_DSTATE;     /* '<Root>/S-Function Builder9' */
} DW_TestAccel_T;

/* Parameters (auto storage) */
struct P_TestAccel_T_ {
  int8_T SFunctionBuilder9_P1;         /* Expression: int8(1)
                                        * Referenced by: '<Root>/S-Function Builder9'
                                        */
  int8_T SFunctionBuilder9_P2;         /* Expression: int8(1)
                                        * Referenced by: '<Root>/S-Function Builder9'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_TestAccel_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_TestAccel_T TestAccel_P;

/* Block signals (auto storage) */
extern B_TestAccel_T TestAccel_B;

/* Block states (auto storage) */
extern DW_TestAccel_T TestAccel_DW;

/* Model entry point functions */
extern void TestAccel_initialize(void);
extern void TestAccel_step(void);
extern void TestAccel_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TestAccel_T *const TestAccel_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TestAccel'
 * '<S1>'   : 'TestAccel/Subsystem'
 */
#endif                                 /* RTW_HEADER_TestAccel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
