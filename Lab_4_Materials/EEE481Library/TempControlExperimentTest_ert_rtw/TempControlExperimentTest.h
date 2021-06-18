/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TempControlExperimentTest.h
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

#ifndef RTW_HEADER_TempControlExperimentTest_h_
#define RTW_HEADER_TempControlExperimentTest_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef TempControlExperimentTest_COMMON_INCLUDES_
# define TempControlExperimentTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* TempControlExperimentTest_COMMON_INCLUDES_ */

#include "TempControlExperimentTest_types.h"
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

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T RateTransition;               /* '<S17>/Rate Transition' */
  real32_T SFunction;                  /* '<S2>/S-Function' */
  real32_T UnitDelay[9];               /* '<S3>/Unit Delay' */
  real32_T SFunction_c[3];             /* '<S3>/S-Function' */
  int16_T DataTypeConversion1;         /* '<S1>/Data Type Conversion1' */
} B_TempControlExperimentTest_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunction_DSTATE;             /* '<S1>/S-Function' */
  real_T SFunction_DSTATE_m;           /* '<S2>/S-Function' */
  real_T SFunction_DSTATE_k[4];        /* '<S3>/S-Function' */
  real_T LeadingZeros_DSTATE[8];       /* '<S17>/LeadingZeros' */
  real_T RateTransition_Buffer0;       /* '<S17>/Rate Transition' */
  real32_T UnitDelay_DSTATE[9];        /* '<S3>/Unit Delay' */
  uint32_T Output_DSTATE;              /* '<S18>/Output' */
  int16_T FixPtUnitDelay1_DSTATE;      /* '<S25>/FixPt Unit Delay1' */
  int16_T FixPtUnitDelay1_DSTATE_d;    /* '<S24>/FixPt Unit Delay1' */
  int16_T FixPtUnitDelay1_DSTATE_e;    /* '<S20>/FixPt Unit Delay1' */
  int16_T FixPtUnitDelay1_DSTATE_k;    /* '<S21>/FixPt Unit Delay1' */
  int16_T FixPtUnitDelay1_DSTATE_h;    /* '<S22>/FixPt Unit Delay1' */
  int16_T FixPtUnitDelay1_DSTATE_ex;   /* '<S23>/FixPt Unit Delay1' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S25>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S24>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S20>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_e;    /* '<S21>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S22>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a0;   /* '<S23>/FixPt Unit Delay2' */
} DW_TempControlExperimentTest_T;

/* Parameters (auto storage) */
struct P_TempControlExperimentTest_T_ {
  real_T prbs2_Lv;                     /* Mask Parameter: prbs2_Lv
                                        * Referenced by: '<S17>/+//- Level'
                                        */
  real_T prbs2_initLevel;              /* Mask Parameter: prbs2_initLevel
                                        * Referenced by: '<S5>/Constant'
                                        */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S27>/FixPt Switch'
                                        */
  real_T Constant1_Value;              /* Expression: 4095
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T RateTransition_X0;            /* Expression: 0
                                        * Referenced by: '<S17>/Rate Transition'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Switch1_Threshold;            /* Expression: 4095
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T Constant1_Value_k;            /* Expression: 1
                                        * Referenced by: '<S17>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S17>/Constant3'
                                        */
  real_T LeadingZeros_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S17>/LeadingZeros'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  uint32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S27>/Constant'
                                        */
  uint32_T SFunction_P1;               /* Expression: uint32(PwmPort)
                                        * Referenced by: '<S1>/S-Function'
                                        */
  uint32_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S26>/FixPt Constant'
                                        */
  uint32_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S18>/Output'
                                        */
  uint32_T LeadingZeros_DelayLength;   /* Computed Parameter: LeadingZeros_DelayLength
                                        * Referenced by: '<S17>/LeadingZeros'
                                        */
  uint32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S17>/Switch'
                                        */
  int16_T Switch_Threshold_j;          /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S1>/Switch'
                                        */
  int16_T FixPtUnitDelay1_InitialConditio;/* Computed Parameter: FixPtUnitDelay1_InitialConditio
                                           * Referenced by: '<S25>/FixPt Unit Delay1'
                                           */
  int16_T FixPtUnitDelay1_InitialCondit_h;/* Computed Parameter: FixPtUnitDelay1_InitialCondit_h
                                           * Referenced by: '<S24>/FixPt Unit Delay1'
                                           */
  int16_T FixPtUnitDelay1_InitialCondit_k;/* Computed Parameter: FixPtUnitDelay1_InitialCondit_k
                                           * Referenced by: '<S20>/FixPt Unit Delay1'
                                           */
  int16_T FixPtUnitDelay1_InitialCondit_j;/* Computed Parameter: FixPtUnitDelay1_InitialCondit_j
                                           * Referenced by: '<S21>/FixPt Unit Delay1'
                                           */
  int16_T FixPtUnitDelay1_InitialCondit_e;/* Computed Parameter: FixPtUnitDelay1_InitialCondit_e
                                           * Referenced by: '<S22>/FixPt Unit Delay1'
                                           */
  int16_T FixPtUnitDelay1_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay1_InitialCondit_o
                                           * Referenced by: '<S23>/FixPt Unit Delay1'
                                           */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S17>/Gain'
                                        */
  int8_T SFunction_P1_c;               /* Expression: int8(serialNum)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  int8_T SFunction_P1_j;               /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S25>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S24>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_e;       /* Computed Parameter: FixPtConstant_Value_e
                                        * Referenced by: '<S20>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_f;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_f
                                           * Referenced by: '<S20>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_b;       /* Computed Parameter: FixPtConstant_Value_b
                                        * Referenced by: '<S21>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_n;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_n
                                           * Referenced by: '<S21>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_n;       /* Computed Parameter: FixPtConstant_Value_n
                                        * Referenced by: '<S22>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                           * Referenced by: '<S22>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_m;       /* Computed Parameter: FixPtConstant_Value_m
                                        * Referenced by: '<S23>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_c;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_c
                                           * Referenced by: '<S23>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_d;       /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S24>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_i;       /* Computed Parameter: FixPtConstant_Value_i
                                        * Referenced by: '<S25>/FixPt Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_TempControlExperiment_T {
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
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_TempControlExperimentTest_T TempControlExperimentTest_P;

/* Block signals (auto storage) */
extern B_TempControlExperimentTest_T TempControlExperimentTest_B;

/* Block states (auto storage) */
extern DW_TempControlExperimentTest_T TempControlExperimentTest_DW;

/* External function called from main */
extern void TempControlExperimentTest_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void TempControlExperimentTest_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void TempControlExperimentTest_initialize(void);
extern void TempControlExperimentTest_step0(void);
extern void TempControlExperimentTest_step2(void);
extern void TempControlExperimentTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TempControlExperimen_T *const TempControlExperimentTest_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<S3>/Data Type Conversion2' : Unused code path elimination
 * Block '<S18>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S26>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S27>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S17>/Display_1' : Unused code path elimination
 * Block '<S17>/Display_2' : Unused code path elimination
 * Block '<S17>/Display_3' : Unused code path elimination
 * Block '<S17>/Display_4' : Unused code path elimination
 * Block '<S17>/Display_5' : Unused code path elimination
 * Block '<S17>/Display_6' : Unused code path elimination
 * Block '<S20>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S21>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S22>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S23>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S24>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S25>/FixPt Data Type Duplicate1' : Unused code path elimination
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
 * '<Root>' : 'TempControlExperimentTest'
 * '<S1>'   : 'TempControlExperimentTest/PWM12bit'
 * '<S2>'   : 'TempControlExperimentTest/SerialRead'
 * '<S3>'   : 'TempControlExperimentTest/Subsystem'
 * '<S4>'   : 'TempControlExperimentTest/prbs1'
 * '<S5>'   : 'TempControlExperimentTest/prbs2'
 * '<S6>'   : 'TempControlExperimentTest/prbs1/psbs_6bits'
 * '<S7>'   : 'TempControlExperimentTest/prbs1/psbs_6bits/Counter Free-Running'
 * '<S8>'   : 'TempControlExperimentTest/prbs1/psbs_6bits/MATLAB Function'
 * '<S9>'   : 'TempControlExperimentTest/prbs1/psbs_6bits/delay_1'
 * '<S10>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/delay_2'
 * '<S11>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/delay_3'
 * '<S12>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/delay_4'
 * '<S13>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/delay_5'
 * '<S14>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/delay_6'
 * '<S15>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/Counter Free-Running/Increment Real World'
 * '<S16>'  : 'TempControlExperimentTest/prbs1/psbs_6bits/Counter Free-Running/Wrap To Zero'
 * '<S17>'  : 'TempControlExperimentTest/prbs2/psbs_6bits'
 * '<S18>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/Counter Free-Running'
 * '<S19>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/MATLAB Function'
 * '<S20>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/delay_1'
 * '<S21>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/delay_2'
 * '<S22>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/delay_3'
 * '<S23>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/delay_4'
 * '<S24>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/delay_5'
 * '<S25>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/delay_6'
 * '<S26>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/Counter Free-Running/Increment Real World'
 * '<S27>'  : 'TempControlExperimentTest/prbs2/psbs_6bits/Counter Free-Running/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_TempControlExperimentTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
