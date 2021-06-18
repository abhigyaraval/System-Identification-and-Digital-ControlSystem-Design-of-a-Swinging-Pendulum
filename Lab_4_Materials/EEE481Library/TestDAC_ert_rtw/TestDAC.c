/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestDAC.c
 *
 * Code generated for Simulink model 'TestDAC'.
 *
 * Model version                  : 1.78
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 14:52:06 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TestDAC.h"
#include "TestDAC_private.h"

/* Block states (auto storage) */
DW_TestDAC_T TestDAC_DW;

/* Real-time model */
RT_MODEL_TestDAC_T TestDAC_M_;
RT_MODEL_TestDAC_T *const TestDAC_M = &TestDAC_M_;

/* Model step function */
void TestDAC_step(void)
{
  /* S-Function (DACI2CSend): '<S1>/S-Function Builder9' */
  DACI2CSend_Outputs_wrapper(&TestDAC_P.Constant_Value,
    &TestDAC_DW.SFunctionBuilder9_DSTATE, &TestDAC_P.SFunctionBuilder9_P1, 1);

  /* S-Function "DACI2CSend_wrapper" Block: <S1>/S-Function Builder9 */
  DACI2CSend_Update_wrapper(&TestDAC_P.Constant_Value,
    &TestDAC_DW.SFunctionBuilder9_DSTATE, &TestDAC_P.SFunctionBuilder9_P1, 1);
}

/* Model initialize function */
void TestDAC_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TestDAC_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TestDAC_DW, 0,
                sizeof(DW_TestDAC_T));

  /* S-Function Block: <S1>/S-Function Builder9 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        TestDAC_DW.SFunctionBuilder9_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void TestDAC_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
