/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Temp_controlPlantTest_data.c
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

#include "Temp_controlPlantTest.h"
#include "Temp_controlPlantTest_private.h"

/* Block parameters (auto storage) */
P_Temp_controlPlantTest_T Temp_controlPlantTest_P = {
  1.0,                                 /* Mask Parameter: TubeTempnstageapp_L
                                        * Referenced by: '<S6>/Proportional4'
                                        */
  25.0,                                /* Mask Parameter: TubeTempnstageapp_T_amb
                                        * Referenced by: '<S6>/Constant3'
                                        */
  0.05,                                /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S6>/Discrete-Time Integrator1'
                                        */

  /*  Expression: T_a0
   * Referenced by: '<S6>/Discrete-Time Integrator1'
   */
  { 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0 },
  3.9990234375,                        /* Expression: 4095/1024
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0002442002442002442,               /* Expression: 1/4095
                                        * Referenced by: '<Root>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Rate Transition1'
                                        */
  10000.0,                             /* Expression: 10000
                                        * Referenced by: '<S1>/Step'
                                        */
  25.0,                                /* Expression: 25
                                        * Referenced by: '<S1>/Step'
                                        */
  25.0,                                /* Expression: 25
                                        * Referenced by: '<S1>/Step'
                                        */
  5000.0,                              /* Expression: 5000
                                        * Referenced by: '<S1>/Step1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Step1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Step1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  0.05,                                /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */

  /*  Expression: T_0
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  { 800.0, 800.0, 800.0, 800.0, 800.0, 800.0, 800.0, 800.0, 800.0, 800.0 },
  1.6666666666666667E-5,               /* Expression: 0.001/60
                                        * Referenced by: '<S5>/unit conversion'
                                        */
  10.0,                                /* Expression: 1/Li
                                        * Referenced by: '<S6>/Proportional11'
                                        */
  10000.0,                             /* Expression: 10000
                                        * Referenced by: '<S5>/qmax'
                                        */
  5.6243464296102321E-5,               /* Expression: 1/m/cp
                                        * Referenced by: '<S6>/Proportional1'
                                        */
  18.849555921538759,                  /* Expression: ha*Aa
                                        * Referenced by: '<S6>/Proportional2'
                                        */
  0.056139309732590945,                /* Expression: 1/rhoa/V/cpa
                                        * Referenced by: '<S6>/Proportional10'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S6>/Proportional7'
                                        */
  100.0,                               /* Expression: 1/Li/Li
                                        * Referenced by: '<S6>/Proportional12'
                                        */
  0.0,                                 /* Expression: ha*Aa/rhoa/V/cpa*0
                                        * Referenced by: '<S6>/Proportional13'
                                        */
  0.00035338810849014975,              /* Expression: hs*As/m/cp
                                        * Referenced by: '<S6>/Proportional3'
                                        */
  5.6243464296102321E-5,               /* Expression: 1/m/cp
                                        * Referenced by: '<S6>/Proportional9'
                                        */
  7.4211502782931359E-7,               /* Expression: k/rhos/cp
                                        * Referenced by: '<S6>/Proportional8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Proportional5'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Proportional6'
                                        */
  0.0F,                                /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  2,                                   /* Expression: int8(serialNum)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  0,                                   /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  0                                    /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
