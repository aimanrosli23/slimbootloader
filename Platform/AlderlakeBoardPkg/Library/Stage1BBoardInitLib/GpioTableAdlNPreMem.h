/** @file
  AlderLake N GPIO definition table for Pre-Memory Initialization

  Copyright (c) 2020 - 2021, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  This file is automatically generated. Please do NOT modify !!!

**/
#ifndef _ALDER_LAKE_N_PREMEM_GPIO_TABLE_H_
#define _ALDER_LAKE_N_PREMEM_GPIO_TABLE_H_

#include <GpioPinsVer2Lp.h>
#include <GpioConfig.h>

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemAdlNDdr5Crb[] =
{
  // PCH M.2 SSD
  {GPIO_VER2_LP_GPP_D16,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,  GpioIntDis, GpioPlatformReset,  GpioTermNone}},  // M2_PCH_SSD_PWREN
  {GPIO_VER2_LP_GPP_H0,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis, GpioPlatformReset,  GpioTermNone}},  // M2_SSD_RST_N

  //X1 SLOT
  {GPIO_VER2_LP_GPP_A8,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,  GpioIntDis, GpioPlatformReset,  GpioTermNone}},  // X1_SLOT_PWREN
  {GPIO_VER2_LP_GPP_F10,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis, GpioPlatformReset,  GpioTermNone}},  // X1_Slot_RESET

  //Type-C HDMI ALS (TCP1)
  {GPIO_VER2_LP_GPP_A22,  {GpioPadModeGpio, GpioHostOwnGpio, GpioDirOut,  GpioOutHigh,  GpioIntDis, GpioPlatformReset,  GpioTermNone}}, // TCP1_HDMI_ALS2_PWR_EN
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemAdlNLpddr5Rvp[] =
{
  // PCH M.2 SSD
  {GPIO_VER2_LP_GPP_D16,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,     GpioIntDis,      GpioPlatformReset,  GpioTermNone}},  //M2_PCH_SSD_PWREN
  {GPIO_VER2_LP_GPP_H0,    {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,      GpioIntDis,      GpioPlatformReset,  GpioTermNone}},  //M2_SSD_RST_N

  //X1 SLOT
  {GPIO_VER2_LP_GPP_A8,    {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,      GpioIntDis,      GpioPlatformReset,  GpioTermNone}},  //X1_SLOT_PWREN
  {GPIO_VER2_LP_GPP_F10,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,      GpioIntDis,      GpioPlatformReset,  GpioTermNone}},  //X1_Slot_RESET

  // TCP1
  {GPIO_VER2_LP_GPP_E20,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,     GpioIntDis,      GpioPlatformReset,  GpioTermNone}},  // TCP1_DISP_AUX_P_BIAS_GPIO
  {GPIO_VER2_LP_GPP_E21,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,      GpioIntDis,      GpioPlatformReset,  GpioTermNone}},  // TCP1_DISP_AUX_P_BIAS_GPIO

  //DDI-B HDMI ALS
  {GPIO_VER2_LP_GPP_A17,   {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,     GpioIntDis,      GpioPlatformReset,  GpioTermNone,}},  // HDMIB_ALS_PWR_EN

  // Unused pins set to high impedance
  {GPIO_VER2_LP_GPP_A20,   {GpioPadModeGpio, GpioHostOwnGpio, GpioDirNone, GpioOutDefault,  GpioIntDefault,  GpioResetDefault,   GpioTermNone}},  // HiZ
  {GPIO_VER2_LP_GPP_H19,   {GpioPadModeGpio, GpioHostOwnGpio, GpioDirNone, GpioOutDefault,  GpioIntDefault,  GpioResetDefault,   GpioTermNone}},  // HiZ
  {GPIO_VER2_LP_GPD11,     {GpioPadModeGpio, GpioHostOwnGpio, GpioDirNone, GpioOutDefault,  GpioIntDefault,  GpioResetDefault,   GpioTermNone}},  // HiZ
};

#endif // _ALDER_LAKE_N_PREMEM_GPIO_TABLE_H_
