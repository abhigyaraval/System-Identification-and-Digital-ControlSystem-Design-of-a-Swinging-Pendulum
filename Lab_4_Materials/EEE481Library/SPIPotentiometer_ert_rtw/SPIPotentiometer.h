/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPotentiometer.h
 *
 * Code generated for Simulink model 'SPIPotentiometer'.
 *
 * Model version                  : 1.122
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 14:11:11 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SPIPotentiometer_h_
#define RTW_HEADER_SPIPotentiometer_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SPIPotentiometer_COMMON_INCLUDES_
# define SPIPotentiometer_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SPIPotentiometer_COMMON_INCLUDES_ */

#include "SPIPotentiometer_types.h"
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
  real32_T UnitDelay[9];               /* '<S2>/Unit Delay' */
  real32_T SFunction[3];               /* '<S2>/S-Function' */
  int16_T SFunctionBuilder5;           /* '<S1>/S-Function Builder5' */
  uint8_T DataTypeConversion1;         /* '<S3>/Data Type Conversion1' */
  uint8_T DataTypeConversion2;         /* '<S3>/Data Type Conversion2' */
} B_SPIPotentiometer_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder5_DSTATE;     /* '<S3>/S-Function Builder5' */
  real_T SFunctionBuilder5_DSTATE_l;   /* '<S1>/S-Function Builder5' */
  real_T SFunction_DSTATE[4];          /* '<S2>/S-Function' */
  real32_T UnitDelay_DSTATE[9];        /* '<S2>/Unit Delay' */
} DW_SPIPotentiometer_T;

/* Parameters (auto storage) */
struct P_SPIPotentiometer_T_ {
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 255
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Step1_Time;                   /* Expression: 50
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 10
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 250
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S3>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 255
                                        * Referenced by: '<S3>/Switch1'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S3>/Switch3'
                                        */
  real_T Switch4_Threshold;            /* Expression: 1
                                        * Referenced by: '<S3>/Switch4'
                                        */
  real_T u2bittovoltageconversion_Gain;/* Expression: 3.3/4095
                                        * Referenced by: '<S1>/12bit to voltage conversion'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  int8_T SFunctionBuilder5_P1;         /* Expression: int8(CS)
                                        * Referenced by: '<S3>/S-Function Builder5'
                                        */
  int8_T SFunctionBuilder5_P1_i;       /* Expression: int8(pinNum)
                                        * Referenced by: '<S1>/S-Function Builder5'
                                        */
  int8_T SFunction_P1;                 /* Expression: int8(0)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S2>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SPIPotentiometer_T {
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
extern P_SPIPotentiometer_T SPIPotentiometer_P;

/* Block signals (auto storage) */
extern B_SPIPotentiometer_T SPIPotentiometer_B;

/* Block states (auto storage) */
extern DW_SPIPotentiometer_T SPIPotentiometer_DW;

/* Model entry point functions */
extern void SPIPotentiometer_initialize(void);
extern void SPIPotentiometer_step(void);
extern void SPIPotentiometer_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SPIPotentiometer_T *const SPIPotentiometer_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Data Type Conversion2' : Unused code path elimination
 * Block '<S3>/Scope' : Unused code path elimination
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
 * '<Root>' : 'SPIPotentiometer'
 * '<S1>'   : 'SPIPotentiometer/ADC12bit'
 * '<S2>'   : 'SPIPotentiometer/Subsystem'
 * '<S3>'   : 'SPIPotentiometer/Subsystem4'
 */
#endif                                 /* RTW_HEADER_SPIPotentiometer_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
