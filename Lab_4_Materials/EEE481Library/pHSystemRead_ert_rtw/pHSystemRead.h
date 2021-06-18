/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pHSystemRead.h
 *
 * Code generated for Simulink model 'pHSystemRead'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Dec 28 14:39:59 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_pHSystemRead_h_
#define RTW_HEADER_pHSystemRead_h_
#include <string.h>
#include <stddef.h>
#ifndef pHSystemRead_COMMON_INCLUDES_
# define pHSystemRead_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* pHSystemRead_COMMON_INCLUDES_ */

#include "pHSystemRead_types.h"
#include "MW_target_hardware_resources.h"

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
  real_T SFunction3;                   /* '<S3>/S-Function3' */
  real32_T UnitDelay[9];               /* '<S2>/Unit Delay' */
  real32_T SFunction[3];               /* '<S2>/S-Function' */
  int8_T commandNumber;                /* '<Root>/MATLAB Function' */
  int8_T trigger;                      /* '<Root>/MATLAB Function' */
} B_pHSystemRead_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunction3_DSTATE[2];         /* '<S3>/S-Function3' */
  real_T SFunction_DSTATE[4];          /* '<S2>/S-Function' */
  real32_T UnitDelay_DSTATE[9];        /* '<S2>/Unit Delay' */
} DW_pHSystemRead_T;

/* Parameters (auto storage) */
struct P_pHSystemRead_T_ {
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  int8_T SFunction3_P1;                /* Expression: int8(PortNum)
                                        * Referenced by: '<S3>/S-Function3'
                                        */
  int8_T SFunction_P1;                 /* Expression: int8(0)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S2>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pHSystemRead_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_pHSystemRead_T pHSystemRead_P;

/* Block signals (auto storage) */
extern B_pHSystemRead_T pHSystemRead_B;

/* Block states (auto storage) */
extern DW_pHSystemRead_T pHSystemRead_DW;

/* Model entry point functions */
extern void pHSystemRead_initialize(void);
extern void pHSystemRead_step(void);
extern void pHSystemRead_terminate(void);

/* Real-time Model object */
extern RT_MODEL_pHSystemRead_T *const pHSystemRead_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Data Type Conversion2' : Unused code path elimination
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
 * '<Root>' : 'pHSystemRead'
 * '<S1>'   : 'pHSystemRead/MATLAB Function'
 * '<S2>'   : 'pHSystemRead/Subsystem'
 * '<S3>'   : 'pHSystemRead/Subsystem1'
 */
#endif                                 /* RTW_HEADER_pHSystemRead_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
