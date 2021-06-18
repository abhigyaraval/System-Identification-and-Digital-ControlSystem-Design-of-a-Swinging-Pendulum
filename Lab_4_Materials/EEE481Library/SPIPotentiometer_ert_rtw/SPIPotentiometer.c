/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPotentiometer.c
 *
 * Code generated for Simulink model 'SPIPotentiometer'.
 *
 * Model version                  : 1.122
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 14:11:11 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SPIPotentiometer.h"
#include "SPIPotentiometer_private.h"

/* Block signals (auto storage) */
B_SPIPotentiometer_T SPIPotentiometer_B;

/* Block states (auto storage) */
DW_SPIPotentiometer_T SPIPotentiometer_DW;

/* Real-time model */
RT_MODEL_SPIPotentiometer_T SPIPotentiometer_M_;
RT_MODEL_SPIPotentiometer_T *const SPIPotentiometer_M = &SPIPotentiometer_M_;

/* Model step function */
void SPIPotentiometer_step(void)
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion1[9];

  {
    real_T rtb_u2bittovoltageconversion;
    real_T rtb_Step1;
    int32_T i;

    /* Step: '<Root>/Step1' */
    if (((SPIPotentiometer_M->Timing.clockTick1) * 0.01) <
        SPIPotentiometer_P.Step1_Time) {
      rtb_Step1 = SPIPotentiometer_P.Step1_Y0;
    } else {
      rtb_Step1 = SPIPotentiometer_P.Step1_YFinal;
    }

    /* End of Step: '<Root>/Step1' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/Constant'
     */
    if (rtb_Step1 > SPIPotentiometer_P.Switch_Threshold) {
      rtb_u2bittovoltageconversion = rtb_Step1;
    } else {
      rtb_u2bittovoltageconversion = SPIPotentiometer_P.Constant_Value;
    }

    /* End of Switch: '<S3>/Switch' */

    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    if (rtb_u2bittovoltageconversion > SPIPotentiometer_P.Switch1_Threshold) {
      rtb_u2bittovoltageconversion = SPIPotentiometer_P.Constant1_Value;
    }

    /* End of Switch: '<S3>/Switch1' */

    /* DataTypeConversion: '<S3>/Data Type Conversion1' */
    rtb_u2bittovoltageconversion = floor(rtb_u2bittovoltageconversion);
    if (rtIsNaN(rtb_u2bittovoltageconversion) || rtIsInf
        (rtb_u2bittovoltageconversion)) {
      rtb_u2bittovoltageconversion = 0.0;
    } else {
      rtb_u2bittovoltageconversion = fmod(rtb_u2bittovoltageconversion, 256.0);
    }

    SPIPotentiometer_B.DataTypeConversion1 = (uint8_T)
      (rtb_u2bittovoltageconversion < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
       -rtb_u2bittovoltageconversion : (int32_T)(uint8_T)
       rtb_u2bittovoltageconversion);

    /* End of DataTypeConversion: '<S3>/Data Type Conversion1' */

    /* Switch: '<S3>/Switch3' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<S3>/Constant2'
     */
    if (SPIPotentiometer_P.Constant_Value_g >
        SPIPotentiometer_P.Switch3_Threshold) {
      rtb_u2bittovoltageconversion = SPIPotentiometer_P.Constant_Value_g;
    } else {
      rtb_u2bittovoltageconversion = SPIPotentiometer_P.Constant2_Value;
    }

    /* End of Switch: '<S3>/Switch3' */

    /* Switch: '<S3>/Switch4' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    if (rtb_u2bittovoltageconversion > SPIPotentiometer_P.Switch4_Threshold) {
      rtb_u2bittovoltageconversion = SPIPotentiometer_P.Constant3_Value;
    }

    /* End of Switch: '<S3>/Switch4' */

    /* DataTypeConversion: '<S3>/Data Type Conversion2' */
    rtb_u2bittovoltageconversion = floor(rtb_u2bittovoltageconversion);
    if (rtIsNaN(rtb_u2bittovoltageconversion) || rtIsInf
        (rtb_u2bittovoltageconversion)) {
      rtb_u2bittovoltageconversion = 0.0;
    } else {
      rtb_u2bittovoltageconversion = fmod(rtb_u2bittovoltageconversion, 256.0);
    }

    SPIPotentiometer_B.DataTypeConversion2 = (uint8_T)
      (rtb_u2bittovoltageconversion < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
       -rtb_u2bittovoltageconversion : (int32_T)(uint8_T)
       rtb_u2bittovoltageconversion);

    /* End of DataTypeConversion: '<S3>/Data Type Conversion2' */

    /* S-Function (SPIPot): '<S3>/S-Function Builder5' */
    SPIPot_Outputs_wrapper(&SPIPotentiometer_B.DataTypeConversion1,
      &SPIPotentiometer_B.DataTypeConversion2,
      &SPIPotentiometer_DW.SFunctionBuilder5_DSTATE,
      &SPIPotentiometer_P.SFunctionBuilder5_P1, 1);

    /* S-Function (ADC12bit): '<S1>/S-Function Builder5' */
    ADC12bit_Outputs_wrapper( &SPIPotentiometer_B.SFunctionBuilder5,
      &SPIPotentiometer_DW.SFunctionBuilder5_DSTATE_l,
      &SPIPotentiometer_P.SFunctionBuilder5_P1_i, 1);

    /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
     *  Clock: '<Root>/Clock'
     *  DataTypeConversion: '<S1>/Data Type Conversion2'
     *  Gain: '<S1>/12bit to voltage conversion'
     */
    rtb_DataTypeConversion1[0] = (real32_T)SPIPotentiometer_M->Timing.t[0];
    rtb_DataTypeConversion1[1] = (real32_T)rtb_Step1;
    rtb_DataTypeConversion1[2] = (real32_T)
      (SPIPotentiometer_P.u2bittovoltageconversion_Gain * (real_T)
       SPIPotentiometer_B.SFunctionBuilder5);
    rtb_DataTypeConversion1[3] = (real32_T)0.0;
    rtb_DataTypeConversion1[4] = (real32_T)0.0;
    rtb_DataTypeConversion1[5] = (real32_T)0.0;
    rtb_DataTypeConversion1[6] = (real32_T)0.0;
    rtb_DataTypeConversion1[7] = (real32_T)0.0;
    rtb_DataTypeConversion1[8] = (real32_T)0.0;

    /* UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      SPIPotentiometer_B.UnitDelay[i] = SPIPotentiometer_DW.UnitDelay_DSTATE[i];
    }

    /* End of UnitDelay: '<S2>/Unit Delay' */

    /* S-Function (SerialMonitorOut9): '<S2>/S-Function' */
    SerialMonitorOut9_Outputs_wrapper(&SPIPotentiometer_B.UnitDelay[0],
      &SPIPotentiometer_B.SFunction[0], &SPIPotentiometer_DW.SFunction_DSTATE[0],
      &SPIPotentiometer_P.SFunction_P1, 1, &SPIPotentiometer_P.SFunction_P2, 1);
  }

  {
    int32_T i;

    /* S-Function "SPIPot_wrapper" Block: <S3>/S-Function Builder5 */
    SPIPot_Update_wrapper(&SPIPotentiometer_B.DataTypeConversion1,
                          &SPIPotentiometer_B.DataTypeConversion2,
                          &SPIPotentiometer_DW.SFunctionBuilder5_DSTATE,
                          &SPIPotentiometer_P.SFunctionBuilder5_P1, 1);

    /* S-Function "ADC12bit_wrapper" Block: <S1>/S-Function Builder5 */
    ADC12bit_Update_wrapper( &SPIPotentiometer_B.SFunctionBuilder5,
      &SPIPotentiometer_DW.SFunctionBuilder5_DSTATE_l,
      &SPIPotentiometer_P.SFunctionBuilder5_P1_i, 1);

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      SPIPotentiometer_DW.UnitDelay_DSTATE[i] = rtb_DataTypeConversion1[i];
    }

    /* End of Update for UnitDelay: '<S2>/Unit Delay' */

    /* S-Function "SerialMonitorOut9_wrapper" Block: <S2>/S-Function */
    SerialMonitorOut9_Update_wrapper(&SPIPotentiometer_B.UnitDelay[0],
      &SPIPotentiometer_B.SFunction[0], &SPIPotentiometer_DW.SFunction_DSTATE[0],
      &SPIPotentiometer_P.SFunction_P1, 1, &SPIPotentiometer_P.SFunction_P2, 1);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  SPIPotentiometer_M->Timing.t[0] =
    (++SPIPotentiometer_M->Timing.clockTick0) *
    SPIPotentiometer_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    SPIPotentiometer_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void SPIPotentiometer_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SPIPotentiometer_M, 0,
                sizeof(RT_MODEL_SPIPotentiometer_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SPIPotentiometer_M->solverInfo,
                          &SPIPotentiometer_M->Timing.simTimeStep);
    rtsiSetTPtr(&SPIPotentiometer_M->solverInfo, &rtmGetTPtr(SPIPotentiometer_M));
    rtsiSetStepSizePtr(&SPIPotentiometer_M->solverInfo,
                       &SPIPotentiometer_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&SPIPotentiometer_M->solverInfo, (&rtmGetErrorStatus
      (SPIPotentiometer_M)));
    rtsiSetRTModelPtr(&SPIPotentiometer_M->solverInfo, SPIPotentiometer_M);
  }

  rtsiSetSimTimeStep(&SPIPotentiometer_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&SPIPotentiometer_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(SPIPotentiometer_M, &SPIPotentiometer_M->Timing.tArray[0]);
  SPIPotentiometer_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &SPIPotentiometer_B), 0,
                sizeof(B_SPIPotentiometer_T));

  /* states (dwork) */
  (void) memset((void *)&SPIPotentiometer_DW, 0,
                sizeof(DW_SPIPotentiometer_T));

  {
    int32_T i;

    /* S-Function Block: <S3>/S-Function Builder5 */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          SPIPotentiometer_DW.SFunctionBuilder5_DSTATE = initVector[0];
        }
      }
    }

    /* S-Function Block: <S1>/S-Function Builder5 */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          SPIPotentiometer_DW.SFunctionBuilder5_DSTATE_l = initVector[0];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 9; i++) {
      SPIPotentiometer_DW.UnitDelay_DSTATE[i] =
        SPIPotentiometer_P.UnitDelay_InitialCondition;
    }

    /* End of InitializeConditions for UnitDelay: '<S2>/Unit Delay' */

    /* S-Function Block: <S2>/S-Function */
    {
      real_T initVector[4] = { 0, 0, 0, 0 };

      {
        int_T i1;
        real_T *dw_DSTATE = &SPIPotentiometer_DW.SFunction_DSTATE[0];
        for (i1=0; i1 < 4; i1++) {
          dw_DSTATE[i1] = initVector[i1];
        }
      }
    }
  }
}

/* Model terminate function */
void SPIPotentiometer_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
