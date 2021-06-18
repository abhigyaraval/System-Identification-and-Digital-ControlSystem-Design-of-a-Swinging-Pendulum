/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Exp4_1_SerialB.c
 *
 * Code generated for Simulink model 'Exp4_1_SerialB'.
 *
 * Model version                  : 1.156
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Oct 21 12:42:26 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Exp4_1_SerialB.h"
#include "Exp4_1_SerialB_private.h"

/* Block signals (auto storage) */
B_Exp4_1_SerialB_T Exp4_1_SerialB_B;

/* Block states (auto storage) */
DW_Exp4_1_SerialB_T Exp4_1_SerialB_DW;

/* Real-time model */
RT_MODEL_Exp4_1_SerialB_T Exp4_1_SerialB_M_;
RT_MODEL_Exp4_1_SerialB_T *const Exp4_1_SerialB_M = &Exp4_1_SerialB_M_;

/* Model step function */
void Exp4_1_SerialB_step(void)
{
  real_T rtb_DataTypeConversion4;
  int32_T i;

  /* S-Function (SerialIn): '<S1>/S-Function' */
  SerialIn_Outputs_wrapper( &Exp4_1_SerialB_B.SFunction,
    &Exp4_1_SerialB_DW.SFunction_DSTATE, &Exp4_1_SerialB_P.SFunction_P1, 1);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  rtb_DataTypeConversion4 = Exp4_1_SerialB_B.SFunction;

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion4'
   */
  Exp4_1_SerialB_B.DataTypeConversion1 = Exp4_1_SerialB_B.SFunction;

  /* S-Function (SerialOut): '<S2>/S-Function' */
  SerialOut_Outputs_wrapper(&Exp4_1_SerialB_B.DataTypeConversion1,
    &Exp4_1_SerialB_DW.SFunction_DSTATE_d, &Exp4_1_SerialB_P.SFunction_P1_p, 1);

  /* UnitDelay: '<S3>/Unit Delay' */
  for (i = 0; i < 9; i++) {
    Exp4_1_SerialB_B.UnitDelay[i] = Exp4_1_SerialB_DW.UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S3>/Unit Delay' */

  /* S-Function (SerialMonitorOut9): '<S3>/S-Function' */
  SerialMonitorOut9_Outputs_wrapper(&Exp4_1_SerialB_B.UnitDelay[0],
    &Exp4_1_SerialB_B.SFunction_g[0], &Exp4_1_SerialB_DW.SFunction_DSTATE_f[0],
    &Exp4_1_SerialB_P.SFunction_P1_j, 1, &Exp4_1_SerialB_P.SFunction_P2, 1);

  /* S-Function "SerialIn_wrapper" Block: <S1>/S-Function */
  SerialIn_Update_wrapper( &Exp4_1_SerialB_B.SFunction,
    &Exp4_1_SerialB_DW.SFunction_DSTATE, &Exp4_1_SerialB_P.SFunction_P1, 1);

  /* S-Function "SerialOut_wrapper" Block: <S2>/S-Function */
  SerialOut_Update_wrapper(&Exp4_1_SerialB_B.DataTypeConversion1,
    &Exp4_1_SerialB_DW.SFunction_DSTATE_d, &Exp4_1_SerialB_P.SFunction_P1_p, 1);

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[0] = (real32_T)rtb_DataTypeConversion4;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[1] = (real32_T)
    Exp4_1_SerialB_P.Constant1_Value;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[2] = (real32_T)
    Exp4_1_SerialB_P.Constant1_Value;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[3] = (real32_T)0.0;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[4] = (real32_T)0.0;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[5] = (real32_T)0.0;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[6] = (real32_T)0.0;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[7] = (real32_T)0.0;
  Exp4_1_SerialB_DW.UnitDelay_DSTATE[8] = (real32_T)0.0;

  /* S-Function "SerialMonitorOut9_wrapper" Block: <S3>/S-Function */
  SerialMonitorOut9_Update_wrapper(&Exp4_1_SerialB_B.UnitDelay[0],
    &Exp4_1_SerialB_B.SFunction_g[0], &Exp4_1_SerialB_DW.SFunction_DSTATE_f[0],
    &Exp4_1_SerialB_P.SFunction_P1_j, 1, &Exp4_1_SerialB_P.SFunction_P2, 1);
}

/* Model initialize function */
void Exp4_1_SerialB_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Exp4_1_SerialB_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Exp4_1_SerialB_B), 0,
                sizeof(B_Exp4_1_SerialB_T));

  /* states (dwork) */
  (void) memset((void *)&Exp4_1_SerialB_DW, 0,
                sizeof(DW_Exp4_1_SerialB_T));

  {
    int32_T i;

    /* S-Function Block: <S1>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Exp4_1_SerialB_DW.SFunction_DSTATE = initVector[0];
        }
      }
    }

    /* S-Function Block: <S2>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Exp4_1_SerialB_DW.SFunction_DSTATE_d = initVector[0];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      Exp4_1_SerialB_DW.UnitDelay_DSTATE[i] =
        Exp4_1_SerialB_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */

    /* S-Function Block: <S3>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &Exp4_1_SerialB_DW.SFunction_DSTATE_f[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void Exp4_1_SerialB_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
