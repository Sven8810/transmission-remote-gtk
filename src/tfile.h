/*
 * transmission-remote-gtk - A GTK RPC client to Transmission
 * Copyright (C) 2011  Alan Fitton

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef TFILE_H_
#define TFILE_H_

#include <glib-object.h>
#include <json-glib/json-glib.h>

gint64 file_get_length(JsonObject * f);
gint64 file_get_bytes_completed(JsonObject * f);
const gchar *file_get_name(JsonObject * f);
gdouble file_get_progress(JsonObject * f);

#endif				/* TFILE_H_ */