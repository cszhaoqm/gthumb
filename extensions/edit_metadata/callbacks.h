/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/*
 *  GThumb
 *
 *  Copyright (C) 2009 Free Software Foundation, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CALLBACKS_H
#define CALLBACKS_H

#include <gthumb.h>

void      edit_metadata__gth_browser_construct_cb              (GthBrowser  *browser);
void      edit_metadata__gth_browser_update_sensitivity_cb     (GthBrowser  *browser);
gpointer  edit_metadata__gth_browser_file_list_key_press_cb    (GthBrowser  *browser,
						   	        GdkEventKey *event);

#endif /* CALLBACKS_H */
