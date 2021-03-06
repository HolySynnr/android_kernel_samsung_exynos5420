/*
 * Copyright (c) 2012 Samsung Electronics Co. Ltd
 * Author: Anton Tikhomirov <av.tikhomirov@samsung.com>
 *
 * Exynos SuperSpeed USB 3.0 DRD Controller PHY registers
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ARM_MACH_EXYNOS_REGS_USB3_DRD_PHY_H
#define __ARM_MACH_EXYNOS_REGS_USB3_DRD_PHY_H __FILE__

#define EXYNOS_USB3_LINKSYSTEM		0x04
#define EXYNOS_USB3_LINKSYSTEM_XHCI_VERSION_CONTROL	(1 << 27)
#define EXYNOS_USB3_LINKSYSTEM_FLADJ_MASK		(0x3f << 1)
#define EXYNOS_USB3_LINKSYSTEM_FLADJ_SHIFT		1
#define EXYNOS_USB3_LINKSYSTEM_FLADJ(_x)		((_x) << 1)

#define EXYNOS_USB3_PHYUTMI		0x08
#define EXYNOS_USB3_PHYUTMI_OTGDISABLE			(1 << 6)
#define EXYNOS_USB3_PHYUTMI_FORCESUSPEND		(1 << 1)
#define EXYNOS_USB3_PHYUTMI_FORCESLEEP			(1 << 0)

#define EXYNOS_USB3_PHYPIPE		0x0C

#define EXYNOS_USB3_PHYCLKRST		0x10
#define EXYNOS_USB3_PHYCLKRST_SSC_REF_CLK_SEL_MASK	(0xff << 23)
#define EXYNOS_USB3_PHYCLKRST_SSC_REF_CLK_SEL_SHIFT	23
#define EXYNOS_USB3_PHYCLKRST_SSC_REF_CLK_SEL(_x)	((_x) << 23)
#define EXYNOS_USB3_PHYCLKRST_SSC_RANGE_MASK		(0x03 << 21)
#define EXYNOS_USB3_PHYCLKRST_SSC_RANGE_SHIFT		21
#define EXYNOS_USB3_PHYCLKRST_SSC_RANGE(_x)		((_x) << 21)
#define EXYNOS_USB3_PHYCLKRST_SSC_EN			(1 << 20)
#define EXYNOS_USB3_PHYCLKRST_REF_SSP_EN		(1 << 19)
#define EXYNOS_USB3_PHYCLKRST_REF_CLKDIV2		(1 << 18)
#define EXYNOS_USB3_PHYCLKRST_MPLL_MULTIPLIER_MASK	(0x7f << 11)
#define EXYNOS_USB3_PHYCLKRST_MPLL_MULTIPLIER_SHIFT	11
#define EXYNOS_USB3_PHYCLKRST_MPLL_MULTIPLIER(_x)	((_x) << 11)
#define EXYNOS_USB3_PHYCLKRST_FSEL_MASK			(0x3f << 5)
#define EXYNOS_USB3_PHYCLKRST_FSEL_SHIFT		5
#define EXYNOS_USB3_PHYCLKRST_FSEL(_x)			((_x) << 5)
#define EXYNOS_USB3_PHYCLKRST_RETENABLEN		(1 << 4)
#define EXYNOS_USB3_PHYCLKRST_REFCLKSEL_MASK		(0x03 << 2)
#define EXYNOS_USB3_PHYCLKRST_REFCLKSEL_SHIFT		2
#define EXYNOS_USB3_PHYCLKRST_REFCLKSEL(_x)		((_x) << 2)
#define EXYNOS_USB3_PHYCLKRST_PORTRESET			(1 << 1)
#define EXYNOS_USB3_PHYCLKRST_COMMONONN			(1 << 0)

#define EXYNOS_USB3_PHYREG0		0x14
#define EXYNOS_USB3_PHYREG0_SSC_REF_CLK_SEL	(1 << 21)
#define EXYNOS_USB3_PHYREG0_SSC_RANGE		(1 << 20)
#define EXYNOS_USB3_PHYREG0_CR_WRITE		(1 << 19)
#define EXYNOS_USB3_PHYREG0_CR_READ		(1 << 18)
#define EXYNOS_USB3_PHYREG0_CR_DATA_IN(_x)	((_x) << 2)
#define EXYNOS_USB3_PHYREG0_CR_CAP_DATA		(1 << 1)
#define EXYNOS_USB3_PHYREG0_CR_CAP_ADDR		(1 << 0)

#define EXYNOS_USB3_PHYREG1		0x18
#define EXYNOS_USB3_PHYREG1_CR_DATA_OUT(_x)	((_x) << 1)
#define EXYNOS_USB3_PHYREG1_CR_ACK		(1 << 0)

#define EXYNOS_USB3_PHYPARAM0		0x1C
#define EXYNOS_USB3_PHYPARAM1		0x20
#define EXYNOS_USB3_PHYTERM		0x24
#define EXYNOS_USB3_PHYTEST		0x28

#define EXYNOS_USB3_PHYTEST_POWERDOWN_SSP		(1 << 3)
#define EXYNOS_USB3_PHYTEST_POWERDOWN_HSP		(1 << 2)

#define EXYNOS_USB3_PHYADP		0x2C
#define EXYNOS_USB3_PHYBATCHG		0x30
#define EXYNOS_USB3_PHYRESUME		0x34
#define EXYNOS_USB3_LINKPORT		0x44

#endif /* __ARM_MACH_EXYNOS_REGS_USB3_DRD_PHY_H */
