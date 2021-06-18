/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPOTTest.c
 *
 * Code generated for Simulink model 'SPIPOTTest'.
 *
 * Model version                  : 1.97
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 10:44:30 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SPIPOTTest.h"
#include "SPIPOTTest_private.h"

/* Block states (auto storage) */
DW_SPIPOTTest_T SPIPOTTest_DW;

/* Real-time model */
RT_MODEL_SPIPOTTest_T SPIPOTTest_M_;
RT_MODEL_SPIPOTTest_T *const SPIPOTTest_M = &SPIPOTTest_M_;

/* Model step function */
void SPIPOTTest_step(void)
{
  /* S-Function (SPIPot): '<S4>/S-Function Builder5' */
  SPIPot_Outputs_wrapper(&SPIPOTTest_P.Constant2_Value,
    &SPIPOTTest_P.Constant3_Value, &SPIPOTTest_DW.SFunctionBuilder5_DSTATE,
    &SPIPOTTest_P.SFunctionBuilder5_P1, 1);

  /* S-Function "SPIPot_wrapper" Block: <S4>/S-Function Builder5 */
  SPIPot_Update_wrapper(&SPIPOTTest_P.Constant2_Value,
                        &SPIPOTTest_P.Constant3_Value,
                        &SPIPOTTest_DW.SFunctionBuilder5_DSTATE,
                        &SPIPOTTest_P.SFunctionBuilder5_P1, 1);
}

/* Model initialize function */
void SPIPOTTest_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SPIPOTTest_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&SPIPOTTest_DW, 0,
                sizeof(DW_SPIPOTTest_T));

  /* S-Function Block: <S4>/S-Function Builder5 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        SPIPOTTest_DW.SFunctionBuilder5_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void SPIPOTTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
