/*
 * Copyright (C) 2011-2013, 2017 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation, and any use by you of this program is subject to the terms of such GNU licence.
 *
 *
 *
 */

#ifndef __MALI_MEM_VALIDATION_H__
#define __MALI_MEM_VALIDATION_H__

#include "mali_osk.h"

_mali_osk_errcode_t mali_mem_validation_add_range(u32 start, u32 size);
_mali_osk_errcode_t mali_mem_validation_check(u32 phys_addr, u32 size);

#endif /* __MALI_MEM_VALIDATION_H__ */
