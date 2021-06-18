/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pHSystem.c
 *
 * Code generated for Simulink model 'pHSystem'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Dec 18 14:37:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pHSystem.h"
#include "pHSystem_private.h"

/* Block signals (auto storage) */
B_pHSystem_T pHSystem_B;

/* Block states (auto storage) */
DW_pHSystem_T pHSystem_DW;

/* Real-time model */
RT_MODEL_pHSystem_T pHSystem_M_;
RT_MODEL_pHSystem_T *const pHSystem_M = &pHSystem_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = (rtNaN);
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = u0 / u1;
      if (fabs(u1_0 - rt_roundd_snf(u1_0)) <= DBL_EPSILON * fabs(u1_0)) {
        y = 0.0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T lo;
  uint32_T hi;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (real_T)*u * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T y;
  real_T sr;
  real_T si;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sqrt(-2.0 * log(si) / si) * sr;
  return y;
}

/* Model step function */
void pHSystem_step(void)
{
  /* Sum: '<Root>/Sum' incorporates:
   *  RandomNumber: '<Root>/Random Number'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  pHSystem_B.Sum = pHSystem_DW.NextOutput + pHSystem_DW.UnitDelay_DSTATE;

  /* Quantizer: '<Root>/Quantizer' incorporates:
   *  Clock: '<S1>/Clock'
   *  Constant: '<S1>/Constant'
   *  Lookup_n-D: '<S1>/Look-Up Table1'
   *  Math: '<S1>/Math Function'
   *  S-Function (sfun_tstart): '<S1>/startTime'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<S1>/Sum'
   */
  pHSystem_B.Quantizer = rt_roundd_snf((look1_binlxpw(rt_remd_snf
    (pHSystem_M->Timing.t[0] - (0.0), pHSystem_P.Constant_Value),
    pHSystem_P.LookUpTable1_bp01Data, pHSystem_P.RepeatingSequence_rep_seq_y, 1U)
    + pHSystem_B.Sum) / pHSystem_P.Quantizer_Interval) *
    pHSystem_P.Quantizer_Interval;

  /* S-Function (pHSensor): '<Root>/S-Function' */
  pHSensor_Outputs_wrapper(&pHSystem_B.Quantizer, &pHSystem_DW.SFunction_DSTATE,
    &pHSystem_P.SFunction_P1, 1);

  /* Update for RandomNumber: '<Root>/Random Number' */
  pHSystem_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&pHSystem_DW.RandSeed) *
    pHSystem_P.RandomNumber_StdDev + pHSystem_P.RandomNumber_Mean;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  pHSystem_DW.UnitDelay_DSTATE = pHSystem_B.Sum;

  /* S-Function "pHSensor_wrapper" Block: <Root>/S-Function */
  pHSensor_Update_wrapper(&pHSystem_B.Quantizer, &pHSystem_DW.SFunction_DSTATE,
    &pHSystem_P.SFunction_P1, 1);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++pHSystem_M->Timing.clockTick0)) {
    ++pHSystem_M->Timing.clockTickH0;
  }

  pHSystem_M->Timing.t[0] = pHSystem_M->Timing.clockTick0 *
    pHSystem_M->Timing.stepSize0 + pHSystem_M->Timing.clockTickH0 *
    pHSystem_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [1.0s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 1.0, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    pHSystem_M->Timing.clockTick1++;
    if (!pHSystem_M->Timing.clockTick1) {
      pHSystem_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void pHSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)pHSystem_M, 0,
                sizeof(RT_MODEL_pHSystem_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&pHSystem_M->solverInfo,
                          &pHSystem_M->Timing.simTimeStep);
    rtsiSetTPtr(&pHSystem_M->solverInfo, &rtmGetTPtr(pHSystem_M));
    rtsiSetStepSizePtr(&pHSystem_M->solverInfo, &pHSystem_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&pHSystem_M->solverInfo, (&rtmGetErrorStatus
      (pHSystem_M)));
    rtsiSetRTModelPtr(&pHSystem_M->solverInfo, pHSystem_M);
  }

  rtsiSetSimTimeStep(&pHSystem_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&pHSystem_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(pHSystem_M, &pHSystem_M->Timing.tArray[0]);
  pHSystem_M->Timing.stepSize0 = 1.0;

  /* block I/O */
  (void) memset(((void *) &pHSystem_B), 0,
                sizeof(B_pHSystem_T));

  /* states (dwork) */
  (void) memset((void *)&pHSystem_DW, 0,
                sizeof(DW_pHSystem_T));

  {
    uint32_T tseed;
    int32_T r;
    int32_T t;
    real_T tmp;

    /* InitializeConditions for RandomNumber: '<Root>/Random Number' */
    tmp = floor(pHSystem_P.RandomNumber_Seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp : (uint32_T)tmp;
    r = (int32_T)(tseed >> 16U);
    t = (int32_T)(tseed & 32768U);
    tseed = ((((tseed - ((uint32_T)r << 16U)) + t) << 16U) + t) + r;
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else {
      if (tseed > 2147483646U) {
        tseed = 2147483646U;
      }
    }

    pHSystem_DW.RandSeed = tseed;
    pHSystem_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&pHSystem_DW.RandSeed) *
      pHSystem_P.RandomNumber_StdDev + pHSystem_P.RandomNumber_Mean;

    /* End of InitializeConditions for RandomNumber: '<Root>/Random Number' */

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    pHSystem_DW.UnitDelay_DSTATE = pHSystem_P.UnitDelay_InitialCondition;

    /* S-Function Block: <Root>/S-Function */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          pHSystem_DW.SFunction_DSTATE = initVector[0];
        }
      }
    }
  }
}

/* Model terminate function */
void pHSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
