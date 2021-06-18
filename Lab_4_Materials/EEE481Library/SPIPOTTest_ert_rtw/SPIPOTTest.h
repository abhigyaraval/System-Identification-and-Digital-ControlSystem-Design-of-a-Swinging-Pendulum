/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SPIPOTTest.h
 *
 * Code generated for Simulink model 'SPIPOTTest'.
 *
 * Model version                  : 1.97
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 10:44:30 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SPIPOTTest_h_
#define RTW_HEADER_SPIPOTTest_h_
#include <stddef.h>
#include <string.h>
#ifndef SPIPOTTest_COMMON_INCLUDES_
# define SPIPOTTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SPIPOTTest_COMMON_INCLUDES_ */

#include "SPIPOTTest_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder5_DSTATE;     /* '<S4>/S-Function Builder5' */
} DW_SPIPOTTest_T;

/* Parameters (auto storage) */
struct P_SPIPOTTest_T_ {
  int8_T SFunctionBuilder5_P1;         /* Expression: int8(CS)
                                        * Referenced by: '<S4>/S-Function Builder5'
                                        */
  uint8_T Constant2_Value;             /* Expression: uint8(10)
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint8_T Constant3_Value;             /* Expression: uint8(0)
                                        * Referenced by: '<Root>/Constant3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SPIPOTTest_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_SPIPOTTest_T SPIPOTTest_P;

/* Block states (auto storage) */
extern DW_SPIPOTTest_T SPIPOTTest_DW;

/* Model entry point functions */
extern void SPIPOTTest_initialize(void);
extern void SPIPOTTest_step(void);
extern void SPIPOTTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SPIPOTTest_T *const SPIPOTTest_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SPIPOTTest'
 * '<S1>'   : 'SPIPOTTest/PWM12bit'
 * '<S2>'   : 'SPIPOTTest/SerialRead'
 * '<S3>'   : 'SPIPOTTest/Subsystem'
 * '<S4>'   : 'SPIPOTTest/Subsystem1'
 * '<S5>'   : 'SPIPOTTest/prbs1'
 * '<S6>'   : 'SPIPOTTest/psbs_5bits2'
 * '<S7>'   : 'SPIPOTTest/prbs1/psbs_6bits'
 * '<S8>'   : 'SPIPOTTest/prbs1/psbs_6bits/Counter Free-Running'
 * '<S9>'   : 'SPIPOTTest/prbs1/psbs_6bits/MATLAB Function'
 * '<S10>'  : 'SPIPOTTest/prbs1/psbs_6bits/delay_1'
 * '<S11>'  : 'SPIPOTTest/prbs1/psbs_6bits/delay_2'
 * '<S12>'  : 'SPIPOTTest/prbs1/psbs_6bits/delay_3'
 * '<S13>'  : 'SPIPOTTest/prbs1/psbs_6bits/delay_4'
 * '<S14>'  : 'SPIPOTTest/prbs1/psbs_6bits/delay_5'
 * '<S15>'  : 'SPIPOTTest/prbs1/psbs_6bits/delay_6'
 * '<S16>'  : 'SPIPOTTest/psbs_5bits2/Counter Free-Running1'
 * '<S17>'  : 'SPIPOTTest/psbs_5bits2/Counter Limited'
 * '<S18>'  : 'SPIPOTTest/psbs_5bits2/Enabled Subsystem'
 * '<S19>'  : 'SPIPOTTest/psbs_5bits2/MATLAB Function'
 * '<S20>'  : 'SPIPOTTest/psbs_5bits2/Counter Free-Running1/Increment Real World'
 * '<S21>'  : 'SPIPOTTest/psbs_5bits2/Counter Free-Running1/Wrap To Zero'
 * '<S22>'  : 'SPIPOTTest/psbs_5bits2/Counter Limited/Increment Real World'
 * '<S23>'  : 'SPIPOTTest/psbs_5bits2/Counter Limited/Wrap To Zero'
 * '<S24>'  : 'SPIPOTTest/psbs_5bits2/Enabled Subsystem/delay_1'
 * '<S25>'  : 'SPIPOTTest/psbs_5bits2/Enabled Subsystem/delay_2'
 * '<S26>'  : 'SPIPOTTest/psbs_5bits2/Enabled Subsystem/delay_3'
 * '<S27>'  : 'SPIPOTTest/psbs_5bits2/Enabled Subsystem/delay_4'
 * '<S28>'  : 'SPIPOTTest/psbs_5bits2/Enabled Subsystem/delay_5'
 */
#endif                                 /* RTW_HEADER_SPIPOTTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
