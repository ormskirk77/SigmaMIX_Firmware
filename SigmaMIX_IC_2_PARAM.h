/*
 * File:           C:\Users\shun\SimplicityStudio\v4_workspace\SigmaMIX\SigmaMIX_IC_2_PARAM.h
 *
 * Created:        Friday, June 23, 2017 11:28:18 AM
 * Description:    SigmaMIX:IC 2 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2017 Analog Devices, Inc. All rights reserved.
 */
#ifndef __SIGMAMIX_IC_2_PARAM_H__
#define __SIGMAMIX_IC_2_PARAM_H__


/* Module if1 - Single SW slew vol (adjustable)*/
#define MOD_IF1_COUNT                                  2
#define MOD_IF1_DEVICE                                 "IC2"
#define MOD_IF1_ALG0_TARGET_ADDR                       0
#define MOD_IF1_ALG0_TARGET_FIXPT                      0x00800000
#define MOD_IF1_ALG0_TARGET_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_IF1_ALG0_TARGET_TYPE                       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_IF1_ALG0_STEP_ADDR                         1
#define MOD_IF1_ALG0_STEP_FIXPT                        0x00008000
#define MOD_IF1_ALG0_STEP_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_IF1_ALG0_STEP_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module if2 - Single SW slew vol (adjustable)*/
#define MOD_IF2_COUNT                                  2
#define MOD_IF2_DEVICE                                 "IC2"
#define MOD_IF2_ALG0_TARGET_ADDR                       2
#define MOD_IF2_ALG0_TARGET_FIXPT                      0x00800000
#define MOD_IF2_ALG0_TARGET_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_IF2_ALG0_TARGET_TYPE                       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_IF2_ALG0_STEP_ADDR                         3
#define MOD_IF2_ALG0_STEP_FIXPT                        0x00008000
#define MOD_IF2_ALG0_STEP_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_IF2_ALG0_STEP_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module mix - Stereo Mixer*/
#define MOD_MIX_COUNT                                  2
#define MOD_MIX_DEVICE                                 "IC2"
#define MOD_MIX_ALG0_STAGE0_VOLUME_ADDR                4
#define MOD_MIX_ALG0_STAGE0_VOLUME_FIXPT               0x00800000
#define MOD_MIX_ALG0_STAGE0_VOLUME_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MIX_ALG0_STAGE0_VOLUME_TYPE                SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MIX_ALG0_STAGE1_VOLUME_ADDR                5
#define MOD_MIX_ALG0_STAGE1_VOLUME_FIXPT               0x00800000
#define MOD_MIX_ALG0_STAGE1_VOLUME_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MIX_ALG0_STAGE1_VOLUME_TYPE                SIGMASTUDIOTYPE_FIXPOINT

/* Module xf1 - Single SW slew vol (adjustable)*/
#define MOD_XF1_COUNT                                  4
#define MOD_XF1_DEVICE                                 "IC2"
#define MOD_XF1_ALG0_TARGET_ADDR                       6
#define MOD_XF1_ALG0_TARGET_FIXPT                      0x00208642
#define MOD_XF1_ALG0_TARGET_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.254097270554931)
#define MOD_XF1_ALG0_TARGET_TYPE                       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF1_ALG0_STEP_ADDR                         7
#define MOD_XF1_ALG0_STEP_FIXPT                        0x00010000
#define MOD_XF1_ALG0_STEP_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0078125)
#define MOD_XF1_ALG0_STEP_TYPE                         SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF1_ALG1_TARGET_ADDR                       8
#define MOD_XF1_ALG1_TARGET_FIXPT                      0x00208642
#define MOD_XF1_ALG1_TARGET_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.254097270554931)
#define MOD_XF1_ALG1_TARGET_TYPE                       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF1_ALG1_STEP_ADDR                         9
#define MOD_XF1_ALG1_STEP_FIXPT                        0x00010000
#define MOD_XF1_ALG1_STEP_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0078125)
#define MOD_XF1_ALG1_STEP_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module xf2 - Single SW slew vol (adjustable)*/
#define MOD_XF2_COUNT                                  4
#define MOD_XF2_DEVICE                                 "IC2"
#define MOD_XF2_ALG0_TARGET_ADDR                       10
#define MOD_XF2_ALG0_TARGET_FIXPT                      0x00800000
#define MOD_XF2_ALG0_TARGET_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_XF2_ALG0_TARGET_TYPE                       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF2_ALG0_STEP_ADDR                         11
#define MOD_XF2_ALG0_STEP_FIXPT                        0x00010000
#define MOD_XF2_ALG0_STEP_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0078125)
#define MOD_XF2_ALG0_STEP_TYPE                         SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF2_ALG1_TARGET_ADDR                       12
#define MOD_XF2_ALG1_TARGET_FIXPT                      0x00800000
#define MOD_XF2_ALG1_TARGET_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_XF2_ALG1_TARGET_TYPE                       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF2_ALG1_STEP_ADDR                         13
#define MOD_XF2_ALG1_STEP_FIXPT                        0x00010000
#define MOD_XF2_ALG1_STEP_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0078125)
#define MOD_XF2_ALG1_STEP_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module monitor gain - Single SW slew vol (adjustable)*/
#define MOD_MONITORGAIN_COUNT                          4
#define MOD_MONITORGAIN_DEVICE                         "IC2"
#define MOD_MONITORGAIN_ALG0_TARGET_ADDR               14
#define MOD_MONITORGAIN_ALG0_TARGET_FIXPT              0x007AA820
#define MOD_MONITORGAIN_ALG0_TARGET_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.958255854960265)
#define MOD_MONITORGAIN_ALG0_TARGET_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MONITORGAIN_ALG0_STEP_ADDR                 15
#define MOD_MONITORGAIN_ALG0_STEP_FIXPT                0x00000800
#define MOD_MONITORGAIN_ALG0_STEP_VALUE                SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_MONITORGAIN_ALG0_STEP_TYPE                 SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MONITORGAIN_ALG1_TARGET_ADDR               16
#define MOD_MONITORGAIN_ALG1_TARGET_FIXPT              0x007AA820
#define MOD_MONITORGAIN_ALG1_TARGET_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.958255854960265)
#define MOD_MONITORGAIN_ALG1_TARGET_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MONITORGAIN_ALG1_STEP_ADDR                 17
#define MOD_MONITORGAIN_ALG1_STEP_FIXPT                0x00000800
#define MOD_MONITORGAIN_ALG1_STEP_VALUE                SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_MONITORGAIN_ALG1_STEP_TYPE                 SIGMASTUDIOTYPE_FIXPOINT

/* Module xf - Stereo Mixer*/
#define MOD_XF_COUNT                                   2
#define MOD_XF_DEVICE                                  "IC2"
#define MOD_XF_ALG0_STAGE0_VOLUME_ADDR                 18
#define MOD_XF_ALG0_STAGE0_VOLUME_FIXPT                0x00800000
#define MOD_XF_ALG0_STAGE0_VOLUME_VALUE                SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_XF_ALG0_STAGE0_VOLUME_TYPE                 SIGMASTUDIOTYPE_FIXPOINT
#define MOD_XF_ALG0_STAGE1_VOLUME_ADDR                 19
#define MOD_XF_ALG0_STAGE1_VOLUME_FIXPT                0x00800000
#define MOD_XF_ALG0_STAGE1_VOLUME_VALUE                SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_XF_ALG0_STAGE1_VOLUME_TYPE                 SIGMASTUDIOTYPE_FIXPOINT

/* Module master gain - Single SW slew vol (adjustable)*/
#define MOD_MASTERGAIN_COUNT                           4
#define MOD_MASTERGAIN_DEVICE                          "IC2"
#define MOD_MASTERGAIN_ALG0_TARGET_ADDR                20
#define MOD_MASTERGAIN_ALG0_TARGET_FIXPT               0x007AA820
#define MOD_MASTERGAIN_ALG0_TARGET_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.958255854960265)
#define MOD_MASTERGAIN_ALG0_TARGET_TYPE                SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MASTERGAIN_ALG0_STEP_ADDR                  21
#define MOD_MASTERGAIN_ALG0_STEP_FIXPT                 0x00000800
#define MOD_MASTERGAIN_ALG0_STEP_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_MASTERGAIN_ALG0_STEP_TYPE                  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MASTERGAIN_ALG1_TARGET_ADDR                22
#define MOD_MASTERGAIN_ALG1_TARGET_FIXPT               0x007AA820
#define MOD_MASTERGAIN_ALG1_TARGET_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.958255854960265)
#define MOD_MASTERGAIN_ALG1_TARGET_TYPE                SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MASTERGAIN_ALG1_STEP_ADDR                  23
#define MOD_MASTERGAIN_ALG1_STEP_FIXPT                 0x00000800
#define MOD_MASTERGAIN_ALG1_STEP_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_MASTERGAIN_ALG1_STEP_TYPE                  SIGMASTUDIOTYPE_FIXPOINT

#endif
