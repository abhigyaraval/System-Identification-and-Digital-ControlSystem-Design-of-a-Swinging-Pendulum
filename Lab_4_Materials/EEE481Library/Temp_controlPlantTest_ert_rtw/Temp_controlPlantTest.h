/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Temp_controlPlantTest.h
 *
 * Code generated for Simulink model 'Temp_controlPlantTest'.
 *
 * Model version                  : 1.98
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 05 12:56:59 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Temp_controlPlantTest_h_
#define RTW_HEADER_Temp_controlPlantTest_h_
#include <string.h>
#include <stddef.h>
#ifndef Temp_controlPlantTest_COMMON_INCLUDES_
# define Temp_controlPlantTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Temp_controlPlantTest_COMMON_INCLUDES_ */

#include "Temp_controlPlantTest_types.h"
#include "MW_target_hardware_resources.h"

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

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Proportional2[10];            /* '<S6>/Proportional2' */
  real_T Sum5[10];                     /* '<S6>/Sum5' */
  real_T rtb_endpoint4_m[10];
  real_T RateTransition2;              /* '<S1>/Rate Transition2' */
  real_T RateTransition1;              /* '<S1>/Rate Transition1' */
  real32_T DataTypeConversion1;        /* '<S2>/Data Type Conversion1' */
  real32_T UnitDelay[9];               /* '<S3>/Unit Delay' */
  real32_T SFunction[3];               /* '<S3>/S-Function' */
  int16_T SFunction2;                  /* '<S4>/S-Function2' */
} B_Temp_controlPlantTest_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator1_DSTATE[10];/* '<S6>/Discrete-Time Integrator1' */
  real_T SFunction_DSTATE;             /* '<S2>/S-Function' */
  real_T SFunction2_DSTATE;            /* '<S4>/S-Function2' */
  real_T DiscreteTimeIntegrator_DSTATE[10];/* '<S6>/Discrete-Time Integrator' */
  real_T SFunction_DSTATE_n[4];        /* '<S3>/S-Function' */
  real_T RateTransition1_Buffer0;      /* '<S1>/Rate Transition1' */
  real32_T UnitDelay_DSTATE[9];        /* '<S3>/Unit Delay' */
} DW_Temp_controlPlantTest_T;

/* Parameters (auto storage) */
struct P_Temp_controlPlantTest_T_ {
  real_T TubeTempnstageapp_L;          /* Mask Parameter: TubeTempnstageapp_L
                                        * Referenced by: '<S6>/Proportional4'
                                        */
  real_T TubeTempnstageapp_T_amb;      /* Mask Parameter: TubeTempnstageapp_T_amb
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S6>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC[10];/* Expression: T_a0
                                         * Referenced by: '<S6>/Discrete-Time Integrator1'
                                         */
  real_T Gain_Gain;                    /* Expression: 4095/1024
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 1/4095
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T RateTransition1_X0;           /* Expression: 0
                                        * Referenced by: '<S1>/Rate Transition1'
                                        */
  real_T Step_Time;                    /* Expression: 10000
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 25
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 25
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 5000
                                        * Referenced by: '<S1>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 1
                                        * Referenced by: '<S1>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S1>/Step1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S6>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC[10];/* Expression: T_0
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */
  real_T unitconversion_Gain;          /* Expression: 0.001/60
                                        * Referenced by: '<S5>/unit conversion'
                                        */
  real_T Proportional11_Gain;          /* Expression: 1/Li
                                        * Referenced by: '<S6>/Proportional11'
                                        */
  real_T qmax_Gain;                    /* Expression: 10000
                                        * Referenced by: '<S5>/qmax'
                                        */
  real_T Proportional1_Gain;           /* Expression: 1/m/cp
                                        * Referenced by: '<S6>/Proportional1'
                                        */
  real_T Proportional2_Gain;           /* Expression: ha*Aa
                                        * Referenced by: '<S6>/Proportional2'
                                        */
  real_T Proportional10_Gain;          /* Expression: 1/rhoa/V/cpa
                                        * Referenced by: '<S6>/Proportional10'
                                        */
  real_T Proportional7_Gain;           /* Expression: 2
                                        * Referenced by: '<S6>/Proportional7'
                                        */
  real_T Proportional12_Gain;          /* Expression: 1/Li/Li
                                        * Referenced by: '<S6>/Proportional12'
                                        */
  real_T Proportional13_Gain;          /* Expression: ha*Aa/rhoa/V/cpa*0
                                        * Referenced by: '<S6>/Proportional13'
                                        */
  real_T Proportional3_Gain;           /* Expression: hs*As/m/cp
                                        * Referenced by: '<S6>/Proportional3'
                                        */
  real_T Proportional9_Gain;           /* Expression: 1/m/cp
                                        * Referenced by: '<S6>/Proportional9'
                                        */
  real_T Proportional8_Gain;           /* Expression: k/rhos/cp
                                        * Referenced by: '<S6>/Proportional8'
                                        */
  real_T Proportional5_Gain;           /* Expression: 1
                                        * Referenced by: '<S6>/Proportional5'
                                        */
  real_T Proportional6_Gain;           /* Expression: 1
                                        * Referenced by: '<S6>/Proportional6'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  int8_T SFunction_P1;                 /* Expression: int8(serialNum)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  int8_T SFunction_P1_c;               /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  int8_T SFunction_P2;                 /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Temp_controlPlantTest_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
    } RateInteraction;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Temp_controlPlantTest_T Temp_controlPlantTest_P;

/* Block signals (auto storage) */
extern B_Temp_controlPlantTest_T Temp_controlPlantTest_B;

/* Block states (auto storage) */
extern DW_Temp_controlPlantTest_T Temp_controlPlantTest_DW;

/* External function called from main */
extern void Temp_controlPlantTest_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Temp_controlPlantTest_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Temp_controlPlantTest_initialize(void);
extern void Temp_controlPlantTest_step0(void);
extern void Temp_controlPlantTest_step1(void);
extern void Temp_controlPlantTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Temp_controlPlantTes_T *const Temp_controlPlantTest_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<S5>/Display' : Unused code path elimination
 * Block '<S5>/Display1' : Unused code path elimination
 * Block '<S5>/Display2' : Unused code path elimination
 * Block '<S5>/end-point L1' : Unused code path elimination
 * Block '<S5>/end-point L2' : Unused code path elimination
 * Block '<S5>/end-point L3' : Unused code path elimination
 * Block '<S3>/Data Type Conversion2' : Unused code path elimination
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
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
 * '<Root>' : 'Temp_controlPlantTest'
 * '<S1>'   : 'Temp_controlPlantTest/Heating tube'
 * '<S2>'   : 'Temp_controlPlantTest/SerialWrite1'
 * '<S3>'   : 'Temp_controlPlantTest/Subsystem'
 * '<S4>'   : 'Temp_controlPlantTest/Subsystem5'
 * '<S5>'   : 'Temp_controlPlantTest/Heating tube/Tube Temp n-stage app'
 * '<S6>'   : 'Temp_controlPlantTest/Heating tube/Tube Temp n-stage app/Subsystem1'
 */
#endif                                 /* RTW_HEADER_Temp_controlPlantTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
