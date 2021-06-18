/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestI2C.c
 *
 * Code generated for Simulink model 'TestI2C'.
 *
 * Model version                  : 1.74
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 14:36:11 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TestI2C.h"
#include "TestI2C_private.h"

/* Block states (auto storage) */
DW_TestI2C_T TestI2C_DW;

/* Real-time model */
RT_MODEL_TestI2C_T TestI2C_M_;
RT_MODEL_TestI2C_T *const TestI2C_M = &TestI2C_M_;

/* Model step function */
void TestI2C_step(void)
{
  /* S-Function (DACI2C1): '<S1>/S-Function Builder12' */
  DACI2C1_Outputs_wrapper( &TestI2C_DW.SFunctionBuilder12_DSTATE);

  /* S-Function "DACI2C1_wrapper" Block: <S1>/S-Function Builder12 */
  DACI2C1_Update_wrapper(&TestI2C_DW.SFunctionBuilder12_DSTATE);
}

/* Model initialize function */
void TestI2C_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TestI2C_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TestI2C_DW, 0,
                sizeof(DW_TestI2C_T));

  /* S-Function Block: <S1>/S-Function Builder12 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        TestI2C_DW.SFunctionBuilder12_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void TestI2C_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
