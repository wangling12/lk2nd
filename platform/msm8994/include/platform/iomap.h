/* Copyright (c) 2013-2014, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PLATFORM_MSM8994_IOMAP_H_
#define _PLATFORM_MSM8994_IOMAP_H_

#define MSM_SHARED_BASE             0x06A00000

#define MSM_IOMAP_BASE              0xF9000000
#define MSM_IOMAP_END               0xFEFFFFFF

#define SYSTEM_IMEM_BASE            0xFE800000
#define MSM_SHARED_IMEM_BASE        0xFE87F000
#define RESTART_REASON_ADDR         (MSM_SHARED_IMEM_BASE + 0x65C)

#define BS_INFO_OFFSET                       (0x6B0)
#define BS_INFO_ADDR                         (MSM_SHARED_IMEM_BASE + BS_INFO_OFFSET)


#define KPSS_BASE                   0xF9000000

#define MSM_GIC_DIST_BASE           KPSS_BASE
#define MSM_GIC_CPU_BASE            (KPSS_BASE + 0x00002000)
#define APCS_KPSS_ACS_BASE          (KPSS_BASE + 0x00008000)
#define APCS_APC_KPSS_PLL_BASE      (KPSS_BASE + 0x0000A000)
#define APCS_KPSS_CFG_BASE          (KPSS_BASE + 0x00010000)
#define APCS_KPSS_WDT_BASE          (KPSS_BASE + 0x00017000)
#define KPSS_APCS_QTMR_AC_BASE      (KPSS_BASE + 0x00020000)
#define KPSS_APCS_F0_QTMR_V1_BASE   (KPSS_BASE + 0x00021000)
#define QTMR_BASE                   KPSS_APCS_F0_QTMR_V1_BASE

#define PERIPH_SS_BASE              0xF9800000

#define MSM_SDC1_BASE               (PERIPH_SS_BASE + 0x00024000)
#define MSM_SDC1_SDHCI_BASE         (PERIPH_SS_BASE + 0x00024900)
#define MSM_SDC3_BASE               (PERIPH_SS_BASE + 0x00064000)
#define MSM_SDC3_SDHCI_BASE         (PERIPH_SS_BASE + 0x00064900)
#define MSM_SDC2_BASE               (PERIPH_SS_BASE + 0x000A4000)
#define MSM_SDC2_SDHCI_BASE         (PERIPH_SS_BASE + 0x000A4900)
#define MSM_SDC4_BASE               (PERIPH_SS_BASE + 0x000E4000)
#define MSM_SDC4_SDHCI_BASE         (PERIPH_SS_BASE + 0x000E4900)

#define BLSP1_UART0_BASE            (PERIPH_SS_BASE + 0x0011D000)
#define BLSP1_UART1_BASE            (PERIPH_SS_BASE + 0x0011E000)
#define BLSP1_UART2_BASE            (PERIPH_SS_BASE + 0x0011F000)
#define BLSP1_UART3_BASE            (PERIPH_SS_BASE + 0x00120000)
#define BLSP1_UART4_BASE            (PERIPH_SS_BASE + 0x00121000)
#define BLSP1_UART5_BASE            (PERIPH_SS_BASE + 0x00122000)

#define BLSP2_UART1_BASE            (PERIPH_SS_BASE + 0x0015E000)

#define MSM_USB_BASE                (PERIPH_SS_BASE + 0x00255000)
#define USB2_PHY_SEL                0xFD4AB000

/* QUSB2 PHY */
#define QUSB2_PHY_BASE              (PERIPH_SS_BASE + 0x00339000)

#define QUSB2PHY_PORT_POWERDOWN     (QUSB2_PHY_BASE + 0x000000B4)

#define MSM_USB30_BASE              0xF9200000
#define MSM_USB30_QSCRATCH_BASE     0xF92F8800

/* SS QMP (Qulacomm Multi Protocol) */
#define QMP_PHY_BASE                0xF9B38000

/* Clocks */
#define CLK_CTL_BASE                0xFC400000

/* GPLL */
#define GPLL0_MODE                  (CLK_CTL_BASE + 0x0000)
#define GPLL4_MODE                  (CLK_CTL_BASE + 0x1DC0)
#define APCS_GPLL_ENA_VOTE          (CLK_CTL_BASE + 0x1480)
#define APCS_CLOCK_BRANCH_ENA_VOTE  (CLK_CTL_BASE + 0x1484)

/* UART */
#define BLSP1_AHB_CBCR              (CLK_CTL_BASE + 0x5C4)
#define BLSP1_UART2_APPS_CBCR       (CLK_CTL_BASE + 0x704)
#define BLSP1_UART2_APPS_CMD_RCGR   (CLK_CTL_BASE + 0x70C)
#define BLSP1_UART2_APPS_CFG_RCGR   (CLK_CTL_BASE + 0x710)
#define BLSP1_UART2_APPS_M          (CLK_CTL_BASE + 0x714)
#define BLSP1_UART2_APPS_N          (CLK_CTL_BASE + 0x718)
#define BLSP1_UART2_APPS_D          (CLK_CTL_BASE + 0x71C)
#define BLSP2_AHB_CBCR              (CLK_CTL_BASE + 0x944)
#define BLSP2_UART2_APPS_CBCR       (CLK_CTL_BASE + 0xA44)
#define BLSP2_UART2_APPS_CMD_RCGR   (CLK_CTL_BASE + 0xA4C)
#define BLSP2_UART2_APPS_CFG_RCGR   (CLK_CTL_BASE + 0xA50)
#define BLSP2_UART2_APPS_M          (CLK_CTL_BASE + 0xA54)
#define BLSP2_UART2_APPS_N          (CLK_CTL_BASE + 0xA58)
#define BLSP2_UART2_APPS_D          (CLK_CTL_BASE + 0xA5C)

/* USB */
#define USB_HS_BCR                  (CLK_CTL_BASE + 0x480)

#define USB_HS_SYSTEM_CBCR          (CLK_CTL_BASE + 0x484)
#define USB_HS_AHB_CBCR             (CLK_CTL_BASE + 0x488)
#define USB_HS_SYSTEM_CMD_RCGR      (CLK_CTL_BASE + 0x490)
#define USB_HS_SYSTEM_CFG_RCGR      (CLK_CTL_BASE + 0x494)

/* USB3 clocks */
#define SYS_NOC_USB3_AXI_CBCR       (CLK_CTL_BASE + 0x03FC)
#define USB2B_PHY_SLEEP_CBCR        (CLK_CTL_BASE + 0x04AC)
#define USB2B_PHY_BCR               (CLK_CTL_BASE + 0x04A8)
#define USB30_MASTER_CMD_RCGR       (CLK_CTL_BASE + 0x03D4)
#define USB30_MASTER_CFG_RCGR       (CLK_CTL_BASE + 0x03D8)
#define USB30_MASTER_M              (CLK_CTL_BASE + 0x03DC)
#define USB30_MASTER_N              (CLK_CTL_BASE + 0x03E0)
#define USB30_MASTER_D              (CLK_CTL_BASE + 0x03E4)
#define USB30_MASTER_CBCR           (CLK_CTL_BASE + 0x03C8)
#define USB_30_BCR                  (CLK_CTL_BASE + 0x03C0)
#define USB30_MOCK_UTMI_CMD_RCGR    (CLK_CTL_BASE + 0x03E8)
#define USB30_MOCK_UTMI_CFG_RCGR    (CLK_CTL_BASE + 0x03EC)
#define USB30_MOCK_UTMI_CBCR        (CLK_CTL_BASE + 0x03D0)
#define USB30_SLEEP_CBCR            (CLK_CTL_BASE + 0x03CC)
#define USB30_PHY_AUX_CMD_RCGR      (CLK_CTL_BASE + 0x1414)
#define USB30_PHY_AUX_CFG_RCGR      (CLK_CTL_BASE + 0x1418)
#define USB30_PHY_AUX_CBCR          (CLK_CTL_BASE + 0x1408)
#define USB30_PHY_PIPE_CBCR         (CLK_CTL_BASE + 0x140C)
#define USB30_PHY_BCR               (CLK_CTL_BASE + 0x1400)
#define USB30PHY_PHY_BCR            (CLK_CTL_BASE + 0x1404)
#define GCC_USB30_GDSCR             (CLK_CTL_BASE + 0x03C4)
#define GCC_QUSB2_PHY_BCR           (CLK_CTL_BASE + 0x04B8)
#define USB_PHY_CFG_AHB2PHY_CBCR    (CLK_CTL_BASE + 0x1A84)

/* SDCC */
#define SDCC1_BCR                   (CLK_CTL_BASE + 0x4C0) /* block reset */
#define SDCC1_APPS_CBCR             (CLK_CTL_BASE + 0x4C4) /* branch control */
#define SDCC1_AHB_CBCR              (CLK_CTL_BASE + 0x4C8)
#define SDCC1_CMD_RCGR              (CLK_CTL_BASE + 0x4D0) /* cmd */
#define SDCC1_CFG_RCGR              (CLK_CTL_BASE + 0x4D4) /* cfg */
#define SDCC1_M                     (CLK_CTL_BASE + 0x4D8) /* m */
#define SDCC1_N                     (CLK_CTL_BASE + 0x4DC) /* n */
#define SDCC1_D                     (CLK_CTL_BASE + 0x4E0) /* d */

/* SDCC3 */
#define SDCC3_BCR                   (CLK_CTL_BASE + 0x540) /* block reset */
#define SDCC3_APPS_CBCR             (CLK_CTL_BASE + 0x544) /* branch control */
#define SDCC3_AHB_CBCR              (CLK_CTL_BASE + 0x548)
#define SDCC3_INACTIVITY_TIMER_CBCR (CLK_CTL_BASE + 0x54C)
#define SDCC3_CMD_RCGR              (CLK_CTL_BASE + 0x550) /* cmd */
#define SDCC3_CFG_RCGR              (CLK_CTL_BASE + 0x554) /* cfg */
#define SDCC3_M                     (CLK_CTL_BASE + 0x558) /* m */
#define SDCC3_N                     (CLK_CTL_BASE + 0x55C) /* n */
#define SDCC3_D                     (CLK_CTL_BASE + 0x560) /* d */


#define GCC_WDOG_DEBUG              (CLK_CTL_BASE +  0x00001780)

#define UFS_BASE                    (0xFC590000 + 0x00004000)

#define SPMI_BASE                   0xFC4C0000
#define SPMI_GENI_BASE              (SPMI_BASE + 0xA000)
#define SPMI_PIC_BASE               (SPMI_BASE + 0xB000)

#define MSM_CE2_BAM_BASE            0xFD444000
#define MSM_CE2_BASE                0xFD45A000

#define TLMM_BASE_ADDR              0xFD510000
#define GPIO_CONFIG_ADDR(x)         (TLMM_BASE_ADDR + 0x1000 + (x)*0x10)
#define GPIO_IN_OUT_ADDR(x)         (TLMM_BASE_ADDR + 0x1004 + (x)*0x10)

#define MPM2_MPM_CTRL_BASE                   0xFC4A1000
#define MPM2_MPM_PS_HOLD                     0xFC4AB000
#define MPM2_MPM_SLEEP_TIMETICK_COUNT_VAL    0xFC4A3000

/* DRV strength for sdcc */
#define SDC1_HDRV_PULL_CTL           (TLMM_BASE_ADDR + 0x00002044)

/* SDHCI */
#define SDCC_MCI_HC_MODE            (0x00000078)
#define SDCC_HC_PWRCTL_STATUS_REG   (0x000000DC)
#define SDCC_HC_PWRCTL_MASK_REG     (0x000000E0)
#define SDCC_HC_PWRCTL_CLEAR_REG    (0x000000E4)
#define SDCC_HC_PWRCTL_CTL_REG      (0x000000E8)

/* Boot config */
#define SEC_CTRL_CORE_BASE          0xFC4B8000
#define BOOT_CONFIG_OFFSET          0x00006034
#define BOOT_CONFIG_REG             (SEC_CTRL_CORE_BASE+BOOT_CONFIG_OFFSET)

#define MPM2_MPM_SLEEP_TIMETICK_COUNT_VAL    0xFC4A3000

#define TCSR_PHSS_USB2_PHY_SEL               0xFD4AB000
#define PLATFORM_QMP_OFFSET                  0x8

#endif
