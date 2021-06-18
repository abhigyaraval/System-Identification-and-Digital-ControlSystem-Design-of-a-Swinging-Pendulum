/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_Plant_data.c
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

#include "Experiment_4_1_Plant.h"
#include "Experiment_4_1_Plant_private.h"

/* Block parameters (default storage) */
P_Experiment_4_1_Plant_T Experiment_4_1_Plant_P = {
  /* Variable: K
   * Referenced by: '<S9>/Gain'
   */
  0.9,

  /* Variable: L
   * Referenced by: '<S10>/Gain'
   */
  1.0,

  /* Variable: R
   * Referenced by:
   *   '<S9>/Gain'
   *   '<S9>/Gain1'
   */
  2.4,

  /* Variable: epsilon
   * Referenced by: '<S10>/Gain1'
   */
  0.5,

  /* Variable: m
   * Referenced by:
   *   '<S10>/Gain1'
   *   '<S10>/Gain2'
   */
  0.5,

  /* Variable: theta_0
   * Referenced by: '<S10>/Integrator1'
   */
  0.0,

  /* Variable: theta_dot_0
   * Referenced by: '<S10>/Integrator'
   */
  0.0,

  /* Mask Parameter: Pendulum_g
   * Referenced by: '<S10>/Gain'
   */
  9.81,

  /* Mask Parameter: SingalConditioner3_in_max
   * Referenced by: '<S7>/Gain'
   */
  1.5707963267948966,

  /* Mask Parameter: SingalConditioner2_in_max
   * Referenced by: '<S6>/Gain'
   */
  2.76,

  /* Mask Parameter: SingalConditioner3_in_min
   * Referenced by:
   *   '<S7>/Constant'
   *   '<S7>/Gain'
   */
  -1.5707963267948966,

  /* Mask Parameter: SingalConditioner2_in_min
   * Referenced by:
   *   '<S6>/Constant'
   *   '<S6>/Gain'
   */
  0.56,

  /* Mask Parameter: SingalConditioner3_out_max
   * Referenced by: '<S7>/Gain'
   */
  2.76,

  /* Mask Parameter: SingalConditioner2_out_max
   * Referenced by: '<S6>/Gain'
   */
  255.0,

  /* Mask Parameter: SingalConditioner3_out_min
   * Referenced by:
   *   '<S7>/Constant1'
   *   '<S7>/Gain'
   */
  0.56,

  /* Mask Parameter: SingalConditioner2_out_min
   * Referenced by:
   *   '<S6>/Constant1'
   *   '<S6>/Gain'
   */
  -255.0,

  /* Expression: 5/6*3.3
   * Referenced by: '<S2>/Constant1'
   */
  2.75,

  /* Expression: 1/6*3.3
   * Referenced by: '<S2>/Constant'
   */
  0.54999999999999993,

  /* Expression: 1/6*3.3
   * Referenced by: '<S2>/Switch'
   */
  0.54999999999999993,

  /* Expression: 5/6*3.3
   * Referenced by: '<S2>/Switch1'
   */
  2.75,

  /* Expression: 1/6*3.3
   * Referenced by: '<S2>/Constant2'
   */
  0.54999999999999993,

  /* Expression: 4095/(3.3*2/3)
   * Referenced by: '<S2>/m//s to mph conversion'
   */
  1861.3636363636365,

  /* Expression: 3.3/4095
   * Referenced by: '<S1>/12bit to voltage conversion'
   */
  0.00080586080586080586,

  /* Expression: 255
   * Referenced by: '<S8>/Saturation'
   */
  255.0,

  /* Expression: -255
   * Referenced by: '<S8>/Saturation'
   */
  -255.0,

  /* Expression: 12
   * Referenced by: '<S3>/Supply Voltage'
   */
  12.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S8>/Gain'
   */
  16448,

  /* Expression: int8(DACNum)
   * Referenced by: '<S2>/S-Function Builder'
   */
  0,

  /* Expression: int8(pinNum)
   * Referenced by: '<S1>/S-Function Builder5'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
