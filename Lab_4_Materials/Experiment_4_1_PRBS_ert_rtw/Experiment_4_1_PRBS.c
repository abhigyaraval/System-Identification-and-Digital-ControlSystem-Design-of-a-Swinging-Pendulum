/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Experiment_4_1_PRBS.c
 *
 * Code generated for Simulink model 'Experiment_4_1_PRBS'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Sat Apr 25 15:28:48 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Experiment_4_1_PRBS.h"
#include "Experiment_4_1_PRBS_private.h"
#include "Experiment_4_1_PRBS_dt.h"

/* Block signals (default storage) */
B_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_B;

/* Block states (default storage) */
DW_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_DW;

/* Real-time model */
RT_MODEL_Experiment_4_1_PRBS_T Experiment_4_1_PRBS_M_;
RT_MODEL_Experiment_4_1_PRBS_T *const Experiment_4_1_PRBS_M =
  &Experiment_4_1_PRBS_M_;

/* Model step function */
void Experiment_4_1_PRBS_step(void)
{
  real_T rtb_mstomphconversion;
  real_T DiscreteTransferFcn_tmp;

  /* Step: '<Root>/Step' */
  if (Experiment_4_1_PRBS_M->Timing.taskTime0 < Experiment_4_1_PRBS_P.Step_Time)
  {
    Experiment_4_1_PRBS_B.Step = Experiment_4_1_PRBS_P.Step_Y0;
  } else {
    Experiment_4_1_PRBS_B.Step = Experiment_4_1_PRBS_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */

  /* S-Function (ADC12bit): '<S2>/S-Function Builder5' */
  ADC12bit_Outputs_wrapper( &Experiment_4_1_PRBS_B.SFunctionBuilder5,
    &Experiment_4_1_PRBS_DW.SFunctionBuilder5_DSTATE,
    &Experiment_4_1_PRBS_P.SFunctionBuilder5_P1, 1);

  /* Sum: '<S7>/Sum1' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  DataTypeConversion: '<S2>/Data Type Conversion2'
   *  Gain: '<S2>/12bit to voltage conversion'
   *  Gain: '<S7>/Gain'
   *  Sum: '<S7>/Sum2'
   */
  Experiment_4_1_PRBS_B.Sum1 = 1.0 /
    (Experiment_4_1_PRBS_P.SingalConditioner3_in_max -
     Experiment_4_1_PRBS_P.SingalConditioner3_in_min) *
    (Experiment_4_1_PRBS_P.SingalConditioner3_out_max -
     Experiment_4_1_PRBS_P.SingalConditioner3_out_min) *
    (Experiment_4_1_PRBS_P.u2bittovoltageconversion_Gain * (real_T)
     Experiment_4_1_PRBS_B.SFunctionBuilder5 -
     Experiment_4_1_PRBS_P.SingalConditioner3_in_min) +
    Experiment_4_1_PRBS_P.SingalConditioner3_out_min;

  /* Sum: '<Root>/Sum' */
  Experiment_4_1_PRBS_B.Sum = Experiment_4_1_PRBS_B.Step -
    Experiment_4_1_PRBS_B.Sum1;

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  DiscreteTransferFcn_tmp = ((Experiment_4_1_PRBS_B.Sum -
    Experiment_4_1_PRBS_P.DiscreteTransferFcn_DenCoef[1] *
    Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[0]) -
    Experiment_4_1_PRBS_P.DiscreteTransferFcn_DenCoef[2] *
    Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[1]) /
    Experiment_4_1_PRBS_P.DiscreteTransferFcn_DenCoef[0];
  Experiment_4_1_PRBS_B.DiscreteTransferFcn =
    (Experiment_4_1_PRBS_P.DiscreteTransferFcn_NumCoef[0] *
     DiscreteTransferFcn_tmp +
     Experiment_4_1_PRBS_P.DiscreteTransferFcn_NumCoef[1] *
     Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[0]) +
    Experiment_4_1_PRBS_P.DiscreteTransferFcn_NumCoef[2] *
    Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[1];

  /* Sum: '<S8>/Sum1' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Gain: '<S8>/Gain'
   *  Sum: '<S8>/Sum2'
   */
  rtb_mstomphconversion = 1.0 / (Experiment_4_1_PRBS_P.SingalConditioner4_in_max
    - Experiment_4_1_PRBS_P.SingalConditioner4_in_min) *
    (Experiment_4_1_PRBS_P.SingalConditioner4_out_max -
     Experiment_4_1_PRBS_P.SingalConditioner4_out_min) *
    (Experiment_4_1_PRBS_B.DiscreteTransferFcn -
     Experiment_4_1_PRBS_P.SingalConditioner4_in_min) +
    Experiment_4_1_PRBS_P.SingalConditioner4_out_min;

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   */
  if (!(rtb_mstomphconversion > Experiment_4_1_PRBS_P.Switch_Threshold)) {
    rtb_mstomphconversion = Experiment_4_1_PRBS_P.Constant_Value;
  }

  /* End of Switch: '<S4>/Switch' */

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  if (rtb_mstomphconversion > Experiment_4_1_PRBS_P.Switch1_Threshold) {
    rtb_mstomphconversion = Experiment_4_1_PRBS_P.Constant1_Value;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Gain: '<S4>/m//s to mph conversion'
   *  Sum: '<S4>/Sum3'
   */
  rtb_mstomphconversion = floor((rtb_mstomphconversion -
    Experiment_4_1_PRBS_P.Constant2_Value) *
    Experiment_4_1_PRBS_P.mstomphconversion_Gain);
  if (rtIsNaN(rtb_mstomphconversion) || rtIsInf(rtb_mstomphconversion)) {
    rtb_mstomphconversion = 0.0;
  } else {
    rtb_mstomphconversion = fmod(rtb_mstomphconversion, 65536.0);
  }

  Experiment_4_1_PRBS_B.DataTypeConversion = (int16_T)(rtb_mstomphconversion <
    0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_mstomphconversion :
    (int32_T)(int16_T)(uint16_T)rtb_mstomphconversion);

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (DAC12bit): '<S4>/S-Function Builder' */
  DAC12bit_Outputs_wrapper(&Experiment_4_1_PRBS_B.DataTypeConversion,
    &Experiment_4_1_PRBS_DW.SFunctionBuilder_DSTATE,
    &Experiment_4_1_PRBS_P.SFunctionBuilder_P1, 1);

  /* Update for S-Function (ADC12bit): '<S2>/S-Function Builder5' */

  /* S-Function "ADC12bit_wrapper" Block: <S2>/S-Function Builder5 */
  ADC12bit_Update_wrapper( &Experiment_4_1_PRBS_B.SFunctionBuilder5,
    &Experiment_4_1_PRBS_DW.SFunctionBuilder5_DSTATE,
    &Experiment_4_1_PRBS_P.SFunctionBuilder5_P1, 1);

  /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[1] =
    Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[0];
  Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[0] = DiscreteTransferFcn_tmp;

  /* Update for S-Function (DAC12bit): '<S4>/S-Function Builder' */

  /* S-Function "DAC12bit_wrapper" Block: <S4>/S-Function Builder */
  DAC12bit_Update_wrapper(&Experiment_4_1_PRBS_B.DataTypeConversion,
    &Experiment_4_1_PRBS_DW.SFunctionBuilder_DSTATE,
    &Experiment_4_1_PRBS_P.SFunctionBuilder_P1, 1);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(0, Experiment_4_1_PRBS_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(Experiment_4_1_PRBS_M)!=-1) &&
        !((rtmGetTFinal(Experiment_4_1_PRBS_M)-
           Experiment_4_1_PRBS_M->Timing.taskTime0) >
          Experiment_4_1_PRBS_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Experiment_4_1_PRBS_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Experiment_4_1_PRBS_M)) {
      rtmSetErrorStatus(Experiment_4_1_PRBS_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Experiment_4_1_PRBS_M->Timing.taskTime0 =
    (++Experiment_4_1_PRBS_M->Timing.clockTick0) *
    Experiment_4_1_PRBS_M->Timing.stepSize0;
}

/* Model initialize function */
void Experiment_4_1_PRBS_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Experiment_4_1_PRBS_M, 0,
                sizeof(RT_MODEL_Experiment_4_1_PRBS_T));
  rtmSetTFinal(Experiment_4_1_PRBS_M, 50.0);
  Experiment_4_1_PRBS_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Experiment_4_1_PRBS_M->Sizes.checksums[0] = (2559504156U);
  Experiment_4_1_PRBS_M->Sizes.checksums[1] = (3904277480U);
  Experiment_4_1_PRBS_M->Sizes.checksums[2] = (368219292U);
  Experiment_4_1_PRBS_M->Sizes.checksums[3] = (3961529076U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    Experiment_4_1_PRBS_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Experiment_4_1_PRBS_M->extModeInfo,
      &Experiment_4_1_PRBS_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Experiment_4_1_PRBS_M->extModeInfo,
                        Experiment_4_1_PRBS_M->Sizes.checksums);
    rteiSetTPtr(Experiment_4_1_PRBS_M->extModeInfo, rtmGetTPtr
                (Experiment_4_1_PRBS_M));
  }

  /* block I/O */
  (void) memset(((void *) &Experiment_4_1_PRBS_B), 0,
                sizeof(B_Experiment_4_1_PRBS_T));

  /* states (dwork) */
  (void) memset((void *)&Experiment_4_1_PRBS_DW, 0,
                sizeof(DW_Experiment_4_1_PRBS_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Experiment_4_1_PRBS_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* InitializeConditions for S-Function (ADC12bit): '<S2>/S-Function Builder5' */

  /* S-Function Block: <S2>/S-Function Builder5 */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        Experiment_4_1_PRBS_DW.SFunctionBuilder5_DSTATE = initVector[0];
      }
    }
  }

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[0] =
    Experiment_4_1_PRBS_P.DiscreteTransferFcn_InitialStat;
  Experiment_4_1_PRBS_DW.DiscreteTransferFcn_states[1] =
    Experiment_4_1_PRBS_P.DiscreteTransferFcn_InitialStat;

  /* InitializeConditions for S-Function (DAC12bit): '<S4>/S-Function Builder' */

  /* S-Function Block: <S4>/S-Function Builder */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        Experiment_4_1_PRBS_DW.SFunctionBuilder_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void Experiment_4_1_PRBS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
