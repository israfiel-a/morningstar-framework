/**
 * @file SHM.h
 * @author Israfiel (https://github.com/israfiel-a)
 * @brief Utilities for dealing with shared memory files.
 * @date 2024-08-01
 *
 * @copyright (c) 2024 - Israfiel
 */

#ifndef _MSENG_SHM_RENDERING_SYSTEM_
#define _MSENG_SHM_RENDERING_SYSTEM_

#include <Master.h>
#include <Windowing/Types.h>

pixel_buffer_t* CreateSolidPixelBuffer(uint32_t width, uint32_t height,
                                       color_type_t format,
                                       uint32_t color);

int OpenSHM(size_t size);

void BindSHM(registry_t* registry, uint32_t name, uint32_t version);

#endif // _MSENG_SHM_RENDERING_SYSTEM_