/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_PRBS_data.c
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

#include "Experiment_4_1_PRBS.h"
#include "Experiment_4_1_PRBS_private.h"

/* Block parameters (default storage) */
P_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_P = {
  /* Mask Parameter: SingalConditioner3_in_max
   * Referenced by: '<S7>/Gain'
   */
  2.76,

  /* Mask Parameter: SingalConditioner4_in_max
   * Referenced by: '<S8>/Gain'
   */
  255.0,

  /* Mask Parameter: SingalConditioner3_in_min
   * Referenced by:
   *   '<S7>/Constant'
   *   '<S7>/Gain'
   */
  0.56,

  /* Mask Parameter: SingalConditioner4_in_min
   * Referenced by:
   *   '<S8>/Constant'
   *   '<S8>/Gain'
   */
  -255.0,

  /* Mask Parameter: SingalConditioner3_out_max
   * Referenced by: '<S7>/Gain'
   */
  1.5707963267948966,

  /* Mask Parameter: SingalConditioner4_out_max
   * Referenced by: '<S8>/Gain'
   */
  2.76,

  /* Mask Parameter: SingalConditioner3_out_min
   * Referenced by:
   *   '<S7>/Constant1'
   *   '<S7>/Gain'
   */
  -1.5707963267948966,

  /* Mask Parameter: SingalConditioner4_out_min
   * Referenced by:
   *   '<S8>/Constant1'
   *   '<S8>/Gain'
   */
  0.56,

  /* Expression: 5/6*3.3
   * Referenced by: '<S4>/Constant1'
   */
  2.75,

  /* Expression: 1/6*3.3
   * Referenced by: '<S4>/Constant'
   */
  0.54999999999999993,

  /* Expression: 25
   * Referenced by: '<Root>/Step'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step'
   */
  0.0,

  /* Expression: pi/6
   * Referenced by: '<Root>/Step'
   */
  0.52359877559829882,

  /* Expression: 3.3/4095
   * Referenced by: '<S2>/12bit to voltage conversion'
   */
  0.00080586080586080586,

  /* Expression: [36680 -71510 34850]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 36680.0, -71510.0, 34850.0 },

  /* Expression: [1 -1 0]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -1.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 1/6*3.3
   * Referenced by: '<S4>/Switch'
   */
  0.54999999999999993,

  /* Expression: 5/6*3.3
   * Referenced by: '<S4>/Switch1'
   */
  2.75,

  /* Expression: 1/6*3.3
   * Referenced by: '<S4>/Constant2'
   */
  0.54999999999999993,

  /* Expression: 4095/(3.3*2/3)
   * Referenced by: '<S4>/m//s to mph conversion'
   */
  1861.3636363636365,

  /* Expression: int8(pinNum)
   * Referenced by: '<S2>/S-Function Builder5'
   */
  0,

  /* Expression: int8(DACNum)
   * Referenced by: '<S4>/S-Function Builder'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
