/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Exp4_2_SquareWaveA.c
 *
 * Code generated for Simulink model 'Exp4_2_SquareWaveA'.
 *
 * Model version                  : 1.166
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Oct 20 18:00:31 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Exp4_2_SquareWaveA.h"
#include "Exp4_2_SquareWaveA_private.h"

/* Block signals (auto storage) */
B_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_B;

/* Block states (auto storage) */
DW_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_DW;

/* Real-time model */
RT_MODEL_Exp4_2_SquareWaveA_T Exp4_2_SquareWaveA_M_;
RT_MODEL_Exp4_2_SquareWaveA_T *const Exp4_2_SquareWaveA_M =
  &Exp4_2_SquareWaveA_M_;

/* Model step function */
void Exp4_2_SquareWaveA_step(void)
{
  real_T rtb_PulseGenerator;
  real_T rtb_Gain1;
  real_T rtb_Sum3_b;
  int32_T i;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Exp4_2_SquareWaveA_DW.clockTickCounter <
                        Exp4_2_SquareWaveA_P.PulseGenerator_Duty) &&
    (Exp4_2_SquareWaveA_DW.clockTickCounter >= 0) ?
    Exp4_2_SquareWaveA_P.PulseGenerator_Amp : 0.0;
  if (Exp4_2_SquareWaveA_DW.clockTickCounter >=
      Exp4_2_SquareWaveA_P.PulseGenerator_Period - 1.0) {
    Exp4_2_SquareWaveA_DW.clockTickCounter = 0;
  } else {
    Exp4_2_SquareWaveA_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Sum: '<Root>/Sum3' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<Root>/Gain'
   */
  rtb_Sum3_b = Exp4_2_SquareWaveA_P.Gain_Gain * rtb_PulseGenerator +
    Exp4_2_SquareWaveA_P.Constant_Value_c;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   */
  if (rtb_Sum3_b > Exp4_2_SquareWaveA_P.Switch_Threshold) {
    rtb_Gain1 = rtb_Sum3_b;
  } else {
    rtb_Gain1 = Exp4_2_SquareWaveA_P.Constant_Value;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  if (rtb_Gain1 > Exp4_2_SquareWaveA_P.Switch1_Threshold) {
    rtb_Gain1 = Exp4_2_SquareWaveA_P.Constant1_Value;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Constant: '<S2>/Constant2'
   *  Gain: '<S2>/m//s to mph conversion'
   *  Sum: '<S2>/Sum3'
   */
  rtb_Gain1 = floor((rtb_Gain1 - Exp4_2_SquareWaveA_P.Constant2_Value) *
                    Exp4_2_SquareWaveA_P.mstomphconversion_Gain);
  if (rtIsNaN(rtb_Gain1) || rtIsInf(rtb_Gain1)) {
    rtb_Gain1 = 0.0;
  } else {
    rtb_Gain1 = fmod(rtb_Gain1, 65536.0);
  }

  Exp4_2_SquareWaveA_B.DataTypeConversion = (int16_T)(rtb_Gain1 < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-rtb_Gain1 : (int32_T)(int16_T)(uint16_T)
    rtb_Gain1);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (DAC12bit): '<S2>/S-Function Builder' */
  DAC12bit_Outputs_wrapper(&Exp4_2_SquareWaveA_B.DataTypeConversion,
    &Exp4_2_SquareWaveA_DW.SFunctionBuilder_DSTATE,
    &Exp4_2_SquareWaveA_P.SFunctionBuilder_P1, 1);

  /* S-Function (ADC12bit): '<S1>/S-Function Builder5' */
  ADC12bit_Outputs_wrapper( &Exp4_2_SquareWaveA_B.SFunctionBuilder5,
    &Exp4_2_SquareWaveA_DW.SFunctionBuilder5_DSTATE,
    &Exp4_2_SquareWaveA_P.SFunctionBuilder5_P1, 1);

  /* Gain: '<S1>/12bit to voltage conversion' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion2'
   */
  rtb_Gain1 = Exp4_2_SquareWaveA_P.u2bittovoltageconversion_Gain * (real_T)
    Exp4_2_SquareWaveA_B.SFunctionBuilder5;

  /* UnitDelay: '<S3>/Unit Delay' */
  for (i = 0; i < 9; i++) {
    Exp4_2_SquareWaveA_B.UnitDelay[i] = Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S3>/Unit Delay' */

  /* S-Function (SerialMonitorOut9): '<S3>/S-Function' */
  SerialMonitorOut9_Outputs_wrapper(&Exp4_2_SquareWaveA_B.UnitDelay[0],
    &Exp4_2_SquareWaveA_B.SFunction[0], &Exp4_2_SquareWaveA_DW.SFunction_DSTATE
    [0], &Exp4_2_SquareWaveA_P.SFunction_P1, 1,
    &Exp4_2_SquareWaveA_P.SFunction_P2, 1);

  /* S-Function "DAC12bit_wrapper" Block: <S2>/S-Function Builder */
  DAC12bit_Update_wrapper(&Exp4_2_SquareWaveA_B.DataTypeConversion,
    &Exp4_2_SquareWaveA_DW.SFunctionBuilder_DSTATE,
    &Exp4_2_SquareWaveA_P.SFunctionBuilder_P1, 1);

  /* S-Function "ADC12bit_wrapper" Block: <S1>/S-Function Builder5 */
  ADC12bit_Update_wrapper( &Exp4_2_SquareWaveA_B.SFunctionBuilder5,
    &Exp4_2_SquareWaveA_DW.SFunctionBuilder5_DSTATE,
    &Exp4_2_SquareWaveA_P.SFunctionBuilder5_P1, 1);

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  Gain: '<Root>/Gain1'
   *  Sum: '<Root>/Sum1'
   */
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[0] = (real32_T)rtb_PulseGenerator;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[1] = (real32_T)rtb_Sum3_b;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[2] = (real32_T)((rtb_Gain1 -
    Exp4_2_SquareWaveA_P.Constant1_Value_m) * Exp4_2_SquareWaveA_P.Gain1_Gain);
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[3] = (real32_T)0.0;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[4] = (real32_T)0.0;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[5] = (real32_T)0.0;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[6] = (real32_T)0.0;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[7] = (real32_T)0.0;
  Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[8] = (real32_T)0.0;

  /* S-Function "SerialMonitorOut9_wrapper" Block: <S3>/S-Function */
  SerialMonitorOut9_Update_wrapper(&Exp4_2_SquareWaveA_B.UnitDelay[0],
    &Exp4_2_SquareWaveA_B.SFunction[0], &Exp4_2_SquareWaveA_DW.SFunction_DSTATE
    [0], &Exp4_2_SquareWaveA_P.SFunction_P1, 1,
    &Exp4_2_SquareWaveA_P.SFunction_P2, 1);
}

/* Model initialize function */
void Exp4_2_SquareWaveA_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Exp4_2_SquareWaveA_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Exp4_2_SquareWaveA_B), 0,
                sizeof(B_Exp4_2_SquareWaveA_T));

  /* states (dwork) */
  (void) memset((void *)&Exp4_2_SquareWaveA_DW, 0,
                sizeof(DW_Exp4_2_SquareWaveA_T));

  {
    int32_T i;

    /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
    Exp4_2_SquareWaveA_DW.clockTickCounter = 0;

    /* S-Function Block: <S2>/S-Function Builder */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Exp4_2_SquareWaveA_DW.SFunctionBuilder_DSTATE = initVector[0];
        }
      }
    }

    /* S-Function Block: <S1>/S-Function Builder5 */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          Exp4_2_SquareWaveA_DW.SFunctionBuilder5_DSTATE = initVector[0];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      Exp4_2_SquareWaveA_DW.UnitDelay_DSTATE[i] =
        Exp4_2_SquareWaveA_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */

    /* S-Function Block: <S3>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &Exp4_2_SquareWaveA_DW.SFunction_DSTATE[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void Exp4_2_SquareWaveA_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
