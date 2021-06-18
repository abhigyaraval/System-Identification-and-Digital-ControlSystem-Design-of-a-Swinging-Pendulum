/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPOTTestBkp.h
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

#ifndef RTW_HEADER_SPIPOTTestBkp_h_
#define RTW_HEADER_SPIPOTTestBkp_h_
#include <stddef.h>
#include <string.h>
#ifndef SPIPOTTestBkp_COMMON_INCLUDES_
# define SPIPOTTestBkp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SPIPOTTestBkp_COMMON_INCLUDES_ */

#include "SPIPOTTestBkp_types.h"
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
  real_T SFunction2_DSTATE;            /* '<Root>/S-Function2' */
} DW_SPIPOTTestBkp_T;

/* Parameters (auto storage) */
struct P_SPIPOTTestBkp_T_ {
  int8_T SFunction2_P1;                /* Expression: int8(7)
                                        * Referenced by: '<Root>/S-Function2'
                                        */
  int8_T SFunction2_P2;                /* Expression: int8(53)
                                        * Referenced by: '<Root>/S-Function2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SPIPOTTestBkp_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_SPIPOTTestBkp_T SPIPOTTestBkp_P;

/* Block states (auto storage) */
extern DW_SPIPOTTestBkp_T SPIPOTTestBkp_DW;

/* External data declarations for dependent source files */
extern const uint8_T SPIPOTTestBkp_U8GND;/* uint8_T ground */

/* Model entry point functions */
extern void SPIPOTTestBkp_initialize(void);
extern void SPIPOTTestBkp_step(void);
extern void SPIPOTTestBkp_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SPIPOTTestBkp_T *const SPIPOTTestBkp_M;

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
 * '<Root>' : 'SPIPOTTestBkp'
 */
#endif                                 /* RTW_HEADER_SPIPOTTestBkp_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
