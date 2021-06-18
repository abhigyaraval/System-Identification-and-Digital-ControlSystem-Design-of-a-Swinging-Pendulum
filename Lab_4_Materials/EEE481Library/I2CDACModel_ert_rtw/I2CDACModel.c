/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: I2CDACModel.c
 *
 * Code generated for Simulink model 'I2CDACModel'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jan 02 15:12:51 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "I2CDACModel.h"
#include "I2CDACModel_private.h"

/* Block states (auto storage) */
DW_I2CDACModel_T I2CDACModel_DW;

/* Real-time model */
RT_MODEL_I2CDACModel_T I2CDACModel_M_;
RT_MODEL_I2CDACModel_T *const I2CDACModel_M = &I2CDACModel_M_;

/* Model step function */
void I2CDACModel_step(void)
{
  /* S-Function (DACI2C1): '<S1>/S-Function Builder12' */
  DACI2C1_Outputs_wrapper( &I2CDACModel_DW.SFunctionBuilder12_DSTATE);

  /* S-Function "DACI2C1_wrapper" Block: <S1>/S-Function Builder12 */
  DACI2C1_Update_wrapper(&I2CDACModel_DW.SFunctionBuilder12_DSTATE);
}

/* Model initialize function */
void I2CDACModel_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(I2CDACModel_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&I2CDACModel_DW, 0,
                sizeof(DW_I2CDACModel_T));

  /* S-Function Block: <S1>/S-Function Builder12 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        I2CDACModel_DW.SFunctionBuilder12_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void I2CDACModel_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
