/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_Plant.c
 *
 * Code generated for Simulink model 'Experiment_4_1_Plant'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Sat Apr 25 12:24:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Experiment_4_1_Plant.h"
#include "Experiment_4_1_Plant_private.h"

/* Block signals (default storage) */
B_Experiment_4_1_Plant_T Experiment_4_1_Plant_B;

/* Continuous states */
X_Experiment_4_1_Plant_T Experiment_4_1_Plant_X;

/* Block states (default storage) */
DW_Experiment_4_1_Plant_T Experiment_4_1_Plant_DW;

/* Real-time model */
RT_MODEL_Experiment_4_1_Plant_T Experiment_4_1_Plant_M_;
RT_MODEL_Experiment_4_1_Plant_T *const Experiment_4_1_Plant_M =
  &Experiment_4_1_Plant_M_;

/* This function updates continuous states using the ODE8 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
#define Experiment_4_1_Plant_NSTAGES   13

  static real_T rt_ODE8_B[13] = {
    4.174749114153025E-2, 0.0, 0.0, 0.0,
    0.0, -5.54523286112393E-2, 2.393128072011801E-1, 7.03510669403443E-1,
    -7.597596138144609E-1, 6.605630309222863E-1, 1.581874825101233E-1,
    -2.381095387528628E-1, 2.5E-1
  };

  static real_T rt_ODE8_C[13] = {
    0.0, 5.555555555555556E-2, 8.333333333333333E-2, 1.25E-1,
    3.125E-1, 3.75E-1, 1.475E-1, 4.65E-1,
    5.648654513822596E-1, 6.5E-1, 9.246562776405044E-1, 1.0, 1.0
  };

  static real_T rt_ODE8_A[13][13] = {
    /* rt_ODE8_A[0][] */
    { 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[1][] */
    { 5.555555555555556E-2, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[2][] */
    { 2.083333333333333E-2, 6.25E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[3][] */
    { 3.125E-2, 0.0, 9.375E-2, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[4][] */
    { 3.125E-1, 0.0, -1.171875, 1.171875,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[5][] */
    { 3.75E-2, 0.0, 0.0, 1.875E-1,
      1.5E-1, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[6][] */
    { 4.791013711111111E-2, 0.0, 0.0, 1.122487127777778E-1,
      -2.550567377777778E-2, 1.284682388888889E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[7][] */
    { 1.691798978729228E-2, 0.0, 0.0, 3.878482784860432E-1,
      3.597736985150033E-2, 1.969702142156661E-1, -1.727138523405018E-1, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[8][] */
    { 6.90957533591923E-2, 0.0, 0.0, -6.342479767288542E-1,
      -1.611975752246041E-1, 1.386503094588253E-1, 9.409286140357563E-1,
      2.11636326481944E-1,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[9][] */
    { 1.835569968390454E-1, 0.0, 0.0, -2.468768084315592,
      -2.912868878163005E-1, -2.647302023311738E-2, 2.8478387641928,
      2.813873314698498E-1,
      1.237448998633147E-1, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[10][] */
    { -1.215424817395888, 0.0, 0.0, 1.667260866594577E1,
      9.157418284168179E-1, -6.056605804357471, -1.600357359415618E1,
      1.484930308629766E1,
      -1.337157573528985E1, 5.134182648179638, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[11][] */
    { 2.588609164382643E-1, 0.0, 0.0, -4.774485785489205,
      -4.350930137770325E-1, -3.049483332072241, 5.577920039936099,
      6.155831589861039,
      -5.062104586736938, 2.193926173180679, 1.346279986593349E-1, 0.0, 0.0 },

    /* rt_ODE8_A[12][] */
    { 8.224275996265075E-1, 0.0, 0.0, -1.165867325727766E1,
      -7.576221166909362E-1, 7.139735881595818E-1, 1.207577498689006E1,
      -2.127659113920403,
      1.990166207048956, -2.342864715440405E-1, 1.758985777079423E-1, 0.0, 0.0 },
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE8_IntgData *intgData = (ODE8_IntgData *) rtsiGetSolverData(si);
  real_T *deltaY = intgData->deltaY;
  real_T *x0 = intgData->x0;
  real_T* f[Experiment_4_1_Plant_NSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  f[0] = intgData->f[0];
  f[1] = intgData->f[1];
  f[2] = intgData->f[2];
  f[3] = intgData->f[3];
  f[4] = intgData->f[4];
  f[5] = intgData->f[5];
  f[6] = intgData->f[6];
  f[7] = intgData->f[7];
  f[8] = intgData->f[8];
  f[9] = intgData->f[9];
  f[10] = intgData->f[10];
  f[11] = intgData->f[11];
  f[12] = intgData->f[12];

  /* Save the state values at time t in y and x0*/
  (void) memset(deltaY, 0,
                (uint_T)nXc*sizeof(real_T));
  (void) memcpy(x0, x,
                nXc*sizeof(real_T));
  for (stagesIdx=0;stagesIdx<Experiment_4_1_Plant_NSTAGES;stagesIdx++) {
    (void) memcpy(x, x0,
                  (uint_T)nXc*sizeof(real_T));
    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaX = 0;
      for (idx=0;idx<stagesIdx;idx++) {
        deltaX = deltaX + h*rt_ODE8_A[stagesIdx][idx]*f[idx][statesIdx];
      }

      x[statesIdx] = x0[statesIdx] + deltaX;
    }

    if (stagesIdx==0) {
      rtsiSetdX(si, f[stagesIdx]);
      Experiment_4_1_Plant_derivatives();
    } else {
      (stagesIdx==Experiment_4_1_Plant_NSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT
        (si, t + h*rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      Experiment_4_1_Plant_step();
      Experiment_4_1_Plant_derivatives();
    }

    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaY[statesIdx] = deltaY[statesIdx] + h*rt_ODE8_B[stagesIdx]*f[stagesIdx]
        [statesIdx];
    }
  }

  for (statesIdx=0;statesIdx<nXc;statesIdx++) {
    x[statesIdx] = x0[statesIdx] + deltaY[statesIdx];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void Experiment_4_1_Plant_step(void)
{
  real_T Sum1;
  if (rtmIsMajorTimeStep(Experiment_4_1_Plant_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&Experiment_4_1_Plant_M->solverInfo,
                          ((Experiment_4_1_Plant_M->Timing.clockTick0+1)*
      Experiment_4_1_Plant_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Experiment_4_1_Plant_M)) {
    Experiment_4_1_Plant_M->Timing.t[0] = rtsiGetT
      (&Experiment_4_1_Plant_M->solverInfo);
  }

  /* Sum: '<S7>/Sum1' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Gain: '<S7>/Gain'
   *  Integrator: '<S10>/Integrator1'
   *  Sum: '<S7>/Sum2'
   */
  Sum1 = 1.0 / (Experiment_4_1_Plant_P.SingalConditioner3_in_max -
                Experiment_4_1_Plant_P.SingalConditioner3_in_min) *
    (Experiment_4_1_Plant_P.SingalConditioner3_out_max -
     Experiment_4_1_Plant_P.SingalConditioner3_out_min) *
    (Experiment_4_1_Plant_X.Integrator1_CSTATE -
     Experiment_4_1_Plant_P.SingalConditioner3_in_min) +
    Experiment_4_1_Plant_P.SingalConditioner3_out_min;
  if (rtmIsMajorTimeStep(Experiment_4_1_Plant_M)) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     */
    if (!(Sum1 > Experiment_4_1_Plant_P.Switch_Threshold)) {
      Sum1 = Experiment_4_1_Plant_P.Constant_Value;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Switch: '<S2>/Switch1' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    if (Sum1 > Experiment_4_1_Plant_P.Switch1_Threshold) {
      Sum1 = Experiment_4_1_Plant_P.Constant1_Value;
    }

    /* End of Switch: '<S2>/Switch1' */

    /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
     *  Constant: '<S2>/Constant2'
     *  Gain: '<S2>/m//s to mph conversion'
     *  Sum: '<S2>/Sum3'
     */
    Sum1 = floor((Sum1 - Experiment_4_1_Plant_P.Constant2_Value) *
                 Experiment_4_1_Plant_P.mstomphconversion_Gain);
    if (rtIsNaN(Sum1) || rtIsInf(Sum1)) {
      Sum1 = 0.0;
    } else {
      Sum1 = fmod(Sum1, 65536.0);
    }

    Experiment_4_1_Plant_B.DataTypeConversion = (int16_T)(Sum1 < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-Sum1 : (int32_T)(int16_T)(uint16_T)Sum1);

    /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

    /* S-Function (DAC12bit): '<S2>/S-Function Builder' */
    DAC12bit_Outputs_wrapper(&Experiment_4_1_Plant_B.DataTypeConversion,
      &Experiment_4_1_Plant_DW.SFunctionBuilder_DSTATE,
      &Experiment_4_1_Plant_P.SFunctionBuilder_P1, 1);

    /* S-Function (ADC12bit): '<S1>/S-Function Builder5' */
    ADC12bit_Outputs_wrapper( &Experiment_4_1_Plant_B.SFunctionBuilder5,
      &Experiment_4_1_Plant_DW.SFunctionBuilder5_DSTATE,
      &Experiment_4_1_Plant_P.SFunctionBuilder5_P1, 1);

    /* Sum: '<S6>/Sum1' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     *  DataTypeConversion: '<S1>/Data Type Conversion2'
     *  Gain: '<S1>/12bit to voltage conversion'
     *  Gain: '<S6>/Gain'
     *  Sum: '<S6>/Sum2'
     */
    Sum1 = 1.0 / (Experiment_4_1_Plant_P.SingalConditioner2_in_max -
                  Experiment_4_1_Plant_P.SingalConditioner2_in_min) *
      (Experiment_4_1_Plant_P.SingalConditioner2_out_max -
       Experiment_4_1_Plant_P.SingalConditioner2_out_min) *
      (Experiment_4_1_Plant_P.u2bittovoltageconversion_Gain * (real_T)
       Experiment_4_1_Plant_B.SFunctionBuilder5 -
       Experiment_4_1_Plant_P.SingalConditioner2_in_min) +
      Experiment_4_1_Plant_P.SingalConditioner2_out_min;

    /* Saturate: '<S8>/Saturation' */
    if (Sum1 > Experiment_4_1_Plant_P.Saturation_UpperSat) {
      Sum1 = Experiment_4_1_Plant_P.Saturation_UpperSat;
    } else {
      if (Sum1 < Experiment_4_1_Plant_P.Saturation_LowerSat) {
        Sum1 = Experiment_4_1_Plant_P.Saturation_LowerSat;
      }
    }

    /* End of Saturate: '<S8>/Saturation' */

    /* DataTypeConversion: '<S8>/Data Type Conversion' */
    Sum1 = floor(Sum1);
    if (rtIsNaN(Sum1) || rtIsInf(Sum1)) {
      Sum1 = 0.0;
    } else {
      Sum1 = fmod(Sum1, 65536.0);
    }

    /* Gain: '<S9>/Gain' incorporates:
     *  Constant: '<S3>/Supply Voltage'
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     *  Gain: '<S8>/Gain'
     *  Product: '<S8>/Product'
     */
    Experiment_4_1_Plant_B.Gain = (real_T)((Sum1 < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-Sum1 : (int32_T)(int16_T)(uint16_T)Sum1) *
      Experiment_4_1_Plant_P.Gain_Gain) * 2.384185791015625E-7 *
      Experiment_4_1_Plant_P.SupplyVoltage_Value * (Experiment_4_1_Plant_P.K /
      Experiment_4_1_Plant_P.R);
  }

  /* Integrator: '<S10>/Integrator' */
  Experiment_4_1_Plant_B.Integrator = Experiment_4_1_Plant_X.Integrator_CSTATE;

  /* Sum: '<S10>/Sum' incorporates:
   *  Gain: '<S10>/Gain'
   *  Gain: '<S10>/Gain1'
   *  Gain: '<S10>/Gain2'
   *  Gain: '<S9>/Gain1'
   *  Integrator: '<S10>/Integrator1'
   *  Sum: '<S9>/Sum'
   *  Trigonometry: '<S10>/Trigonometric Function'
   */
  Experiment_4_1_Plant_B.Sum = ((Experiment_4_1_Plant_B.Gain - 0.81 /
    Experiment_4_1_Plant_P.R * Experiment_4_1_Plant_B.Integrator) * (1.0 /
    Experiment_4_1_Plant_P.m) + -Experiment_4_1_Plant_P.Pendulum_g /
    Experiment_4_1_Plant_P.L * sin(Experiment_4_1_Plant_X.Integrator1_CSTATE)) +
    -Experiment_4_1_Plant_P.epsilon / Experiment_4_1_Plant_P.m *
    Experiment_4_1_Plant_B.Integrator;
  if (rtmIsMajorTimeStep(Experiment_4_1_Plant_M)) {
    if (rtmIsMajorTimeStep(Experiment_4_1_Plant_M)) {
      /* Update for S-Function (DAC12bit): '<S2>/S-Function Builder' */

      /* S-Function "DAC12bit_wrapper" Block: <S2>/S-Function Builder */
      DAC12bit_Update_wrapper(&Experiment_4_1_Plant_B.DataTypeConversion,
        &Experiment_4_1_Plant_DW.SFunctionBuilder_DSTATE,
        &Experiment_4_1_Plant_P.SFunctionBuilder_P1, 1);

      /* Update for S-Function (ADC12bit): '<S1>/S-Function Builder5' */

      /* S-Function "ADC12bit_wrapper" Block: <S1>/S-Function Builder5 */
      ADC12bit_Update_wrapper( &Experiment_4_1_Plant_B.SFunctionBuilder5,
        &Experiment_4_1_Plant_DW.SFunctionBuilder5_DSTATE,
        &Experiment_4_1_Plant_P.SFunctionBuilder5_P1, 1);
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Experiment_4_1_Plant_M)) {
    rt_ertODEUpdateContinuousStates(&Experiment_4_1_Plant_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++Experiment_4_1_Plant_M->Timing.clockTick0;
    Experiment_4_1_Plant_M->Timing.t[0] = rtsiGetSolverStopTime
      (&Experiment_4_1_Plant_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      Experiment_4_1_Plant_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Experiment_4_1_Plant_derivatives(void)
{
  XDot_Experiment_4_1_Plant_T *_rtXdot;
  _rtXdot = ((XDot_Experiment_4_1_Plant_T *) Experiment_4_1_Plant_M->derivs);

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = Experiment_4_1_Plant_B.Integrator;

  /* Derivatives for Integrator: '<S10>/Integrator' */
  _rtXdot->Integrator_CSTATE = Experiment_4_1_Plant_B.Sum;
}

/* Model initialize function */
void Experiment_4_1_Plant_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Experiment_4_1_Plant_M, 0,
                sizeof(RT_MODEL_Experiment_4_1_Plant_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Experiment_4_1_Plant_M->solverInfo,
                          &Experiment_4_1_Plant_M->Timing.simTimeStep);
    rtsiSetTPtr(&Experiment_4_1_Plant_M->solverInfo, &rtmGetTPtr
                (Experiment_4_1_Plant_M));
    rtsiSetStepSizePtr(&Experiment_4_1_Plant_M->solverInfo,
                       &Experiment_4_1_Plant_M->Timing.stepSize0);
    rtsiSetdXPtr(&Experiment_4_1_Plant_M->solverInfo,
                 &Experiment_4_1_Plant_M->derivs);
    rtsiSetContStatesPtr(&Experiment_4_1_Plant_M->solverInfo, (real_T **)
                         &Experiment_4_1_Plant_M->contStates);
    rtsiSetNumContStatesPtr(&Experiment_4_1_Plant_M->solverInfo,
      &Experiment_4_1_Plant_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Experiment_4_1_Plant_M->solverInfo,
      &Experiment_4_1_Plant_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Experiment_4_1_Plant_M->solverInfo,
      &Experiment_4_1_Plant_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Experiment_4_1_Plant_M->solverInfo,
      &Experiment_4_1_Plant_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Experiment_4_1_Plant_M->solverInfo,
                          (&rtmGetErrorStatus(Experiment_4_1_Plant_M)));
    rtsiSetRTModelPtr(&Experiment_4_1_Plant_M->solverInfo,
                      Experiment_4_1_Plant_M);
  }

  rtsiSetSimTimeStep(&Experiment_4_1_Plant_M->solverInfo, MAJOR_TIME_STEP);
  Experiment_4_1_Plant_M->intgData.deltaY= Experiment_4_1_Plant_M->OdeDeltaY;
  Experiment_4_1_Plant_M->intgData.f[0] = Experiment_4_1_Plant_M->odeF[0];
  Experiment_4_1_Plant_M->intgData.f[1] = Experiment_4_1_Plant_M->odeF[1];
  Experiment_4_1_Plant_M->intgData.f[2] = Experiment_4_1_Plant_M->odeF[2];
  Experiment_4_1_Plant_M->intgData.f[3] = Experiment_4_1_Plant_M->odeF[3];
  Experiment_4_1_Plant_M->intgData.f[4] = Experiment_4_1_Plant_M->odeF[4];
  Experiment_4_1_Plant_M->intgData.f[5] = Experiment_4_1_Plant_M->odeF[5];
  Experiment_4_1_Plant_M->intgData.f[6] = Experiment_4_1_Plant_M->odeF[6];
  Experiment_4_1_Plant_M->intgData.f[7] = Experiment_4_1_Plant_M->odeF[7];
  Experiment_4_1_Plant_M->intgData.f[8] = Experiment_4_1_Plant_M->odeF[8];
  Experiment_4_1_Plant_M->intgData.f[9] = Experiment_4_1_Plant_M->odeF[9];
  Experiment_4_1_Plant_M->intgData.f[10] = Experiment_4_1_Plant_M->odeF[10];
  Experiment_4_1_Plant_M->intgData.f[11] = Experiment_4_1_Plant_M->odeF[11];
  Experiment_4_1_Plant_M->intgData.f[12] = Experiment_4_1_Plant_M->odeF[12];
  Experiment_4_1_Plant_M->intgData.x0 = Experiment_4_1_Plant_M->odeX0;
  Experiment_4_1_Plant_M->contStates = ((X_Experiment_4_1_Plant_T *)
    &Experiment_4_1_Plant_X);
  rtsiSetSolverData(&Experiment_4_1_Plant_M->solverInfo, (void *)
                    &Experiment_4_1_Plant_M->intgData);
  rtsiSetSolverName(&Experiment_4_1_Plant_M->solverInfo,"ode8");
  rtmSetTPtr(Experiment_4_1_Plant_M, &Experiment_4_1_Plant_M->Timing.tArray[0]);
  Experiment_4_1_Plant_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &Experiment_4_1_Plant_B), 0,
                sizeof(B_Experiment_4_1_Plant_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Experiment_4_1_Plant_X, 0,
                  sizeof(X_Experiment_4_1_Plant_T));
  }

  /* states (dwork) */
  (void) memset((void *)&Experiment_4_1_Plant_DW, 0,
                sizeof(DW_Experiment_4_1_Plant_T));

  /* InitializeConditions for Integrator: '<S10>/Integrator1' */
  Experiment_4_1_Plant_X.Integrator1_CSTATE = Experiment_4_1_Plant_P.theta_0;

  /* InitializeConditions for S-Function (DAC12bit): '<S2>/S-Function Builder' */

  /* S-Function Block: <S2>/S-Function Builder */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        Experiment_4_1_Plant_DW.SFunctionBuilder_DSTATE = initVector[0];
      }
    }
  }

  /* InitializeConditions for S-Function (ADC12bit): '<S1>/S-Function Builder5' */

  /* S-Function Block: <S1>/S-Function Builder5 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        Experiment_4_1_Plant_DW.SFunctionBuilder5_DSTATE = initVector[0];
      }
    }
  }

  /* InitializeConditions for Integrator: '<S10>/Integrator' */
  Experiment_4_1_Plant_X.Integrator_CSTATE = Experiment_4_1_Plant_P.theta_dot_0;
}

/* Model terminate function */
void Experiment_4_1_Plant_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
