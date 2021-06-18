/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Test1.c
 *
 * Code generated for Simulink model 'Test1'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 13:41:44 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Test1.h"
#include "Test1_private.h"

/* Block signals (auto storage) */
B_Test1_T Test1_B;

/* Block states (auto storage) */
DW_Test1_T Test1_DW;

/* Real-time model */
RT_MODEL_Test1_T Test1_M_;
RT_MODEL_Test1_T *const Test1_M = &Test1_M_;

/* Model step function */
void Test1_step(void)
{
  /* S-Function (ADC12bit): '<Root>/S-Function Builder5' */
  ADC12bit_Outputs_wrapper( &Test1_B.SFunctionBuilder5,
    &Test1_DW.SFunctionBuilder5_DSTATE, &Test1_P.SFunctionBuilder5_P1, 1);

  /* S-Function "ADC12bit_wrapper" Block: <Root>/S-Function Builder5 */
  ADC12bit_Update_wrapper( &Test1_B.SFunctionBuilder5,
    &Test1_DW.SFunctionBuilder5_DSTATE, &Test1_P.SFunctionBuilder5_P1, 1);
}

/* Model initialize function */
void Test1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Test1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Test1_B), 0,
                sizeof(B_Test1_T));

  /* states (dwork) */
  (void) memset((void *)&Test1_DW, 0,
                sizeof(DW_Test1_T));

  /* S-Function Block: <Root>/S-Function Builder5 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        Test1_DW.SFunctionBuilder5_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void Test1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
