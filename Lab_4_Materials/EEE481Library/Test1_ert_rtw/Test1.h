/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Test1.h
 *
 * Code generated for Simulink model 'Test1'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Dec 30 13:41:44 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Test1_h_
#define RTW_HEADER_Test1_h_
#include <stddef.h>
#include <string.h>
#ifndef Test1_COMMON_INCLUDES_
# define Test1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Test1_COMMON_INCLUDES_ */

#include "Test1_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  int16_T SFunctionBuilder5;           /* '<Root>/S-Function Builder5' */
} B_Test1_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder5_DSTATE;     /* '<Root>/S-Function Builder5' */
} DW_Test1_T;

/* Parameters (auto storage) */
struct P_Test1_T_ {
  int8_T SFunctionBuilder5_P1;         /* Expression: int8(1)
                                        * Referenced by: '<Root>/S-Function Builder5'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Test1_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_Test1_T Test1_P;

/* Block signals (auto storage) */
extern B_Test1_T Test1_B;

/* Block states (auto storage) */
extern DW_Test1_T Test1_DW;

/* Model entry point functions */
extern void Test1_initialize(void);
extern void Test1_step(void);
extern void Test1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Test1_T *const Test1_M;

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
 * '<Root>' : 'Test1'
 * '<S1>'   : 'Test1/PWM12bit'
 * '<S2>'   : 'Test1/SerialRead'
 * '<S3>'   : 'Test1/Subsystem'
 * '<S4>'   : 'Test1/prbs1'
 * '<S5>'   : 'Test1/psbs_5bits2'
 * '<S6>'   : 'Test1/prbs1/psbs_6bits'
 * '<S7>'   : 'Test1/prbs1/psbs_6bits/Counter Free-Running'
 * '<S8>'   : 'Test1/prbs1/psbs_6bits/MATLAB Function'
 * '<S9>'   : 'Test1/prbs1/psbs_6bits/delay_1'
 * '<S10>'  : 'Test1/prbs1/psbs_6bits/delay_2'
 * '<S11>'  : 'Test1/prbs1/psbs_6bits/delay_3'
 * '<S12>'  : 'Test1/prbs1/psbs_6bits/delay_4'
 * '<S13>'  : 'Test1/prbs1/psbs_6bits/delay_5'
 * '<S14>'  : 'Test1/prbs1/psbs_6bits/delay_6'
 * '<S15>'  : 'Test1/prbs1/psbs_6bits/Counter Free-Running/Increment Real World'
 * '<S16>'  : 'Test1/prbs1/psbs_6bits/Counter Free-Running/Wrap To Zero'
 * '<S17>'  : 'Test1/psbs_5bits2/Counter Free-Running1'
 * '<S18>'  : 'Test1/psbs_5bits2/Counter Limited'
 * '<S19>'  : 'Test1/psbs_5bits2/Enabled Subsystem'
 * '<S20>'  : 'Test1/psbs_5bits2/MATLAB Function'
 * '<S21>'  : 'Test1/psbs_5bits2/Counter Free-Running1/Increment Real World'
 * '<S22>'  : 'Test1/psbs_5bits2/Counter Free-Running1/Wrap To Zero'
 * '<S23>'  : 'Test1/psbs_5bits2/Counter Limited/Increment Real World'
 * '<S24>'  : 'Test1/psbs_5bits2/Counter Limited/Wrap To Zero'
 * '<S25>'  : 'Test1/psbs_5bits2/Enabled Subsystem/delay_1'
 * '<S26>'  : 'Test1/psbs_5bits2/Enabled Subsystem/delay_2'
 * '<S27>'  : 'Test1/psbs_5bits2/Enabled Subsystem/delay_3'
 * '<S28>'  : 'Test1/psbs_5bits2/Enabled Subsystem/delay_4'
 * '<S29>'  : 'Test1/psbs_5bits2/Enabled Subsystem/delay_5'
 */
#endif                                 /* RTW_HEADER_Test1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
