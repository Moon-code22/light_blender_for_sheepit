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
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 */

/** \file
 * \ingroup imbuf
 * \brief Function declarations for filter.c
 */

#pragma once

struct ImBuf;

void imb_filterx(struct ImBuf *ibuf);

void IMB_premultiply_rect(unsigned int *rect, char planes, int w, int h);
void IMB_premultiply_rect_float(float *rect_float, int channels, int w, int h);

void IMB_unpremultiply_rect(unsigned int *rect, char planes, int w, int h);
void IMB_unpremultiply_rect_float(float *rect_float, int channels, int w, int h);

/**
 * Result in ibuf2, scaling should be done correctly.
 */
void imb_onehalf_no_alloc(struct ImBuf *ibuf2, struct ImBuf *ibuf1);
