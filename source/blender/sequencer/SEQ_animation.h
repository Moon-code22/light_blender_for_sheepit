/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2022 Blender Foundation.
 * All rights reserved.
 */

#pragma once

/** \file
 * \ingroup sequencer
 */

#ifdef __cplusplus
extern "C" {
#endif

struct GSet;
struct ListBase;
struct Scene;
struct Sequence;

void SEQ_free_animdata(struct Scene *scene, struct Sequence *seq);
void SEQ_offset_animdata(struct Scene *scene, struct Sequence *seq, int ofs);
struct GSet *SEQ_fcurves_by_strip_get(const struct Sequence *seq, struct ListBase *fcurve_base);

#ifdef __cplusplus
}
#endif
