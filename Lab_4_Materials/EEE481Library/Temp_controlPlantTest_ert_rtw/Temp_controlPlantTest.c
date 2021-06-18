/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Temp_controlPlantTest.c
 *
 * Code generated for Simulink model 'Temp_controlPlantTest'.
 *
 * Model version                  : 1.98
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 05 12:56:59 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Temp_controlPlantTest.h"
#include "Temp_controlPlantTest_private.h"

/* Block signals (auto storage) */
B_Temp_controlPlantTest_T Temp_controlPlantTest_B;

/* Block states (auto storage) */
DW_Temp_controlPlantTest_T Temp_controlPlantTest_DW;

/* Real-time model */
RT_MODEL_Temp_controlPlantTes_T Temp_controlPlantTest_M_;
RT_MODEL_Temp_controlPlantTes_T *const Temp_controlPlantTest_M =
  &Temp_controlPlantTest_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Temp_controlPlantTest_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Temp_controlPlantTest_M, 1));
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
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 1 */
  Temp_controlPlantTest_M->Timing.RateInteraction.TID0_1 =
    (Temp_controlPlantTest_M->Timing.TaskCounters.TID[1] == 0);

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Temp_controlPlantTest_M->Timing.TaskCounters.TID[1])++;
  if ((Temp_controlPlantTest_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [1.0s, 0.0s] */
    Temp_controlPlantTest_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void Temp_controlPlantTest_step0(void) /* Sample time: [0.05s, 0.0s] */
{
  real_T y;
  real_T rtb_endpoint4;
  real_T rtb_unitconversion;
  real_T rtb_Proportional1;
  int32_T i;
  real_T rtb_Proportional2;

  {                                    /* Sample time: [0.05s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* Fcn: '<S5>/end-point L4' incorporates:
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator1'
   */
  rtb_endpoint4 = Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[9];

  /* RateTransition: '<S1>/Rate Transition2' */
  if (Temp_controlPlantTest_M->Timing.RateInteraction.TID0_1) {
    Temp_controlPlantTest_B.RateTransition2 = rtb_endpoint4;

    /* RateTransition: '<S1>/Rate Transition1' */
    Temp_controlPlantTest_B.RateTransition1 =
      Temp_controlPlantTest_DW.RateTransition1_Buffer0;
  }

  /* End of RateTransition: '<S1>/Rate Transition2' */

  /* Step: '<S1>/Step' */
  if (((Temp_controlPlantTest_M->Timing.clockTick0) * 0.05) <
      Temp_controlPlantTest_P.Step_Time) {
    rtb_endpoint4 = Temp_controlPlantTest_P.Step_Y0;
  } else {
    rtb_endpoint4 = Temp_controlPlantTest_P.Step_YFinal;
  }

  /* End of Step: '<S1>/Step' */

  /* Step: '<S1>/Step1' */
  if (((Temp_controlPlantTest_M->Timing.clockTick0) * 0.05) <
      Temp_controlPlantTest_P.Step1_Time) {
    rtb_Proportional1 = Temp_controlPlantTest_P.Step1_Y0;
  } else {
    rtb_Proportional1 = Temp_controlPlantTest_P.Step1_YFinal;
  }

  /* End of Step: '<S1>/Step1' */

  /* Gain: '<S5>/unit conversion' */
  rtb_unitconversion = Temp_controlPlantTest_P.unitconversion_Gain *
    rtb_Proportional1;

  /* Sum: '<S6>/Sum5' incorporates:
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator1'
   */
  Temp_controlPlantTest_B.Sum5[0] =
    Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[0] - rtb_endpoint4;
  for (i = 0; i < 9; i++) {
    Temp_controlPlantTest_B.Sum5[i + 1] =
      Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[i + 1] -
      Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[i];
  }

  /* End of Sum: '<S6>/Sum5' */

  /* Gain: '<S6>/Proportional4' */
  y = Temp_controlPlantTest_P.TubeTempnstageapp_L / 0.031415926535897934;

  /* Saturate: '<S5>/Saturation' */
  if (Temp_controlPlantTest_B.RateTransition1 >
      Temp_controlPlantTest_P.Saturation_UpperSat) {
    rtb_Proportional1 = Temp_controlPlantTest_P.Saturation_UpperSat;
  } else if (Temp_controlPlantTest_B.RateTransition1 <
             Temp_controlPlantTest_P.Saturation_LowerSat) {
    rtb_Proportional1 = Temp_controlPlantTest_P.Saturation_LowerSat;
  } else {
    rtb_Proportional1 = Temp_controlPlantTest_B.RateTransition1;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S6>/Proportional1' incorporates:
   *  Gain: '<S5>/qmax'
   */
  rtb_Proportional1 = Temp_controlPlantTest_P.qmax_Gain * rtb_Proportional1 *
    Temp_controlPlantTest_P.Proportional1_Gain;

  /* Fcn: '<S6>/end-point 4' incorporates:
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   */
  rtb_endpoint4 = Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[0] -
    (Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[0] - 25.0) * 0.25;
  for (i = 0; i < 10; i++) {
    /* Gain: '<S6>/Proportional2' incorporates:
     *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator1'
     *  Sum: '<S6>/Sum4'
     */
    rtb_Proportional2 =
      (Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[i] -
       Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[i]) *
      Temp_controlPlantTest_P.Proportional2_Gain;

    /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator1' incorporates:
     *  Gain: '<S6>/Proportional10'
     *  Gain: '<S6>/Proportional11'
     *  Gain: '<S6>/Proportional13'
     *  Gain: '<S6>/Proportional4'
     *  Gain: '<S6>/Proportional6'
     *  Product: '<S6>/Product'
     *  Sum: '<S6>/Sum1'
     */
    Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[i] +=
      ((Temp_controlPlantTest_P.Proportional10_Gain * rtb_Proportional2 -
        Temp_controlPlantTest_P.Proportional11_Gain *
        Temp_controlPlantTest_B.Sum5[i] * y * rtb_unitconversion) +
       Temp_controlPlantTest_P.Proportional13_Gain *
       Temp_controlPlantTest_B.Sum5[i]) *
      Temp_controlPlantTest_P.Proportional6_Gain *
      Temp_controlPlantTest_P.DiscreteTimeIntegrator1_gainval;

    /* Gain: '<S6>/Proportional2' */
    Temp_controlPlantTest_B.Proportional2[i] = rtb_Proportional2;
  }

  /* Sum: '<S6>/Sum7' incorporates:
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   *  Fcn: '<S6>/end-point 3'
   */
  Temp_controlPlantTest_B.Sum5[9] =
    Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[9] -
    (Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[9] - 25.0) * 0.25;
  Temp_controlPlantTest_B.rtb_endpoint4_m[0] = rtb_endpoint4;
  memcpy(&Temp_controlPlantTest_B.Sum5[0],
         &Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[1], 9U * sizeof
         (real_T));
  memcpy(&Temp_controlPlantTest_B.rtb_endpoint4_m[1],
         &Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[0], 9U * sizeof
         (real_T));

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S6>/Constant3'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   *  Gain: '<S6>/Proportional12'
   *  Gain: '<S6>/Proportional3'
   *  Gain: '<S6>/Proportional5'
   *  Gain: '<S6>/Proportional7'
   *  Gain: '<S6>/Proportional8'
   *  Gain: '<S6>/Proportional9'
   *  Sum: '<S6>/Sum2'
   *  Sum: '<S6>/Sum3'
   *  Sum: '<S6>/Sum7'
   */
  for (i = 0; i < 10; i++) {
    Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[i] +=
      ((((Temp_controlPlantTest_B.Sum5[i] -
          Temp_controlPlantTest_P.Proportional7_Gain *
          Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[i]) +
         Temp_controlPlantTest_B.rtb_endpoint4_m[i]) *
        Temp_controlPlantTest_P.Proportional12_Gain *
        Temp_controlPlantTest_P.Proportional8_Gain + (rtb_Proportional1 -
         Temp_controlPlantTest_P.Proportional9_Gain *
         Temp_controlPlantTest_B.Proportional2[i])) -
       (Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[i] -
        Temp_controlPlantTest_P.TubeTempnstageapp_T_amb) *
       Temp_controlPlantTest_P.Proportional3_Gain) *
      Temp_controlPlantTest_P.Proportional5_Gain *
      Temp_controlPlantTest_P.DiscreteTimeIntegrator_gainval;
  }

  /* End of Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.05, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Temp_controlPlantTest_M->Timing.clockTick0++;
}

/* Model step function for TID1 */
void Temp_controlPlantTest_step1(void) /* Sample time: [1.0s, 0.0s] */
{
  real_T rtb_Gain_l;
  int32_T i;

  /* DataTypeConversion: '<S2>/Data Type Conversion1' */
  Temp_controlPlantTest_B.DataTypeConversion1 = (real32_T)
    Temp_controlPlantTest_B.RateTransition2;

  /* S-Function (SerialOut): '<S2>/S-Function' */
  SerialOut_Outputs_wrapper(&Temp_controlPlantTest_B.DataTypeConversion1,
    &Temp_controlPlantTest_DW.SFunction_DSTATE,
    &Temp_controlPlantTest_P.SFunction_P1, 1);

  /* S-Function (PWMRead): '<S4>/S-Function2' */
  PWMRead_Outputs_wrapper( &Temp_controlPlantTest_B.SFunction2,
    &Temp_controlPlantTest_DW.SFunction2_DSTATE);

  /* Gain: '<Root>/Gain' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   *  Gain: '<S4>/Gain'
   */
  rtb_Gain_l = Temp_controlPlantTest_P.Gain_Gain * (real_T)
    Temp_controlPlantTest_B.SFunction2 * Temp_controlPlantTest_P.Gain_Gain_o;

  /* UnitDelay: '<S3>/Unit Delay' */
  for (i = 0; i < 9; i++) {
    Temp_controlPlantTest_B.UnitDelay[i] =
      Temp_controlPlantTest_DW.UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S3>/Unit Delay' */

  /* S-Function (SerialMonitorOut9): '<S3>/S-Function' */
  SerialMonitorOut9_Outputs_wrapper(&Temp_controlPlantTest_B.UnitDelay[0],
    &Temp_controlPlantTest_B.SFunction[0],
    &Temp_controlPlantTest_DW.SFunction_DSTATE_n[0],
    &Temp_controlPlantTest_P.SFunction_P1_c, 1,
    &Temp_controlPlantTest_P.SFunction_P2, 1);

  /* S-Function "SerialOut_wrapper" Block: <S2>/S-Function */
  SerialOut_Update_wrapper(&Temp_controlPlantTest_B.DataTypeConversion1,
    &Temp_controlPlantTest_DW.SFunction_DSTATE,
    &Temp_controlPlantTest_P.SFunction_P1, 1);

  /* S-Function "PWMRead_wrapper" Block: <S4>/S-Function2 */
  PWMRead_Update_wrapper( &Temp_controlPlantTest_B.SFunction2,
    &Temp_controlPlantTest_DW.SFunction2_DSTATE);

  /* Update for RateTransition: '<S1>/Rate Transition1' */
  Temp_controlPlantTest_DW.RateTransition1_Buffer0 = rtb_Gain_l;

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[0] = (real32_T)
    Temp_controlPlantTest_B.RateTransition2;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[1] = (real32_T)rtb_Gain_l;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[2] = (real32_T)0.0;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[3] = (real32_T)0.0;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[4] = (real32_T)0.0;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[5] = (real32_T)0.0;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[6] = (real32_T)0.0;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[7] = (real32_T)0.0;
  Temp_controlPlantTest_DW.UnitDelay_DSTATE[8] = (real32_T)0.0;

  /* S-Function "SerialMonitorOut9_wrapper" Block: <S3>/S-Function */
  SerialMonitorOut9_Update_wrapper(&Temp_controlPlantTest_B.UnitDelay[0],
    &Temp_controlPlantTest_B.SFunction[0],
    &Temp_controlPlantTest_DW.SFunction_DSTATE_n[0],
    &Temp_controlPlantTest_P.SFunction_P1_c, 1,
    &Temp_controlPlantTest_P.SFunction_P2, 1);
}

/* Model initialize function */
void Temp_controlPlantTest_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Temp_controlPlantTest_M, 0,
                sizeof(RT_MODEL_Temp_controlPlantTes_T));

  /* block I/O */
  (void) memset(((void *) &Temp_controlPlantTest_B), 0,
                sizeof(B_Temp_controlPlantTest_T));

  /* states (dwork) */
  (void) memset((void *)&Temp_controlPlantTest_DW, 0,
                sizeof(DW_Temp_controlPlantTest_T));

  {
    int32_T i;

    /* Start for RateTransition: '<S1>/Rate Transition1' */
    Temp_controlPlantTest_B.RateTransition1 =
      Temp_controlPlantTest_P.RateTransition1_X0;

    /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator1' */
    memcpy(&Temp_controlPlantTest_DW.DiscreteTimeIntegrator1_DSTATE[0],
           &Temp_controlPlantTest_P.DiscreteTimeIntegrator1_IC[0], 10U * sizeof
           (real_T));

    /* S-Function Block: <S2>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Temp_controlPlantTest_DW.SFunction_DSTATE = initVector[0];
        }
      }
    }

    /* S-Function Block: <S4>/S-Function2 */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Temp_controlPlantTest_DW.SFunction2_DSTATE = initVector[0];
        }
      }
    }

    /* InitializeConditions for RateTransition: '<S1>/Rate Transition1' */
    Temp_controlPlantTest_DW.RateTransition1_Buffer0 =
      Temp_controlPlantTest_P.RateTransition1_X0;

    /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    memcpy(&Temp_controlPlantTest_DW.DiscreteTimeIntegrator_DSTATE[0],
           &Temp_controlPlantTest_P.DiscreteTimeIntegrator_IC[0], 10U * sizeof
           (real_T));

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      Temp_controlPlantTest_DW.UnitDelay_DSTATE[i] =
        Temp_controlPlantTest_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */

    /* S-Function Block: <S3>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &Temp_controlPlantTest_DW.SFunction_DSTATE_n[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void Temp_controlPlantTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
