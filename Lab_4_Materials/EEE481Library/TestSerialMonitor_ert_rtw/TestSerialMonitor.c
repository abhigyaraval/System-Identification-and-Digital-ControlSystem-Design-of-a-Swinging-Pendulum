/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestSerialMonitor.c
 *
 * Code generated for Simulink model 'TestSerialMonitor'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Dec 26 13:03:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TestSerialMonitor.h"
#include "TestSerialMonitor_private.h"

/* Block signals (auto storage) */
B_TestSerialMonitor_T TestSerialMonitor_B;

/* Block states (auto storage) */
DW_TestSerialMonitor_T TestSerialMonitor_DW;

/* Real-time model */
RT_MODEL_TestSerialMonitor_T TestSerialMonitor_M_;
RT_MODEL_TestSerialMonitor_T *const TestSerialMonitor_M = &TestSerialMonitor_M_;

/* Model step function */
void TestSerialMonitor_step(void)
{
  {
    real_T currentTime;
    real_T currentTime_0;
    real_T currentTime_1;
    real_T currentTime_2;
    real_T currentTime_3;
    int32_T i;

    /* Step: '<Root>/Step' */
    currentTime = TestSerialMonitor_M->Timing.t[0];

    /* Step: '<Root>/Step1' */
    currentTime_0 = TestSerialMonitor_M->Timing.t[0];

    /* Step: '<Root>/Step3' */
    currentTime_1 = TestSerialMonitor_M->Timing.t[0];

    /* Step: '<Root>/Step4' */
    currentTime_2 = TestSerialMonitor_M->Timing.t[0];

    /* Step: '<Root>/Step6' */
    currentTime_3 = TestSerialMonitor_M->Timing.t[0];

    /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
     *  Clock: '<Root>/Clock'
     */
    TestSerialMonitor_B.DataTypeConversion1[0] = (real32_T)
      TestSerialMonitor_M->Timing.t[0];

    /* Step: '<Root>/Step' */
    if (currentTime < TestSerialMonitor_P.Step_Time) {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[1] = (real32_T)
        TestSerialMonitor_P.Step_Y0;
    } else {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[1] = (real32_T)
        TestSerialMonitor_P.Step_YFinal;
    }

    /* Step: '<Root>/Step6' */
    if (currentTime_3 < TestSerialMonitor_P.Step6_Time) {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[2] = (real32_T)
        TestSerialMonitor_P.Step6_Y0;
    } else {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[2] = (real32_T)
        TestSerialMonitor_P.Step6_YFinal;
    }

    /* Step: '<Root>/Step1' */
    if (currentTime_0 < TestSerialMonitor_P.Step1_Time) {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[3] = (real32_T)
        TestSerialMonitor_P.Step1_Y0;
    } else {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[3] = (real32_T)
        TestSerialMonitor_P.Step1_YFinal;
    }

    /* Step: '<Root>/Step4' */
    if (currentTime_2 < TestSerialMonitor_P.Step4_Time) {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[4] = (real32_T)
        TestSerialMonitor_P.Step4_Y0;
    } else {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[4] = (real32_T)
        TestSerialMonitor_P.Step4_YFinal;
    }

    /* Step: '<Root>/Step3' */
    if (currentTime_1 < TestSerialMonitor_P.Step3_Time) {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[5] = (real32_T)
        TestSerialMonitor_P.Step3_Y0;
    } else {
      /* DataTypeConversion: '<S1>/Data Type Conversion1' */
      TestSerialMonitor_B.DataTypeConversion1[5] = (real32_T)
        TestSerialMonitor_P.Step3_YFinal;
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
     *  UnitDelay: '<Root>/Unit Delay'
     *  UnitDelay: '<Root>/Unit Delay1'
     *  UnitDelay: '<Root>/Unit Delay2'
     */
    TestSerialMonitor_B.DataTypeConversion1[6] = (real32_T)
      TestSerialMonitor_DW.UnitDelay2_DSTATE;
    TestSerialMonitor_B.DataTypeConversion1[7] = (real32_T)
      TestSerialMonitor_DW.UnitDelay1_DSTATE;
    TestSerialMonitor_B.DataTypeConversion1[8] = (real32_T)
      TestSerialMonitor_DW.UnitDelay_DSTATE;

    /* UnitDelay: '<S1>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      TestSerialMonitor_B.UnitDelay[i] =
        TestSerialMonitor_DW.UnitDelay_DSTATE_n[i];
    }

    /* End of UnitDelay: '<S1>/Unit Delay' */

    /* S-Function (SerialMonitorOut9): '<S1>/S-Function' */
    SerialMonitorOut9_Outputs_wrapper(&TestSerialMonitor_B.UnitDelay[0],
      &TestSerialMonitor_B.SFunction[0], &TestSerialMonitor_DW.SFunction_DSTATE
      [0], &TestSerialMonitor_P.SFunction_P1, 1,
      &TestSerialMonitor_P.SFunction_P2, 1);

    /* DataTypeConversion: '<S1>/Data Type Conversion2' */
    TestSerialMonitor_B.DataTypeConversion2[0] = TestSerialMonitor_B.SFunction[0];
    TestSerialMonitor_B.DataTypeConversion2[1] = TestSerialMonitor_B.SFunction[1];
    TestSerialMonitor_B.DataTypeConversion2[2] = TestSerialMonitor_B.SFunction[2];
  }

  {
    int32_T i;

    /* Update for UnitDelay: '<Root>/Unit Delay2' */
    TestSerialMonitor_DW.UnitDelay2_DSTATE =
      TestSerialMonitor_B.DataTypeConversion2[0];

    /* Update for UnitDelay: '<Root>/Unit Delay1' */
    TestSerialMonitor_DW.UnitDelay1_DSTATE =
      TestSerialMonitor_B.DataTypeConversion2[1];

    /* Update for UnitDelay: '<Root>/Unit Delay' */
    TestSerialMonitor_DW.UnitDelay_DSTATE =
      TestSerialMonitor_B.DataTypeConversion2[2];

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      TestSerialMonitor_DW.UnitDelay_DSTATE_n[i] =
        TestSerialMonitor_B.DataTypeConversion1[i];
    }

    /* End of Update for UnitDelay: '<S1>/Unit Delay' */

    /* S-Function "SerialMonitorOut9_wrapper" Block: <S1>/S-Function */
    SerialMonitorOut9_Update_wrapper(&TestSerialMonitor_B.UnitDelay[0],
      &TestSerialMonitor_B.SFunction[0], &TestSerialMonitor_DW.SFunction_DSTATE
      [0], &TestSerialMonitor_P.SFunction_P1, 1,
      &TestSerialMonitor_P.SFunction_P2, 1);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  TestSerialMonitor_M->Timing.t[0] =
    (++TestSerialMonitor_M->Timing.clockTick0) *
    TestSerialMonitor_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    TestSerialMonitor_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void TestSerialMonitor_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)TestSerialMonitor_M, 0,
                sizeof(RT_MODEL_TestSerialMonitor_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&TestSerialMonitor_M->solverInfo,
                          &TestSerialMonitor_M->Timing.simTimeStep);
    rtsiSetTPtr(&TestSerialMonitor_M->solverInfo, &rtmGetTPtr
                (TestSerialMonitor_M));
    rtsiSetStepSizePtr(&TestSerialMonitor_M->solverInfo,
                       &TestSerialMonitor_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&TestSerialMonitor_M->solverInfo, (&rtmGetErrorStatus
      (TestSerialMonitor_M)));
    rtsiSetRTModelPtr(&TestSerialMonitor_M->solverInfo, TestSerialMonitor_M);
  }

  rtsiSetSimTimeStep(&TestSerialMonitor_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&TestSerialMonitor_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(TestSerialMonitor_M, &TestSerialMonitor_M->Timing.tArray[0]);
  TestSerialMonitor_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &TestSerialMonitor_B), 0,
                sizeof(B_TestSerialMonitor_T));

  /* states (dwork) */
  (void) memset((void *)&TestSerialMonitor_DW, 0,
                sizeof(DW_TestSerialMonitor_T));

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
    TestSerialMonitor_DW.UnitDelay2_DSTATE =
      TestSerialMonitor_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
    TestSerialMonitor_DW.UnitDelay1_DSTATE =
      TestSerialMonitor_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    TestSerialMonitor_DW.UnitDelay_DSTATE =
      TestSerialMonitor_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      TestSerialMonitor_DW.UnitDelay_DSTATE_n[i] =
        TestSerialMonitor_P.UnitDelay_InitialCondition_h;
    }

    /* End of InitializeConditions for UnitDelay: '<S1>/Unit Delay' */

    /* S-Function Block: <S1>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &TestSerialMonitor_DW.SFunction_DSTATE[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void TestSerialMonitor_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
