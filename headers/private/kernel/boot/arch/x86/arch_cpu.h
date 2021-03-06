/*
 * Copyright 2004-2005, Axel Dörfler, axeld@pinc-software.de. All rights reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef BOOT_ARCH_CPU_H
#define BOOT_ARCH_CPU_H


#include <SupportDefs.h>


#ifdef __cplusplus
extern "C" {
#endif

extern void cpu_init(void);

void calculate_cpu_conversion_factor(uint8 channel);


#ifdef __cplusplus
}
#endif

#endif	/* BOOT_ARCH_CPU_H */
