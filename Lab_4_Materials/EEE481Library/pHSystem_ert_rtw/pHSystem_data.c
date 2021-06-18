/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pHSystem_data.c
 *
 * Code generated for Simulink model 'pHSystem'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Dec 18 14:37:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pHSystem.h"
#include "pHSystem_private.h"

/* Block parameters (auto storage) */
P_pHSystem_T pHSystem_P = {
  /*  Mask Parameter: RepeatingSequence_rep_seq_y
   * Referenced by: '<S1>/Look-Up Table1'
   */
  { 0.0, 0.2 },
  0.2,                                 /* Expression: period
                                        * Referenced by: '<S1>/Constant'
                                        */

  /*  Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S1>/Look-Up Table1'
   */
  { 0.0, 0.2 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Random Number'
                                        */
  0.0070710678118654753,               /* Computed Parameter: RandomNumber_StdDev
                                        * Referenced by: '<Root>/Random Number'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Random Number'
                                        */
  7.6294473727863581,                  /* Expression: 6+2*rand
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  0.04,                                /* Expression: 0.04
                                        * Referenced by: '<Root>/Quantizer'
                                        */
  2                                    /* Expression: int8(2)
                                        * Referenced by: '<Root>/S-Function'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
