/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestSerialMonitor.h
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

#ifndef RTW_HEADER_TestSerialMonitor_h_
#define RTW_HEADER_TestSerialMonitor_h_
#include <string.h>
#include <stddef.h>
#ifndef TestSerialMonitor_COMMON_INCLUDES_
# define TestSerialMonitor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* TestSerialMonitor_COMMON_INCLUDES_ */

#include "TestSerialMonitor_types.h"
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
  real32_T UnitDelay[9];               /* '<S1>/Unit Delay' */
  real32_T DataTypeConversion1[9];     /* '<S1>/Data Type Conversion1' */
  real_T DataTypeConversion2[3];       /* '<S1>/Data Type Conversion2' */
  real32_T SFunction[3];               /* '<S1>/S-Function' */
} B_TestSerialMonitor_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay2_DSTATE;            /* '<Root>/Unit Delay2' */
  real_T UnitDelay1_DSTATE;            /* '<Root>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  real_T SFunction_DSTATE[4];          /* '<S1>/S-Function' */
  real32_T UnitDelay_DSTATE_n[9];      /* '<S1>/Unit Delay' */
} DW_TestSerialMonitor_T;

/* Parameters (auto storage) */
struct P_TestSerialMonitor_T_ {
  real_T Step_Time;                    /* Expression: 1
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 20
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 1
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step3_Time;                   /* Expression: 1
                                        * Referenced by: '<Root>/Step3'
                                        */
  real_T Step3_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step3'
                                        */
  real_T Step3_YFinal;                 /* Expression: 50
                                        * Referenced by: '<Root>/Step3'
                                        */
  real_T Step4_Time;                   /* Expression: 1
                                        * Referenced by: '<Root>/Step4'
                                        */
  real_T Step4_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step4'
                                        */
  real_T Step4_YFinal;                 /* Expression: 40
                                        * Referenced by: '<Root>/Step4'
                                        */
  real_T Step6_Time;                   /* Expression: 1
                                        * Referenced by: '<Root>/Step6'
                                        */
  real_T Step6_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step6'
                                        */
  real_T Step6_YFinal;                 /* Expression: 30
                                        * Referenced by: '<Root>/Step6'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay2'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real32_T UnitDelay_InitialCondition_h;/* Computed Parameter: UnitDelay_InitialCondition_h
                                         * Referenced by: '<S1>/Unit Delay'
                                         */
  int8_T SFunction_P1;                 /* Expression: int8(0)
                                        * Referenced by: '<S1>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S1>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_TestSerialMonitor_T {
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
extern P_TestSerialMonitor_T TestSerialMonitor_P;

/* Block signals (auto storage) */
extern B_TestSerialMonitor_T TestSerialMonitor_B;

/* Block states (auto storage) */
extern DW_TestSerialMonitor_T TestSerialMonitor_DW;

/* Model entry point functions */
extern void TestSerialMonitor_initialize(void);
extern void TestSerialMonitor_step(void);
extern void TestSerialMonitor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TestSerialMonitor_T *const TestSerialMonitor_M;

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
 * '<Root>' : 'TestSerialMonitor'
 * '<S1>'   : 'TestSerialMonitor/Subsystem'
 */
#endif                                 /* RTW_HEADER_TestSerialMonitor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
