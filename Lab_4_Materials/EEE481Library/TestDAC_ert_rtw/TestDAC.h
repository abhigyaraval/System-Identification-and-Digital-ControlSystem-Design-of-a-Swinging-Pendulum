/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestDAC.h
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

#ifndef RTW_HEADER_TestDAC_h_
#define RTW_HEADER_TestDAC_h_
#include <stddef.h>
#include <string.h>
#ifndef TestDAC_COMMON_INCLUDES_
# define TestDAC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* TestDAC_COMMON_INCLUDES_ */

#include "TestDAC_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder9_DSTATE;     /* '<S1>/S-Function Builder9' */
} DW_TestDAC_T;

/* Parameters (auto storage) */
struct P_TestDAC_T_ {
  int16_T Constant_Value;              /* Expression: int16(4000)
                                        * Referenced by: '<Root>/Constant'
                                        */
  int8_T SFunctionBuilder9_P1;         /* Expression: int8(SlaveAdd)
                                        * Referenced by: '<S1>/S-Function Builder9'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_TestDAC_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_TestDAC_T TestDAC_P;

/* Block states (auto storage) */
extern DW_TestDAC_T TestDAC_DW;

/* Model entry point functions */
extern void TestDAC_initialize(void);
extern void TestDAC_step(void);
extern void TestDAC_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TestDAC_T *const TestDAC_M;

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
 * '<Root>' : 'TestDAC'
 * '<S1>'   : 'TestDAC/Subsystem3'
 */
#endif                                 /* RTW_HEADER_TestDAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
