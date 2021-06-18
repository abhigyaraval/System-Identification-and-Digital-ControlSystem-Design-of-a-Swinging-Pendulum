/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Exp4_1_SerialB.h
 *
 * Code generated for Simulink model 'Exp4_1_SerialB'.
 *
 * Model version                  : 1.156
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Oct 21 12:42:26 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Exp4_1_SerialB_h_
#define RTW_HEADER_Exp4_1_SerialB_h_
#include <stddef.h>
#include <string.h>
#ifndef Exp4_1_SerialB_COMMON_INCLUDES_
# define Exp4_1_SerialB_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Exp4_1_SerialB_COMMON_INCLUDES_ */

#include "Exp4_1_SerialB_types.h"
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
  real32_T SFunction;                  /* '<S1>/S-Function' */
  real32_T DataTypeConversion1;        /* '<S2>/Data Type Conversion1' */
  real32_T UnitDelay[9];               /* '<S3>/Unit Delay' */
  real32_T SFunction_g[3];             /* '<S3>/S-Function' */
} B_Exp4_1_SerialB_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunction_DSTATE;             /* '<S1>/S-Function' */
  real_T SFunction_DSTATE_d;           /* '<S2>/S-Function' */
  real_T SFunction_DSTATE_f[4];        /* '<S3>/S-Function' */
  real32_T UnitDelay_DSTATE[9];        /* '<S3>/Unit Delay' */
} DW_Exp4_1_SerialB_T;

/* Parameters (auto storage) */
struct P_Exp4_1_SerialB_T_ {
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  int8_T SFunction_P1;                 /* Expression: int8(serialNum)
                                        * Referenced by: '<S1>/S-Function'
                                        */
  int8_T SFunction_P1_p;               /* Expression: int8(serialNum)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  int8_T SFunction_P1_j;               /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Exp4_1_SerialB_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Exp4_1_SerialB_T Exp4_1_SerialB_P;

/* Block signals (auto storage) */
extern B_Exp4_1_SerialB_T Exp4_1_SerialB_B;

/* Block states (auto storage) */
extern DW_Exp4_1_SerialB_T Exp4_1_SerialB_DW;

/* Model entry point functions */
extern void Exp4_1_SerialB_initialize(void);
extern void Exp4_1_SerialB_step(void);
extern void Exp4_1_SerialB_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Exp4_1_SerialB_T *const Exp4_1_SerialB_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Data Type Conversion2' : Unused code path elimination
 */

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
 * '<Root>' : 'Exp4_1_SerialB'
 * '<S1>'   : 'Exp4_1_SerialB/SerialRead1'
 * '<S2>'   : 'Exp4_1_SerialB/SerialWrite'
 * '<S3>'   : 'Exp4_1_SerialB/Subsystem'
 */
#endif                                 /* RTW_HEADER_Exp4_1_SerialB_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
