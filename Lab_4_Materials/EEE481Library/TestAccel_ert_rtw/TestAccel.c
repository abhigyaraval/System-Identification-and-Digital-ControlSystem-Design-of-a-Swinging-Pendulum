/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestAccel.c
 *
 * Code generated for Simulink model 'TestAccel'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 09 10:48:08 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TestAccel.h"
#include "TestAccel_private.h"

/* Block signals (auto storage) */
B_TestAccel_T TestAccel_B;

/* Block states (auto storage) */
DW_TestAccel_T TestAccel_DW;

/* Real-time model */
RT_MODEL_TestAccel_T TestAccel_M_;
RT_MODEL_TestAccel_T *const TestAccel_M = &TestAccel_M_;

/* Model step function */
void TestAccel_step(void)
{
  /* S-Function (LIS3DHAccelerometer1): '<Root>/S-Function Builder9' */
  LIS3DHAccelerometer1_Outputs_wrapper( &TestAccel_B.SFunctionBuilder9_o1,
    &TestAccel_B.SFunctionBuilder9_o2, &TestAccel_B.SFunctionBuilder9_o3,
    &TestAccel_DW.SFunctionBuilder9_DSTATE, &TestAccel_P.SFunctionBuilder9_P1, 1,
    &TestAccel_P.SFunctionBuilder9_P2, 1);

  /* S-Function "LIS3DHAccelerometer1_wrapper" Block: <Root>/S-Function Builder9 */
  LIS3DHAccelerometer1_Update_wrapper( &TestAccel_B.SFunctionBuilder9_o1,
    &TestAccel_B.SFunctionBuilder9_o2, &TestAccel_B.SFunctionBuilder9_o3,
    &TestAccel_DW.SFunctionBuilder9_DSTATE, &TestAccel_P.SFunctionBuilder9_P1, 1,
    &TestAccel_P.SFunctionBuilder9_P2, 1);
}

/* Model initialize function */
void TestAccel_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TestAccel_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &TestAccel_B), 0,
                sizeof(B_TestAccel_T));

  /* states (dwork) */
  (void) memset((void *)&TestAccel_DW, 0,
                sizeof(DW_TestAccel_T));

  /* S-Function Block: <Root>/S-Function Builder9 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        TestAccel_DW.SFunctionBuilder9_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void TestAccel_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
