/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPOTTestBkp.c
 *
 * Code generated for Simulink model 'SPIPOTTestBkp'.
 *
 * Model version                  : 1.96
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 22 13:24:08 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SPIPOTTestBkp.h"
#include "SPIPOTTestBkp_private.h"

const uint8_T SPIPOTTestBkp_U8GND = 0U;/* uint8_T ground */

/* Block states (auto storage) */
DW_SPIPOTTestBkp_T SPIPOTTestBkp_DW;

/* Real-time model */
RT_MODEL_SPIPOTTestBkp_T SPIPOTTestBkp_M_;
RT_MODEL_SPIPOTTestBkp_T *const SPIPOTTestBkp_M = &SPIPOTTestBkp_M_;

/* Model step function */
void SPIPOTTestBkp_step(void)
{
  /* S-Function (SPIOut2): '<Root>/S-Function2' */
  SPIOut2_Outputs_wrapper((uint8_T*)&SPIPOTTestBkp_U8GND, (uint8_T*)
    &SPIPOTTestBkp_U8GND, &SPIPOTTestBkp_DW.SFunction2_DSTATE,
    &SPIPOTTestBkp_P.SFunction2_P1, 1, &SPIPOTTestBkp_P.SFunction2_P2, 1);

  /* S-Function "SPIOut2_wrapper" Block: <Root>/S-Function2 */
  SPIOut2_Update_wrapper((uint8_T*)&SPIPOTTestBkp_U8GND, (uint8_T*)
    &SPIPOTTestBkp_U8GND, &SPIPOTTestBkp_DW.SFunction2_DSTATE,
    &SPIPOTTestBkp_P.SFunction2_P1, 1, &SPIPOTTestBkp_P.SFunction2_P2, 1);
}

/* Model initialize function */
void SPIPOTTestBkp_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SPIPOTTestBkp_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&SPIPOTTestBkp_DW, 0,
                sizeof(DW_SPIPOTTestBkp_T));

  /* S-Function Block: <Root>/S-Function2 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        SPIPOTTestBkp_DW.SFunction2_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void SPIPOTTestBkp_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
