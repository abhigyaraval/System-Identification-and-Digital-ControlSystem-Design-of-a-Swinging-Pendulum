/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Exp4_2_SquareWaveA.h
 *
 * Code generated for Simulink model 'Exp4_2_SquareWaveA'.
 *
 * Model version                  : 1.166
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Oct 20 18:00:31 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Exp4_2_SquareWaveA_h_
#define RTW_HEADER_Exp4_2_SquareWaveA_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef Exp4_2_SquareWaveA_COMMON_INCLUDES_
# define Exp4_2_SquareWaveA_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Exp4_2_SquareWaveA_COMMON_INCLUDES_ */

#include "Exp4_2_SquareWaveA_types.h"
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

/* Block signals (auto storage) */
typedef struct {
  real32_T UnitDelay[9];               /* '<S3>/Unit Delay' */
  real32_T SFunction[3];               /* '<S3>/S-Function' */
  int16_T DataTypeConversion;          /* '<S2>/Data Type Conversion' */
  int16_T SFunctionBuilder5;           /* '<S1>/S-Function Builder5' */
} B_Exp4_2_SquareWaveA_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder_DSTATE;      /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder5_DSTATE;     /* '<S1>/S-Function Builder5' */
  real_T SFunction_DSTATE[4];          /* '<S3>/S-Function' */
  real32_T UnitDelay_DSTATE[9];        /* '<S3>/Unit Delay' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW_Exp4_2_SquareWaveA_T;

/* Parameters (auto storage) */
struct P_Exp4_2_SquareWaveA_T_ {
  real_T Constant1_Value;              /* Expression: 5/6*3.3
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 5
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 100
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 90
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T Gain_Gain;                    /* Expression: (2/3)*3.3/5
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value_c;             /* Expression: 3.3/6
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 5/6*3.3
                                        * Referenced by: '<S2>/Switch1'
                                        */
  real_T Constant2_Value;              /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T mstomphconversion_Gain;       /* Expression: 4095/(3.3*2/3)
                                        * Referenced by: '<S2>/m//s to mph conversion'
                                        */
  real_T u2bittovoltageconversion_Gain;/* Expression: 3.3/4095
                                        * Referenced by: '<S1>/12bit to voltage conversion'
                                        */
  real_T Constant1_Value_m;            /* Expression: 3.3/6
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 5/((2/3)*3.3)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  int8_T SFunctionBuilder_P1;          /* Expression: int8(DACNum)
                                        * Referenced by: '<S2>/S-Function Builder'
                                        */
  int8_T SFunctionBuilder5_P1;         /* Expression: int8(pinNum)
                                        * Referenced by: '<S1>/S-Function Builder5'
                                        */
  int8_T SFunction_P1;                 /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Exp4_2_SquareWaveA_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_P;

/* Block signals (auto storage) */
extern B_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_B;

/* Block states (auto storage) */
extern DW_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_DW;

/* Model entry point functions */
extern void Exp4_2_SquareWaveA_initialize(void);
extern void Exp4_2_SquareWaveA_step(void);
extern void Exp4_2_SquareWaveA_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Exp4_2_SquareWaveA_T *const Exp4_2_SquareWaveA_M;

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
 * '<Root>' : 'Exp4_2_SquareWaveA'
 * '<S1>'   : 'Exp4_2_SquareWaveA/ADC12bit'
 * '<S2>'   : 'Exp4_2_SquareWaveA/DAC12bit'
 * '<S3>'   : 'Exp4_2_SquareWaveA/Subsystem'
 */
#endif                                 /* RTW_HEADER_Exp4_2_SquareWaveA_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
