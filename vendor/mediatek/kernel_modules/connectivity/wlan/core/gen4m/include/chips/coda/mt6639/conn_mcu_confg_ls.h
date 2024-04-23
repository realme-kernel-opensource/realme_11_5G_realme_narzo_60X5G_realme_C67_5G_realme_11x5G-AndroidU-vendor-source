/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

#ifndef __CONN_MCU_CONFG_LS_REGS_H__
#define __CONN_MCU_CONFG_LS_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CONN_MCU_CONFG_LS_BASE \
	0x88000000

#define CONN_MCU_CONFG_CFG_DBG1_ADDR \
	(CONN_MCU_CONFG_LS_BASE + 0x00C)


#define CONN_MCU_CONFG_CFG_DBG1_DBG_CTRL1_SEL_ADDR \
	CONN_MCU_CONFG_CFG_DBG1_ADDR
#define CONN_MCU_CONFG_CFG_DBG1_DBG_CTRL1_SEL_MASK \
	0x00000020
#define CONN_MCU_CONFG_CFG_DBG1_DBG_CTRL1_SEL_SHFT \
	5
#define CONN_MCU_CONFG_CFG_DBG1_DBG_CTRL_SEL_ADDR \
	CONN_MCU_CONFG_CFG_DBG1_ADDR
#define CONN_MCU_CONFG_CFG_DBG1_DBG_CTRL_SEL_MASK \
	0x00000010
#define CONN_MCU_CONFG_CFG_DBG1_DBG_CTRL_SEL_SHFT \
	4
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N3_EN_ADDR \
	CONN_MCU_CONFG_CFG_DBG1_ADDR
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N3_EN_MASK \
	0x00000008
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N3_EN_SHFT \
	3
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N2_EN_ADDR \
	CONN_MCU_CONFG_CFG_DBG1_ADDR
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N2_EN_MASK \
	0x00000004
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N2_EN_SHFT \
	2
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N1_EN_ADDR \
	CONN_MCU_CONFG_CFG_DBG1_ADDR
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N1_EN_MASK \
	0x00000002
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N1_EN_SHFT \
	1
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N0_EN_ADDR \
	CONN_MCU_CONFG_CFG_DBG1_ADDR
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N0_EN_MASK \
	0x00000001
#define CONN_MCU_CONFG_CFG_DBG1_DEBUG_N0_EN_SHFT \
	0

#ifdef __cplusplus
}
#endif

#endif
