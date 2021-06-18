/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pHSystem.h
 *
 * Code generated for Simulink model 'pHSystem'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Dec 18 14:37:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_pHSystem_h_
#define RTW_HEADER_pHSystem_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef pHSystem_COMMON_INCLUDES_
# define pHSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* pHSystem_COMMON_INCLUDES_ */

#include "pHSystem_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Sum;                          /* '<Root>/Sum' */
  real_T Quantizer;                    /* '<Root>/Quantizer' */
} B_pHSystem_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  real_T SFunction_DSTATE;             /* '<Root>/S-Function' */
  real_T NextOutput;                   /* '<Root>/Random Number' */
  uint32_T RandSeed;                   /* '<Root>/Random Number' */
} DW_pHSystem_T;

/* Parameters (auto storage) */
struct P_pHSystem_T_ {
  real_T RepeatingSequence_rep_seq_y[2];/* Mask Parameter: RepeatingSequence_rep_seq_y
                                         * Referenced by: '<S1>/Look-Up Table1'
                                         */
  real_T Constant_Value;               /* Expression: period
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T LookUpTable1_bp01Data[2];     /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S1>/Look-Up Table1'
                                        */
  real_T RandomNumber_Mean;            /* Expression: 0
                                        * Referenced by: '<Root>/Random Number'
                                        */
  real_T RandomNumber_StdDev;          /* Computed Parameter: RandomNumber_StdDev
                                        * Referenced by: '<Root>/Random Number'
                                        */
  real_T RandomNumber_Seed;            /* Expression: 0
                                        * Referenced by: '<Root>/Random Number'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 6+2*rand
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T Quantizer_Interval;           /* Expression: 0.04
                                        * Referenced by: '<Root>/Quantizer'
                                        */
  int8_T SFunction_P1;                 /* Expression: int8(2)
                                        * Referenced by: '<Root>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pHSystem_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_pHSystem_T pHSystem_P;

/* Block signals (auto storage) */
extern B_pHSystem_T pHSystem_B;

/* Block states (auto storage) */
extern DW_pHSystem_T pHSystem_DW;

/* Model entry point functions */
extern void pHSystem_initialize(void);
extern void pHSystem_step(void);
extern void pHSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_pHSystem_T *const pHSystem_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Output' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'pHSystem'
 * '<S1>'   : 'pHSystem/Repeating Sequence'
 */
#endif                                 /* RTW_HEADER_pHSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
