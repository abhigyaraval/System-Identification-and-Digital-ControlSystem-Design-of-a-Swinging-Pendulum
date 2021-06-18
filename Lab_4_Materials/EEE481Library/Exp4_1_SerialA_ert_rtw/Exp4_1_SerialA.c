/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Exp4_1_SerialA.c
 *
 * Code generated for Simulink model 'Exp4_1_SerialA'.
 *
 * Model version                  : 1.165
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Oct 21 12:41:31 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Exp4_1_SerialA.h"
#include "Exp4_1_SerialA_private.h"

/* Block signals (auto storage) */
B_Exp4_1_SerialA_T Exp4_1_SerialA_B;

/* Block states (auto storage) */
DW_Exp4_1_SerialA_T Exp4_1_SerialA_DW;

/* Real-time model */
RT_MODEL_Exp4_1_SerialA_T Exp4_1_SerialA_M_;
RT_MODEL_Exp4_1_SerialA_T *const Exp4_1_SerialA_M = &Exp4_1_SerialA_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Exp4_1_SerialA_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Exp4_1_SerialA_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Exp4_1_SerialA_M->Timing.TaskCounters.TID[1])++;
  if ((Exp4_1_SerialA_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [1.0s, 0.0s] */
    Exp4_1_SerialA_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void Exp4_1_SerialA_step0(void)        /* Sample time: [0.01s, 0.0s] */
{
  {                                    /* Sample time: [0.01s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void Exp4_1_SerialA_step1(void)        /* Sample time: [1.0s, 0.0s] */
{
  real_T rtb_PulseGenerator;
  real_T rtb_DataTypeConversion4;
  int32_T i;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Exp4_1_SerialA_DW.clockTickCounter <
                        Exp4_1_SerialA_P.PulseGenerator_Duty) &&
    (Exp4_1_SerialA_DW.clockTickCounter >= 0) ?
    Exp4_1_SerialA_P.PulseGenerator_Amp : 0.0;
  if (Exp4_1_SerialA_DW.clockTickCounter >=
      Exp4_1_SerialA_P.PulseGenerator_Period - 1.0) {
    Exp4_1_SerialA_DW.clockTickCounter = 0;
  } else {
    Exp4_1_SerialA_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DataTypeConversion: '<S2>/Data Type Conversion1' */
  Exp4_1_SerialA_B.DataTypeConversion1 = (real32_T)rtb_PulseGenerator;

  /* S-Function (SerialOut): '<S2>/S-Function' */
  SerialOut_Outputs_wrapper(&Exp4_1_SerialA_B.DataTypeConversion1,
    &Exp4_1_SerialA_DW.SFunction_DSTATE, &Exp4_1_SerialA_P.SFunction_P1, 1);

  /* S-Function (SerialIn): '<S1>/S-Function' */
  SerialIn_Outputs_wrapper( &Exp4_1_SerialA_B.SFunction,
    &Exp4_1_SerialA_DW.SFunction_DSTATE_c, &Exp4_1_SerialA_P.SFunction_P1_p, 1);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  rtb_DataTypeConversion4 = Exp4_1_SerialA_B.SFunction;

  /* UnitDelay: '<S3>/Unit Delay' */
  for (i = 0; i < 9; i++) {
    Exp4_1_SerialA_B.UnitDelay[i] = Exp4_1_SerialA_DW.UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S3>/Unit Delay' */

  /* S-Function (SerialMonitorOut9): '<S3>/S-Function' */
  SerialMonitorOut9_Outputs_wrapper(&Exp4_1_SerialA_B.UnitDelay[0],
    &Exp4_1_SerialA_B.SFunction_h[0], &Exp4_1_SerialA_DW.SFunction_DSTATE_g[0],
    &Exp4_1_SerialA_P.SFunction_P1_p0, 1, &Exp4_1_SerialA_P.SFunction_P2, 1);

  /* S-Function "SerialOut_wrapper" Block: <S2>/S-Function */
  SerialOut_Update_wrapper(&Exp4_1_SerialA_B.DataTypeConversion1,
    &Exp4_1_SerialA_DW.SFunction_DSTATE, &Exp4_1_SerialA_P.SFunction_P1, 1);

  /* S-Function "SerialIn_wrapper" Block: <S1>/S-Function */
  SerialIn_Update_wrapper( &Exp4_1_SerialA_B.SFunction,
    &Exp4_1_SerialA_DW.SFunction_DSTATE_c, &Exp4_1_SerialA_P.SFunction_P1_p, 1);

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[0] = (real32_T)rtb_PulseGenerator;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[1] = (real32_T)rtb_DataTypeConversion4;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[2] = (real32_T)
    Exp4_1_SerialA_P.Constant1_Value;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[3] = (real32_T)0.0;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[4] = (real32_T)0.0;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[5] = (real32_T)0.0;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[6] = (real32_T)0.0;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[7] = (real32_T)0.0;
  Exp4_1_SerialA_DW.UnitDelay_DSTATE[8] = (real32_T)0.0;

  /* S-Function "SerialMonitorOut9_wrapper" Block: <S3>/S-Function */
  SerialMonitorOut9_Update_wrapper(&Exp4_1_SerialA_B.UnitDelay[0],
    &Exp4_1_SerialA_B.SFunction_h[0], &Exp4_1_SerialA_DW.SFunction_DSTATE_g[0],
    &Exp4_1_SerialA_P.SFunction_P1_p0, 1, &Exp4_1_SerialA_P.SFunction_P2, 1);
}

/* Model initialize function */
void Exp4_1_SerialA_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Exp4_1_SerialA_M, 0,
                sizeof(RT_MODEL_Exp4_1_SerialA_T));

  /* block I/O */
  (void) memset(((void *) &Exp4_1_SerialA_B), 0,
                sizeof(B_Exp4_1_SerialA_T));

  /* states (dwork) */
  (void) memset((void *)&Exp4_1_SerialA_DW, 0,
                sizeof(DW_Exp4_1_SerialA_T));

  {
    int32_T i;

    /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
    Exp4_1_SerialA_DW.clockTickCounter = 0;

    /* S-Function Block: <S2>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Exp4_1_SerialA_DW.SFunction_DSTATE = initVector[0];
        }
      }
    }

    /* S-Function Block: <S1>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Exp4_1_SerialA_DW.SFunction_DSTATE_c = initVector[0];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      Exp4_1_SerialA_DW.UnitDelay_DSTATE[i] =
        Exp4_1_SerialA_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */

    /* S-Function Block: <S3>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &Exp4_1_SerialA_DW.SFunction_DSTATE_g[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void Exp4_1_SerialA_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
