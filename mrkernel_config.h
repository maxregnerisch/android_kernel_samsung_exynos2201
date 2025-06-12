/* SPDX-License-Identifier: GPL-2.0 */
/*
 * mrkernel - High Performance Kernel Configuration
 * Samsung Exynos 2201 Optimizations
 */

#ifndef _MRKERNEL_CONFIG_H
#define _MRKERNEL_CONFIG_H

/* mrkernel version information */
#define MRKERNEL_VERSION_MAJOR		1
#define MRKERNEL_VERSION_MINOR		0
#define MRKERNEL_VERSION_PATCH		0
#define MRKERNEL_VERSION_STRING		"1.0.0"

/* Performance optimizations */
#define MRKERNEL_ENHANCED_SCHEDULER	1
#define MRKERNEL_THERMAL_MANAGEMENT	1
#define MRKERNEL_POWER_EFFICIENCY	1
#define MRKERNEL_SECURITY_HARDENING	1

/* Samsung Exynos 2201 specific optimizations */
#define MRKERNEL_EXYNOS_2201_SUPPORT	1
#define MRKERNEL_MALI_GPU_BOOST		1
#define MRKERNEL_CAMERA_OPTIMIZATION	1
#define MRKERNEL_DISPLAY_ENHANCEMENT	1

/* Advanced features */
#define MRKERNEL_ADAPTIVE_SCALING	1
#define MRKERNEL_INTELLIGENT_BOOST	1
#define MRKERNEL_BATTERY_SAVER		1

#endif /* _MRKERNEL_CONFIG_H */

