/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pHSystemRead.c
 *
 * Code generated for Simulink model 'pHSystemRead'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Dec 28 14:39:59 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pHSystemRead.h"
#include "pHSystemRead_private.h"

/* Block signals (auto storage) */
B_pHSystemRead_T pHSystemRead_B;

/* Block states (auto storage) */
DW_pHSystemRead_T pHSystemRead_DW;

/* Real-time model */
RT_MODEL_pHSystemRead_T pHSystemRead_M_;
RT_MODEL_pHSystemRead_T *const pHSystemRead_M = &pHSystemRead_M_;

/* Model step function */
void pHSystemRead_step(void)
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion1[9];

  {
    real_T rtb_Clock;
    int32_T i;

    /* Clock: '<Root>/Clock' */
    rtb_Clock = pHSystemRead_M->Timing.t[0];

    /* MATLAB Function: '<Root>/MATLAB Function' */
    /* MATLAB Function 'MATLAB Function': '<S1>:1' */
    /* '<S1>:1:3' if(clock<2) */
    if (rtb_Clock < 2.0) {
      /* '<S1>:1:4' commandNumber=int8(1); */
      pHSystemRead_B.commandNumber = 1;
    } else if ((rtb_Clock >= 100.0) && (rtb_Clock < 200.0)) {
      /* '<S1>:1:5' elseif(clock>=100&&clock<200) */
      /* '<S1>:1:6' commandNumber=int8(0); */
      pHSystemRead_B.commandNumber = 0;
    } else {
      /* '<S1>:1:7' else */
      /* '<S1>:1:8' commandNumber=int8(2); */
      pHSystemRead_B.commandNumber = 2;
    }

    /* '<S1>:1:10' if(clock<2||clock==100||clock>=200) */
    if ((rtb_Clock < 2.0) || (rtb_Clock == 100.0) || (rtb_Clock >= 200.0)) {
      /* '<S1>:1:11' trigger=int8(1); */
      pHSystemRead_B.trigger = 1;
    } else {
      /* '<S1>:1:12' else */
      /* '<S1>:1:13' trigger=int8(0); */
      pHSystemRead_B.trigger = 0;
    }

    /* End of MATLAB Function: '<Root>/MATLAB Function' */

    /* S-Function (pHRead): '<S3>/S-Function3' */
    pHRead_Outputs_wrapper(&pHSystemRead_B.commandNumber,
      &pHSystemRead_B.trigger, &pHSystemRead_B.SFunction3,
      &pHSystemRead_DW.SFunction3_DSTATE[0], &pHSystemRead_P.SFunction3_P1, 1);

    /* DataTypeConversion: '<S2>/Data Type Conversion1' */
    rtb_DataTypeConversion1[0] = (real32_T)pHSystemRead_B.SFunction3;
    rtb_DataTypeConversion1[1] = (real32_T)0.0;
    rtb_DataTypeConversion1[2] = (real32_T)0.0;
    rtb_DataTypeConversion1[3] = (real32_T)0.0;
    rtb_DataTypeConversion1[4] = (real32_T)0.0;
    rtb_DataTypeConversion1[5] = (real32_T)0.0;
    rtb_DataTypeConversion1[6] = (real32_T)0.0;
    rtb_DataTypeConversion1[7] = (real32_T)0.0;
    rtb_DataTypeConversion1[8] = (real32_T)0.0;

    /* UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      pHSystemRead_B.UnitDelay[i] = pHSystemRead_DW.UnitDelay_DSTATE[i];
    }

    /* End of UnitDelay: '<S2>/Unit Delay' */

    /* S-Function (SerialMonitorOut9): '<S2>/S-Function' */
    SerialMonitorOut9_Outputs_wrapper(&pHSystemRead_B.UnitDelay[0],
      &pHSystemRead_B.SFunction[0], &pHSystemRead_DW.SFunction_DSTATE[0],
      &pHSystemRead_P.SFunction_P1, 1, &pHSystemRead_P.SFunction_P2, 1);
  }

  {
    int32_T i;

    /* S-Function "pHRead_wrapper" Block: <S3>/S-Function3 */
    pHRead_Update_wrapper(&pHSystemRead_B.commandNumber, &pHSystemRead_B.trigger,
                          &pHSystemRead_B.SFunction3,
                          &pHSystemRead_DW.SFunction3_DSTATE[0],
                          &pHSystemRead_P.SFunction3_P1, 1);

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      pHSystemRead_DW.UnitDelay_DSTATE[i] = rtb_DataTypeConversion1[i];
    }

    /* End of Update for UnitDelay: '<S2>/Unit Delay' */

    /* S-Function "SerialMonitorOut9_wrapper" Block: <S2>/S-Function */
    SerialMonitorOut9_Update_wrapper(&pHSystemRead_B.UnitDelay[0],
      &pHSystemRead_B.SFunction[0], &pHSystemRead_DW.SFunction_DSTATE[0],
      &pHSystemRead_P.SFunction_P1, 1, &pHSystemRead_P.SFunction_P2, 1);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  pHSystemRead_M->Timing.t[0] =
    (++pHSystemRead_M->Timing.clockTick0) * pHSystemRead_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [1.0s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 1.0, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    pHSystemRead_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void pHSystemRead_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)pHSystemRead_M, 0,
                sizeof(RT_MODEL_pHSystemRead_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&pHSystemRead_M->solverInfo,
                          &pHSystemRead_M->Timing.simTimeStep);
    rtsiSetTPtr(&pHSystemRead_M->solverInfo, &rtmGetTPtr(pHSystemRead_M));
    rtsiSetStepSizePtr(&pHSystemRead_M->solverInfo,
                       &pHSystemRead_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&pHSystemRead_M->solverInfo, (&rtmGetErrorStatus
      (pHSystemRead_M)));
    rtsiSetRTModelPtr(&pHSystemRead_M->solverInfo, pHSystemRead_M);
  }

  rtsiSetSimTimeStep(&pHSystemRead_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&pHSystemRead_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(pHSystemRead_M, &pHSystemRead_M->Timing.tArray[0]);
  pHSystemRead_M->Timing.stepSize0 = 1.0;

  /* block I/O */
  (void) memset(((void *) &pHSystemRead_B), 0,
                sizeof(B_pHSystemRead_T));

  /* states (dwork) */
  (void) memset((void *)&pHSystemRead_DW, 0,
                sizeof(DW_pHSystemRead_T));

  {
    int32_T i;

    /* S-Function Block: <S3>/S-Function3 */
    {
      real_T initVector[2] = { 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &pHSystemRead_DW.SFunction3_DSTATE[0];
        for (i1=0; i1 < 2; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      pHSystemRead_DW.UnitDelay_DSTATE[i] =
        pHSystemRead_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S2>/Unit Delay' */

    /* S-Function Block: <S2>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &pHSystemRead_DW.SFunction_DSTATE[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void pHSystemRead_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
