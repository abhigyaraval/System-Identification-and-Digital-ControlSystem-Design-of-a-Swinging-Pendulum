/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TempControlExperimentTest_data.c
 *
 * Code generated for Simulink model 'TempControlExperimentTest'.
 *
 * Model version                  : 1.75
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 05 15:25:55 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TempControlExperimentTest.h"
#include "TempControlExperimentTest_private.h"

/* Block parameters (auto storage) */
P_TempControlExperimentTest_T TempControlExperimentTest_P = {
  300.0,                               /* Mask Parameter: prbs2_Lv
                                        * Referenced by: '<S17>/+//- Level'
                                        */
  2129.4,                              /* Mask Parameter: prbs2_initLevel
                                        * Referenced by: '<S5>/Constant'
                                        */
  4294967295U,                         /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S27>/FixPt Switch'
                                        */
  4095.0,                              /* Expression: 4095
                                        * Referenced by: '<S1>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Rate Transition'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  4095.0,                              /* Expression: 4095
                                        * Referenced by: '<S1>/Switch1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/LeadingZeros'
                                        */
  0.0F,                                /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S27>/Constant'
                                        */
  2U,                                  /* Expression: uint32(PwmPort)
                                        * Referenced by: '<S1>/S-Function'
                                        */
  1U,                                  /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S26>/FixPt Constant'
                                        */
  0U,                                  /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S18>/Output'
                                        */
  8U,                                  /* Computed Parameter: LeadingZeros_DelayLength
                                        * Referenced by: '<S17>/LeadingZeros'
                                        */
  71U,                                 /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S17>/Switch'
                                        */
  0,                                   /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S1>/Switch'
                                        */
  0,                                   /* Computed Parameter: FixPtUnitDelay1_InitialConditio
                                        * Referenced by: '<S25>/FixPt Unit Delay1'
                                        */
  0,                                   /* Computed Parameter: FixPtUnitDelay1_InitialCondit_h
                                        * Referenced by: '<S24>/FixPt Unit Delay1'
                                        */
  0,                                   /* Computed Parameter: FixPtUnitDelay1_InitialCondit_k
                                        * Referenced by: '<S20>/FixPt Unit Delay1'
                                        */
  0,                                   /* Computed Parameter: FixPtUnitDelay1_InitialCondit_j
                                        * Referenced by: '<S21>/FixPt Unit Delay1'
                                        */
  0,                                   /* Computed Parameter: FixPtUnitDelay1_InitialCondit_e
                                        * Referenced by: '<S22>/FixPt Unit Delay1'
                                        */
  0,                                   /* Computed Parameter: FixPtUnitDelay1_InitialCondit_o
                                        * Referenced by: '<S23>/FixPt Unit Delay1'
                                        */
  16384,                               /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S17>/Gain'
                                        */
  2,                                   /* Expression: int8(serialNum)
                                        * Referenced by: '<S2>/S-Function'
                                        */
  0,                                   /* Expression: int8(0)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  0,                                   /* Expression: int8(rate)
                                        * Referenced by: '<S3>/S-Function'
                                        */
  1U,                                  /* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                        * Referenced by: '<S25>/FixPt Unit Delay2'
                                        */
  1U,                                  /* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                        * Referenced by: '<S24>/FixPt Unit Delay2'
                                        */
  0U,                                  /* Computed Parameter: FixPtConstant_Value_e
                                        * Referenced by: '<S20>/FixPt Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtUnitDelay2_InitialCondit_f
                                        * Referenced by: '<S20>/FixPt Unit Delay2'
                                        */
  0U,                                  /* Computed Parameter: FixPtConstant_Value_b
                                        * Referenced by: '<S21>/FixPt Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtUnitDelay2_InitialCondit_n
                                        * Referenced by: '<S21>/FixPt Unit Delay2'
                                        */
  0U,                                  /* Computed Parameter: FixPtConstant_Value_n
                                        * Referenced by: '<S22>/FixPt Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                        * Referenced by: '<S22>/FixPt Unit Delay2'
                                        */
  0U,                                  /* Computed Parameter: FixPtConstant_Value_m
                                        * Referenced by: '<S23>/FixPt Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtUnitDelay2_InitialCondit_c
                                        * Referenced by: '<S23>/FixPt Unit Delay2'
                                        */
  0U,                                  /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S24>/FixPt Constant'
                                        */
  0U                                   /* Computed Parameter: FixPtConstant_Value_i
                                        * Referenced by: '<S25>/FixPt Constant'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
