/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_Plant.h
 *
 * Code generated for Simulink model 'Experiment_4_1_Plant'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Sat Apr 25 12:24:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Experiment_4_1_Plant_h_
#define RTW_HEADER_Experiment_4_1_Plant_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Experiment_4_1_Plant_COMMON_INCLUDES_
# define Experiment_4_1_Plant_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Experiment_4_1_Plant_COMMON_INCLUDES_ */

#include "Experiment_4_1_Plant_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeDeltaY
# define rtmGetOdeDeltaY(rtm)          ((rtm)->OdeDeltaY)
#endif

#ifndef rtmSetOdeDeltaY
# define rtmSetOdeDeltaY(rtm, val)     ((rtm)->OdeDeltaY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeX0
# define rtmGetOdeX0(rtm)              ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
# define rtmSetOdeX0(rtm, val)         ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Gain;                         /* '<S9>/Gain' */
  real_T Integrator;                   /* '<S10>/Integrator' */
  real_T Sum;                          /* '<S10>/Sum' */
  int16_T DataTypeConversion;          /* '<S2>/Data Type Conversion' */
  int16_T SFunctionBuilder5;           /* '<S1>/S-Function Builder5' */
} B_Experiment_4_1_Plant_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder_DSTATE;      /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder5_DSTATE;     /* '<S1>/S-Function Builder5' */
} DW_Experiment_4_1_Plant_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<S10>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<S10>/Integrator' */
} X_Experiment_4_1_Plant_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<S10>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<S10>/Integrator' */
} XDot_Experiment_4_1_Plant_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator1_CSTATE;        /* '<S10>/Integrator1' */
  boolean_T Integrator_CSTATE;         /* '<S10>/Integrator' */
} XDis_Experiment_4_1_Plant_T;

#ifndef ODE8_INTG
#define ODE8_INTG

/* ODE8 Integration Data */
typedef struct {
  real_T *deltaY;                      /* output diff */
  real_T *f[13];                       /* derivatives */
  real_T *x0;                          /* Initial State */
} ODE8_IntgData;

#endif

/* Parameters (default storage) */
struct P_Experiment_4_1_Plant_T_ {
  real_T K;                            /* Variable: K
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T L;                            /* Variable: L
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T R;                            /* Variable: R
                                        * Referenced by:
                                        *   '<S9>/Gain'
                                        *   '<S9>/Gain1'
                                        */
  real_T epsilon;                      /* Variable: epsilon
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T m;                            /* Variable: m
                                        * Referenced by:
                                        *   '<S10>/Gain1'
                                        *   '<S10>/Gain2'
                                        */
  real_T theta_0;                      /* Variable: theta_0
                                        * Referenced by: '<S10>/Integrator1'
                                        */
  real_T theta_dot_0;                  /* Variable: theta_dot_0
                                        * Referenced by: '<S10>/Integrator'
                                        */
  real_T Pendulum_g;                   /* Mask Parameter: Pendulum_g
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T SingalConditioner3_in_max;    /* Mask Parameter: SingalConditioner3_in_max
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T SingalConditioner2_in_max;    /* Mask Parameter: SingalConditioner2_in_max
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T SingalConditioner3_in_min;    /* Mask Parameter: SingalConditioner3_in_min
                                        * Referenced by:
                                        *   '<S7>/Constant'
                                        *   '<S7>/Gain'
                                        */
  real_T SingalConditioner2_in_min;    /* Mask Parameter: SingalConditioner2_in_min
                                        * Referenced by:
                                        *   '<S6>/Constant'
                                        *   '<S6>/Gain'
                                        */
  real_T SingalConditioner3_out_max;   /* Mask Parameter: SingalConditioner3_out_max
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T SingalConditioner2_out_max;   /* Mask Parameter: SingalConditioner2_out_max
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T SingalConditioner3_out_min;   /* Mask Parameter: SingalConditioner3_out_min
                                        * Referenced by:
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Gain'
                                        */
  real_T SingalConditioner2_out_min;   /* Mask Parameter: SingalConditioner2_out_min
                                        * Referenced by:
                                        *   '<S6>/Constant1'
                                        *   '<S6>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 5/6*3.3
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Constant'
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
  real_T Saturation_UpperSat;          /* Expression: 255
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -255
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T SupplyVoltage_Value;          /* Expression: 12
                                        * Referenced by: '<S3>/Supply Voltage'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S8>/Gain'
                                        */
  int8_T SFunctionBuilder_P1;          /* Expression: int8(DACNum)
                                        * Referenced by: '<S2>/S-Function Builder'
                                        */
  int8_T SFunctionBuilder5_P1;         /* Expression: int8(pinNum)
                                        * Referenced by: '<S1>/S-Function Builder5'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Experiment_4_1_Plant_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_Experiment_4_1_Plant_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T OdeDeltaY[2];
  real_T odeF[13][2];
  real_T odeX0[2];
  ODE8_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

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
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Experiment_4_1_Plant_T Experiment_4_1_Plant_P;

/* Block signals (default storage) */
extern B_Experiment_4_1_Plant_T Experiment_4_1_Plant_B;

/* Continuous states (default storage) */
extern X_Experiment_4_1_Plant_T Experiment_4_1_Plant_X;

/* Block states (default storage) */
extern DW_Experiment_4_1_Plant_T Experiment_4_1_Plant_DW;

/* Model entry point functions */
extern void Experiment_4_1_Plant_initialize(void);
extern void Experiment_4_1_Plant_step(void);
extern void Experiment_4_1_Plant_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Experiment_4_1_Plant_T *const Experiment_4_1_Plant_M;

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
 * '<Root>' : 'Experiment_4_1_Plant'
 * '<S1>'   : 'Experiment_4_1_Plant/ADC12bit'
 * '<S2>'   : 'Experiment_4_1_Plant/DAC12bit'
 * '<S3>'   : 'Experiment_4_1_Plant/Pendulum Full'
 * '<S4>'   : 'Experiment_4_1_Plant/Singal Conditioner'
 * '<S5>'   : 'Experiment_4_1_Plant/Singal Conditioner1'
 * '<S6>'   : 'Experiment_4_1_Plant/Singal Conditioner2'
 * '<S7>'   : 'Experiment_4_1_Plant/Singal Conditioner3'
 * '<S8>'   : 'Experiment_4_1_Plant/Pendulum Full/Motor Driver'
 * '<S9>'   : 'Experiment_4_1_Plant/Pendulum Full/Motor Dynamics'
 * '<S10>'  : 'Experiment_4_1_Plant/Pendulum Full/Pendulum'
 */
#endif                                 /* RTW_HEADER_Experiment_4_1_Plant_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
