/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TempControlExperimentTest.c
 *
 * Code generated for Simulink model 'TempControlExperimentTest'.
 *
 * Model version                  : 1.75
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 05 15:25:55 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TempControlExperimentTest.h"
#include "TempControlExperimentTest_private.h"

/* Block signals (auto storage) */
B_TempControlExperimentTest_T TempControlExperimentTest_B;

/* Block states (auto storage) */
DW_TempControlExperimentTest_T TempControlExperimentTest_DW;

/* Real-time model */
RT_MODEL_TempControlExperimen_T TempControlExperimentTest_M_;
RT_MODEL_TempControlExperimen_T *const TempControlExperimentTest_M =
  &TempControlExperimentTest_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void TempControlExperimentTest_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(TempControlExperimentTest_M, 2));
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

  /* tid 1 shares data with slower tid rate: 2 */
  if (TempControlExperimentTest_M->Timing.TaskCounters.TID[1] == 0) {
    TempControlExperimentTest_M->Timing.RateInteraction.TID1_2 =
      (TempControlExperimentTest_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (TempControlExperimentTest_M->Timing.TaskCounters.TID[2])++;
  if ((TempControlExperimentTest_M->Timing.TaskCounters.TID[2]) > 49) {/* Sample time: [50.0s, 0.0s] */
    TempControlExperimentTest_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function for TID0 */
void TempControlExperimentTest_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion1[9];

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  {
    real_T rtb_Switch1;
    int16_T DataTypeConversion2;
    int32_T i;
    real32_T tmp;

    /* RateTransition: '<S17>/Rate Transition' */
    if (TempControlExperimentTest_M->Timing.RateInteraction.TID1_2) {
      TempControlExperimentTest_B.RateTransition =
        TempControlExperimentTest_DW.RateTransition_Buffer0;
    }

    /* End of RateTransition: '<S17>/Rate Transition' */

    /* DataTypeConversion: '<S5>/Data Type Conversion2' incorporates:
     *  Constant: '<S5>/Constant'
     *  Sum: '<S5>/Sum'
     */
    rtb_Switch1 = floor(TempControlExperimentTest_B.RateTransition +
                        TempControlExperimentTest_P.prbs2_initLevel);
    if (rtIsNaN(rtb_Switch1) || rtIsInf(rtb_Switch1)) {
      rtb_Switch1 = 0.0;
    } else {
      rtb_Switch1 = fmod(rtb_Switch1, 65536.0);
    }

    DataTypeConversion2 = (int16_T)(rtb_Switch1 < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-rtb_Switch1 : (int32_T)(int16_T)(uint16_T)rtb_Switch1);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion2' */

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Constant'
     */
    if (DataTypeConversion2 > TempControlExperimentTest_P.Switch_Threshold_j) {
      rtb_Switch1 = DataTypeConversion2;
    } else {
      rtb_Switch1 = TempControlExperimentTest_P.Constant_Value;
    }

    /* End of Switch: '<S1>/Switch' */

    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    if (rtb_Switch1 > TempControlExperimentTest_P.Switch1_Threshold) {
      rtb_Switch1 = TempControlExperimentTest_P.Constant1_Value;
    }

    /* End of Switch: '<S1>/Switch1' */

    /* DataTypeConversion: '<S1>/Data Type Conversion1' */
    rtb_Switch1 = floor(rtb_Switch1);
    if (rtIsNaN(rtb_Switch1) || rtIsInf(rtb_Switch1)) {
      rtb_Switch1 = 0.0;
    } else {
      rtb_Switch1 = fmod(rtb_Switch1, 65536.0);
    }

    TempControlExperimentTest_B.DataTypeConversion1 = (int16_T)(rtb_Switch1 <
      0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_Switch1 : (int32_T)
      (int16_T)(uint16_T)rtb_Switch1);

    /* End of DataTypeConversion: '<S1>/Data Type Conversion1' */

    /* S-Function (Pwm12BOut): '<S1>/S-Function' */
    Pwm12BOut_Outputs_wrapper(&TempControlExperimentTest_B.DataTypeConversion1,
      &TempControlExperimentTest_DW.SFunction_DSTATE,
      &TempControlExperimentTest_P.SFunction_P1, 1);

    /* S-Function (SerialIn): '<S2>/S-Function' */
    SerialIn_Outputs_wrapper( &TempControlExperimentTest_B.SFunction,
      &TempControlExperimentTest_DW.SFunction_DSTATE_m,
      &TempControlExperimentTest_P.SFunction_P1_c, 1);

    /* DataTypeConversion: '<S2>/Data Type Conversion4' */
    tmp = (real32_T)floor(TempControlExperimentTest_B.SFunction);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 65536.0F);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
     *  DataTypeConversion: '<S2>/Data Type Conversion4'
     */
    rtb_DataTypeConversion1[0] = (real32_T)(tmp < 0.0F ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);
    rtb_DataTypeConversion1[1] = DataTypeConversion2;
    rtb_DataTypeConversion1[2] = 0;
    rtb_DataTypeConversion1[3] = 0;
    rtb_DataTypeConversion1[4] = 0;
    rtb_DataTypeConversion1[5] = 0;
    rtb_DataTypeConversion1[6] = 0;
    rtb_DataTypeConversion1[7] = 0;
    rtb_DataTypeConversion1[8] = 0;

    /* UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      TempControlExperimentTest_B.UnitDelay[i] =
        TempControlExperimentTest_DW.UnitDelay_DSTATE[i];
    }

    /* End of UnitDelay: '<S3>/Unit Delay' */

    /* S-Function (SerialMonitorOut9): '<S3>/S-Function' */
    SerialMonitorOut9_Outputs_wrapper(&TempControlExperimentTest_B.UnitDelay[0],
      &TempControlExperimentTest_B.SFunction_c[0],
      &TempControlExperimentTest_DW.SFunction_DSTATE_k[0],
      &TempControlExperimentTest_P.SFunction_P1_j, 1,
      &TempControlExperimentTest_P.SFunction_P2, 1);
  }

  {
    int32_T i;

    /* S-Function "Pwm12BOut_wrapper" Block: <S1>/S-Function */
    Pwm12BOut_Update_wrapper(&TempControlExperimentTest_B.DataTypeConversion1,
      &TempControlExperimentTest_DW.SFunction_DSTATE,
      &TempControlExperimentTest_P.SFunction_P1, 1);

    /* S-Function "SerialIn_wrapper" Block: <S2>/S-Function */
    SerialIn_Update_wrapper( &TempControlExperimentTest_B.SFunction,
      &TempControlExperimentTest_DW.SFunction_DSTATE_m,
      &TempControlExperimentTest_P.SFunction_P1_c, 1);

    /* Update for UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      TempControlExperimentTest_DW.UnitDelay_DSTATE[i] =
        rtb_DataTypeConversion1[i];
    }

    /* End of Update for UnitDelay: '<S3>/Unit Delay' */

    /* S-Function "SerialMonitorOut9_wrapper" Block: <S3>/S-Function */
    SerialMonitorOut9_Update_wrapper(&TempControlExperimentTest_B.UnitDelay[0],
      &TempControlExperimentTest_B.SFunction_c[0],
      &TempControlExperimentTest_DW.SFunction_DSTATE_k[0],
      &TempControlExperimentTest_P.SFunction_P1_j, 1,
      &TempControlExperimentTest_P.SFunction_P2, 1);
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++TempControlExperimentTest_M->Timing.clockTick0)) {
    ++TempControlExperimentTest_M->Timing.clockTickH0;
  }

  TempControlExperimentTest_M->Timing.t[0] =
    TempControlExperimentTest_M->Timing.clockTick0 *
    TempControlExperimentTest_M->Timing.stepSize0 +
    TempControlExperimentTest_M->Timing.clockTickH0 *
    TempControlExperimentTest_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  TempControlExperimentTest_M->Timing.clockTick1++;
  if (!TempControlExperimentTest_M->Timing.clockTick1) {
    TempControlExperimentTest_M->Timing.clockTickH1++;
  }
}

/* Model step function for TID2 */
void TempControlExperimentTest_step2(void) /* Sample time: [50.0s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_Level;
  real_T rtb_Switch;
  uint32_T rtb_FixPtSwitch;
  int16_T rtb_Init;
  int16_T rtb_LogicalOperator2;
  int16_T rtb_Init_l;
  int16_T rtb_Init_i;
  int16_T rtb_Init_j;
  int16_T rtb_Init_c;

  {
    int8_T rtb_y[6];
    int8_T rtb_DataTypeConversion[6];
    int16_T rtb_Init_d;
    uint32_T rtb_FixPtSum1;
    int32_T i;

    /* MATLAB Function: '<S17>/MATLAB Function' */
    /* MATLAB Function 'prbs1/psbs_6bits/MATLAB Function': '<S19>:1' */
    /* '<S19>:1:3' y = zeros(6,1); */
    /*  % s = de2bi(u,16); */
    /*  s = dec2bin(u,16); */
    /* '<S19>:1:6' s = ['1','1','0','1','0','0','1']; */
    /* '<S19>:1:7' y(1) = s(end-1)-48; */
    rtb_y[0] = 0;

    /* '<S19>:1:8' y(2) = s(end-2)-48; */
    rtb_y[1] = 0;

    /* '<S19>:1:9' y(3) = s(end-3)-48; */
    rtb_y[2] = 1;

    /* '<S19>:1:10' y(4) = s(end-4)-48; */
    rtb_y[3] = 0;

    /* '<S19>:1:11' y(5) = s(end-5)-48; */
    rtb_y[4] = 1;

    /* '<S19>:1:12' y(6) = s(end-6)-48; */
    rtb_y[5] = 1;

    /* DataTypeConversion: '<S17>/Data Type Conversion' */
    for (i = 0; i < 6; i++) {
      rtb_DataTypeConversion[i] = (int8_T)(int32_T)fmod(rtb_y[i], 65536.0);
    }

    /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

    /* Switch: '<S25>/Init' incorporates:
     *  UnitDelay: '<S25>/FixPt Unit Delay1'
     *  UnitDelay: '<S25>/FixPt Unit Delay2'
     */
    if (TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE != 0) {
      rtb_Init_d = rtb_DataTypeConversion[5];
    } else {
      rtb_Init_d = TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE;
    }

    /* End of Switch: '<S25>/Init' */

    /* Gain: '<S17>/+//- Level' incorporates:
     *  Constant: '<S17>/Constant1'
     *  Gain: '<S17>/Gain'
     *  Sum: '<S17>/Sum'
     */
    rtb_Level = ((real_T)(TempControlExperimentTest_P.Gain_Gain * rtb_Init_d) *
                 0.0001220703125 - TempControlExperimentTest_P.Constant1_Value_k)
      * TempControlExperimentTest_P.prbs2_Lv;

    /* Sum: '<S26>/FixPt Sum1' incorporates:
     *  Constant: '<S26>/FixPt Constant'
     *  UnitDelay: '<S18>/Output'
     */
    rtb_FixPtSum1 = TempControlExperimentTest_DW.Output_DSTATE +
      TempControlExperimentTest_P.FixPtConstant_Value;

    /* Switch: '<S27>/FixPt Switch' incorporates:
     *  Constant: '<S27>/Constant'
     */
    if (rtb_FixPtSum1 > TempControlExperimentTest_P.WrapToZero_Threshold) {
      rtb_FixPtSwitch = TempControlExperimentTest_P.Constant_Value_h;
    } else {
      rtb_FixPtSwitch = rtb_FixPtSum1;
    }

    /* End of Switch: '<S27>/FixPt Switch' */

    /* Switch: '<S24>/Init' incorporates:
     *  UnitDelay: '<S24>/FixPt Unit Delay1'
     *  UnitDelay: '<S24>/FixPt Unit Delay2'
     */
    if (TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_o != 0) {
      rtb_Init = rtb_DataTypeConversion[4];
    } else {
      rtb_Init = TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_d;
    }

    /* End of Switch: '<S24>/Init' */

    /* Logic: '<S17>/Logical Operator2' */
    rtb_LogicalOperator2 = (int8_T)((int8_T)(rtb_Init != 0) ^ (int8_T)
      (rtb_Init_d != 0));

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/Constant3'
     *  Delay: '<S17>/LeadingZeros'
     *  UnitDelay: '<S18>/Output'
     */
    if (TempControlExperimentTest_DW.Output_DSTATE >=
        TempControlExperimentTest_P.Switch_Threshold) {
      rtb_Switch = TempControlExperimentTest_P.Constant3_Value;
    } else {
      rtb_Switch = TempControlExperimentTest_DW.LeadingZeros_DSTATE[0];
    }

    /* End of Switch: '<S17>/Switch' */

    /* Switch: '<S20>/Init' incorporates:
     *  UnitDelay: '<S20>/FixPt Unit Delay1'
     *  UnitDelay: '<S20>/FixPt Unit Delay2'
     */
    if (TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init_l = rtb_DataTypeConversion[0];
    } else {
      rtb_Init_l = TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_e;
    }

    /* End of Switch: '<S20>/Init' */

    /* Switch: '<S21>/Init' incorporates:
     *  UnitDelay: '<S21>/FixPt Unit Delay1'
     *  UnitDelay: '<S21>/FixPt Unit Delay2'
     */
    if (TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_e != 0) {
      rtb_Init_i = rtb_DataTypeConversion[1];
    } else {
      rtb_Init_i = TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_k;
    }

    /* End of Switch: '<S21>/Init' */

    /* Switch: '<S22>/Init' incorporates:
     *  UnitDelay: '<S22>/FixPt Unit Delay1'
     *  UnitDelay: '<S22>/FixPt Unit Delay2'
     */
    if (TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_g != 0) {
      rtb_Init_j = rtb_DataTypeConversion[2];
    } else {
      rtb_Init_j = TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_h;
    }

    /* End of Switch: '<S22>/Init' */

    /* Switch: '<S23>/Init' incorporates:
     *  UnitDelay: '<S23>/FixPt Unit Delay1'
     *  UnitDelay: '<S23>/FixPt Unit Delay2'
     */
    if (TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_a0 != 0) {
      rtb_Init_c = rtb_DataTypeConversion[3];
    } else {
      rtb_Init_c = TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_ex;
    }

    /* End of Switch: '<S23>/Init' */
  }

  {
    int_T idxDelay;

    /* Update for RateTransition: '<S17>/Rate Transition' */
    TempControlExperimentTest_DW.RateTransition_Buffer0 = rtb_Switch;

    /* Update for UnitDelay: '<S25>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S25>/FixPt Constant'
     */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE =
      TempControlExperimentTest_P.FixPtConstant_Value_i;

    /* Update for UnitDelay: '<S25>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE = rtb_Init;

    /* Update for UnitDelay: '<S18>/Output' */
    TempControlExperimentTest_DW.Output_DSTATE = rtb_FixPtSwitch;

    /* Update for Delay: '<S17>/LeadingZeros' */
    for (idxDelay = 0; idxDelay < 7; idxDelay++) {
      TempControlExperimentTest_DW.LeadingZeros_DSTATE[idxDelay] =
        TempControlExperimentTest_DW.LeadingZeros_DSTATE[idxDelay + 1];
    }

    TempControlExperimentTest_DW.LeadingZeros_DSTATE[7] = rtb_Level;

    /* End of Update for Delay: '<S17>/LeadingZeros' */

    /* Update for UnitDelay: '<S24>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S24>/FixPt Constant'
     */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_o =
      TempControlExperimentTest_P.FixPtConstant_Value_d;

    /* Update for UnitDelay: '<S24>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_d = rtb_Init_c;

    /* Update for UnitDelay: '<S20>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_e = rtb_LogicalOperator2;

    /* Update for UnitDelay: '<S20>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S20>/FixPt Constant'
     */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_a =
      TempControlExperimentTest_P.FixPtConstant_Value_e;

    /* Update for UnitDelay: '<S21>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_k = rtb_Init_l;

    /* Update for UnitDelay: '<S21>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S21>/FixPt Constant'
     */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_e =
      TempControlExperimentTest_P.FixPtConstant_Value_b;

    /* Update for UnitDelay: '<S22>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_h = rtb_Init_i;

    /* Update for UnitDelay: '<S22>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S22>/FixPt Constant'
     */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_g =
      TempControlExperimentTest_P.FixPtConstant_Value_n;

    /* Update for UnitDelay: '<S23>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_ex = rtb_Init_j;

    /* Update for UnitDelay: '<S23>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S23>/FixPt Constant'
     */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_a0 =
      TempControlExperimentTest_P.FixPtConstant_Value_m;
  }
}

/* Model initialize function */
void TempControlExperimentTest_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)TempControlExperimentTest_M, 0,
                sizeof(RT_MODEL_TempControlExperimen_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&TempControlExperimentTest_M->solverInfo,
                          &TempControlExperimentTest_M->Timing.simTimeStep);
    rtsiSetTPtr(&TempControlExperimentTest_M->solverInfo, &rtmGetTPtr
                (TempControlExperimentTest_M));
    rtsiSetStepSizePtr(&TempControlExperimentTest_M->solverInfo,
                       &TempControlExperimentTest_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&TempControlExperimentTest_M->solverInfo,
                          (&rtmGetErrorStatus(TempControlExperimentTest_M)));
    rtsiSetRTModelPtr(&TempControlExperimentTest_M->solverInfo,
                      TempControlExperimentTest_M);
  }

  rtsiSetSimTimeStep(&TempControlExperimentTest_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&TempControlExperimentTest_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(TempControlExperimentTest_M,
             &TempControlExperimentTest_M->Timing.tArray[0]);
  TempControlExperimentTest_M->Timing.stepSize0 = 1.0;

  /* block I/O */
  (void) memset(((void *) &TempControlExperimentTest_B), 0,
                sizeof(B_TempControlExperimentTest_T));

  /* states (dwork) */
  (void) memset((void *)&TempControlExperimentTest_DW, 0,
                sizeof(DW_TempControlExperimentTest_T));

  {
    int32_T i;

    /* Start for RateTransition: '<S17>/Rate Transition' */
    TempControlExperimentTest_B.RateTransition =
      TempControlExperimentTest_P.RateTransition_X0;

    /* InitializeConditions for RateTransition: '<S17>/Rate Transition' */
    TempControlExperimentTest_DW.RateTransition_Buffer0 =
      TempControlExperimentTest_P.RateTransition_X0;

    /* S-Function Block: <S1>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          TempControlExperimentTest_DW.SFunction_DSTATE = initVector[0];
        }
      }
    }

    /* S-Function Block: <S2>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          TempControlExperimentTest_DW.SFunction_DSTATE_m = initVector[0];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      TempControlExperimentTest_DW.UnitDelay_DSTATE[i] =
        TempControlExperimentTest_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */

    /* S-Function Block: <S3>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &TempControlExperimentTest_DW.SFunction_DSTATE_k[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S25>/FixPt Unit Delay2' */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE =
      TempControlExperimentTest_P.FixPtUnitDelay2_InitialConditio;

    /* InitializeConditions for UnitDelay: '<S25>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE =
      TempControlExperimentTest_P.FixPtUnitDelay1_InitialConditio;

    /* InitializeConditions for UnitDelay: '<S18>/Output' */
    TempControlExperimentTest_DW.Output_DSTATE =
      TempControlExperimentTest_P.Output_InitialCondition;

    /* InitializeConditions for Delay: '<S17>/LeadingZeros' */
    for (i = 0; i < 8; i++) {
      TempControlExperimentTest_DW.LeadingZeros_DSTATE[i] =
        TempControlExperimentTest_P.LeadingZeros_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S17>/LeadingZeros' */

    /* InitializeConditions for UnitDelay: '<S24>/FixPt Unit Delay2' */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_o =
      TempControlExperimentTest_P.FixPtUnitDelay2_InitialCondit_i;

    /* InitializeConditions for UnitDelay: '<S24>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_d =
      TempControlExperimentTest_P.FixPtUnitDelay1_InitialCondit_h;

    /* InitializeConditions for UnitDelay: '<S20>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_e =
      TempControlExperimentTest_P.FixPtUnitDelay1_InitialCondit_k;

    /* InitializeConditions for UnitDelay: '<S20>/FixPt Unit Delay2' */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_a =
      TempControlExperimentTest_P.FixPtUnitDelay2_InitialCondit_f;

    /* InitializeConditions for UnitDelay: '<S21>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_k =
      TempControlExperimentTest_P.FixPtUnitDelay1_InitialCondit_j;

    /* InitializeConditions for UnitDelay: '<S21>/FixPt Unit Delay2' */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_e =
      TempControlExperimentTest_P.FixPtUnitDelay2_InitialCondit_n;

    /* InitializeConditions for UnitDelay: '<S22>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_h =
      TempControlExperimentTest_P.FixPtUnitDelay1_InitialCondit_e;

    /* InitializeConditions for UnitDelay: '<S22>/FixPt Unit Delay2' */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_g =
      TempControlExperimentTest_P.FixPtUnitDelay2_InitialCondit_o;

    /* InitializeConditions for UnitDelay: '<S23>/FixPt Unit Delay1' */
    TempControlExperimentTest_DW.FixPtUnitDelay1_DSTATE_ex =
      TempControlExperimentTest_P.FixPtUnitDelay1_InitialCondit_o;

    /* InitializeConditions for UnitDelay: '<S23>/FixPt Unit Delay2' */
    TempControlExperimentTest_DW.FixPtUnitDelay2_DSTATE_a0 =
      TempControlExperimentTest_P.FixPtUnitDelay2_InitialCondit_c;
  }
}

/* Model terminate function */
void TempControlExperimentTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
