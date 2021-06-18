/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Exp4_2_SquareWaveA_data.c
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

#include "Exp4_2_SquareWaveA.h"
#include "Exp4_2_SquareWaveA_private.h"

/* Block parameters (auto storage) */
P_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_P = {
  2.75,                                /* Expression: 5/6*3.3
                                        * Referenced by: '<S2>/Constant1'
                                        */
  0.54999999999999993,                 /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Constant'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  90.0,                                /* Expression: 90
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  0.43999999999999995,                 /* Expression: (2/3)*3.3/5
                                        * Referenced by: '<Root>/Gain'
                                        */
  0.54999999999999993,                 /* Expression: 3.3/6
                                        * Referenced by: '<Root>/Constant'
                                        */
  0.54999999999999993,                 /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Switch'
                                        */
  2.75,                                /* Expression: 5/6*3.3
                                        * Referenced by: '<S2>/Switch1'
                                        */
  0.54999999999999993,                 /* Expression: 1/6*3.3
                                        * Referenced by: '<S2>/Constant2'
                                        */
  1861.3636363636365,                  /* Expression: 4095/(3.3*2/3)
                                        * Referenced by: '<S2>/m//s to mph conversion'
                                        */
  0.00080586080586080586,              /* Expression: 3.3/4095
                                        * Referenced by: '<S1>/12bit to voltage conversion'
                                        */
  0.54999999999999993,                 /* Expression: 3.3/6
                                        * Referenced by: '<Root>/Constant1'
                                        */
  2.2727272727272729,                  /* Expression: 5/((2/3)*3.3)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  0.0F,                                /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  1,                                   /* Expression: int8(DACNum)
                                        * Referenced by: '<S2>/S-Function Builder'
                                        */
  5,                                   /* Expression: int8(pinNum)
                                        * Referenced by: '<S1>/S-Function Builder5'
                                        */
  0,                                   /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  1                                    /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
