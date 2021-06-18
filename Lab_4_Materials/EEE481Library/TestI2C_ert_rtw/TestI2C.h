/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestI2C.h
 *
 * Code generated for Simulink model 'TestI2C'.
 *
 * Model version                  : 1.74
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 14:36:11 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TestI2C_h_
#define RTW_HEADER_TestI2C_h_
#include <stddef.h>
#include <string.h>
#ifndef TestI2C_COMMON_INCLUDES_
# define TestI2C_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* TestI2C_COMMON_INCLUDES_ */

#include "TestI2C_types.h"
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
  real_T SFunctionBuilder12_DSTATE;    /* '<S1>/S-Function Builder12' */
} DW_TestI2C_T;

/* Real-time Model Data Structure */
struct tag_RTM_TestI2C_T {
  const char_T *errorStatus;
};

/* Block states (auto storage) */
extern DW_TestI2C_T TestI2C_DW;

/* Model entry point functions */
extern void TestI2C_initialize(void);
extern void TestI2C_step(void);
extern void TestI2C_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TestI2C_T *const TestI2C_M;

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
 * '<Root>' : 'TestI2C'
 * '<S1>'   : 'TestI2C/Subsystem2'
 */
#endif                                 /* RTW_HEADER_TestI2C_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
