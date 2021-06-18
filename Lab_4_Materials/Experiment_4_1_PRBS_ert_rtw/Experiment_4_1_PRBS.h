/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_PRBS.h
 *
 * Code generated for Simulink model 'Experiment_4_1_PRBS'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Sat Apr 25 15:28:48 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Experiment_4_1_PRBS_h_
#define RTW_HEADER_Experiment_4_1_PRBS_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Experiment_4_1_PRBS_COMMON_INCLUDES_
# define Experiment_4_1_PRBS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* Experiment_4_1_PRBS_COMMON_INCLUDES_ */

#include "Experiment_4_1_PRBS_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
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
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Step;                         /* '<Root>/Step' */
  real_T Sum1;                         /* '<S7>/Sum1' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T DiscreteTransferFcn;          /* '<Root>/Discrete Transfer Fcn' */
  int16_T SFunctionBuilder5;           /* '<S2>/S-Function Builder5' */
  int16_T DataTypeConversion;          /* '<S4>/Data Type Conversion' */
} B_Experiment_4_1_PRBS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder5_DSTATE;     /* '<S2>/S-Function Builder5' */
  real_T DiscreteTransferFcn_states[2];/* '<Root>/Discrete Transfer Fcn' */
  real_T SFunctionBuilder_DSTATE;      /* '<S4>/S-Function Builder' */
  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */
} DW_Experiment_4_1_PRBS_T;

/* Parameters (default storage) */
struct P_Experiment_4_1_PRBS_T_ {
  real_T SingalConditioner3_in_max;    /* Mask Parameter: SingalConditioner3_in_max
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T SingalConditioner4_in_max;    /* Mask Parameter: SingalConditioner4_in_max
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T SingalConditioner3_in_min;    /* Mask Parameter: SingalConditioner3_in_min
                                        * Referenced by:
                                        *   '<S7>/Constant'
                                        *   '<S7>/Gain'
                                        */
  real_T SingalConditioner4_in_min;    /* Mask Parameter: SingalConditioner4_in_min
                                        * Referenced by:
                                        *   '<S8>/Constant'
                                        *   '<S8>/Gain'
                                        */
  real_T SingalConditioner3_out_max;   /* Mask Parameter: SingalConditioner3_out_max
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T SingalConditioner4_out_max;   /* Mask Parameter: SingalConditioner4_out_max
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T SingalConditioner3_out_min;   /* Mask Parameter: SingalConditioner3_out_min
                                        * Referenced by:
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Gain'
                                        */
  real_T SingalConditioner4_out_min;   /* Mask Parameter: SingalConditioner4_out_min
                                        * Referenced by:
                                        *   '<S8>/Constant1'
                                        *   '<S8>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 5/6*3.3
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1/6*3.3
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Step_Time;                    /* Expression: 25
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: pi/6
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T u2bittovoltageconversion_Gain;/* Expression: 3.3/4095
                                        * Referenced by: '<S2>/12bit to voltage conversion'
                                        */
  real_T DiscreteTransferFcn_NumCoef[3];/* Expression: [36680 -71510 34850]
                                         * Referenced by: '<Root>/Discrete Transfer Fcn'
                                         */
  real_T DiscreteTransferFcn_DenCoef[3];/* Expression: [1 -1 0]
                                         * Referenced by: '<Root>/Discrete Transfer Fcn'
                                         */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn'
                                          */
  real_T Switch_Threshold;             /* Expression: 1/6*3.3
                                        * Referenced by: '<S4>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 5/6*3.3
                                        * Referenced by: '<S4>/Switch1'
                                        */
  real_T Constant2_Value;              /* Expression: 1/6*3.3
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T mstomphconversion_Gain;       /* Expression: 4095/(3.3*2/3)
                                        * Referenced by: '<S4>/m//s to mph conversion'
                                        */
  int8_T SFunctionBuilder5_P1;         /* Expression: int8(pinNum)
                                        * Referenced by: '<S2>/S-Function Builder5'
                                        */
  int8_T SFunctionBuilder_P1;          /* Expression: int8(DACNum)
                                        * Referenced by: '<S4>/S-Function Builder'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Experiment_4_1_PRBS_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_P;

/* Block signals (default storage) */
extern B_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_B;

/* Block states (default storage) */
extern DW_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_DW;

/* Model entry point functions */
extern void Experiment_4_1_PRBS_initialize(void);
extern void Experiment_4_1_PRBS_step(void);
extern void Experiment_4_1_PRBS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Experiment_4_1_PRBS_T *const Experiment_4_1_PRBS_M;

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
 * '<Root>' : 'Experiment_4_1_PRBS'
 * '<S1>'   : 'Experiment_4_1_PRBS/ADC12bit'
 * '<S2>'   : 'Experiment_4_1_PRBS/ADC12bit1'
 * '<S3>'   : 'Experiment_4_1_PRBS/DAC12bit'
 * '<S4>'   : 'Experiment_4_1_PRBS/DAC12bit1'
 * '<S5>'   : 'Experiment_4_1_PRBS/Singal Conditioner1'
 * '<S6>'   : 'Experiment_4_1_PRBS/Singal Conditioner2'
 * '<S7>'   : 'Experiment_4_1_PRBS/Singal Conditioner3'
 * '<S8>'   : 'Experiment_4_1_PRBS/Singal Conditioner4'
 * '<S9>'   : 'Experiment_4_1_PRBS/prbs2'
 * '<S10>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits'
 * '<S11>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/Counter Free-Running'
 * '<S12>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/MATLAB Function'
 * '<S13>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/delay_1'
 * '<S14>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/delay_2'
 * '<S15>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/delay_3'
 * '<S16>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/delay_4'
 * '<S17>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/delay_5'
 * '<S18>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/delay_6'
 * '<S19>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/Counter Free-Running/Increment Real World'
 * '<S20>'  : 'Experiment_4_1_PRBS/prbs2/psbs_6bits/Counter Free-Running/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_Experiment_4_1_PRBS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
