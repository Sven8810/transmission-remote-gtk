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

#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "tpeer.h"
#include "protocol-constants.h"
#include "util.h"

const gchar *peer_get_address(JsonObject * p) {
    return json_object_get_string_member(p, TPEER_ADDRESS);
}

const gchar *peer_get_flagstr(JsonObject * p) {
    return json_object_get_string_member(p, TPEER_FLAGSTR);
}

const gchar *peer_get_client_name(JsonObject * p) {
    return json_object_get_string_member(p, TPEER_CLIENT_NAME);
}

gboolean peer_get_is_encrypted(JsonObject * p) {
    return json_object_get_boolean_member(p, TPEER_IS_ENCRYPTED);
}

gboolean peer_get_is_uploading_to(JsonObject * p) {
    return json_object_get_boolean_member(p, TPEER_IS_UPLOADING_TO);
}

gboolean peer_get_is_downloading_from(JsonObject * p) {
    return json_object_get_boolean_member(p, TPEER_IS_DOWNLOADING_FROM);
}

gdouble peer_get_progress(JsonObject * p) {
    return json_double_to_progress(json_object_get_member(p, TPEER_PROGRESS));
}

gint64 peer_get_rate_to_client(JsonObject * p) {
    return json_object_get_int_member(p, TPEER_RATE_TO_CLIENT);
}

gint64 peer_get_rate_to_peer(JsonObject * p) {
    return json_object_get_int_member(p, TPEER_RATE_TO_PEER);
}

gint64 peerfrom_get_pex(JsonObject *pf)
{
    return json_object_get_int_member(pf, TPEERFROM_FROMPEX);
}

gint64 peerfrom_get_dht(JsonObject *pf)
{
    return json_object_get_int_member(pf, TPEERFROM_FROMDHT);
}

gint64 peerfrom_get_trackers(JsonObject *pf)
{
    return json_object_get_int_member(pf, TPEERFROM_FROMTRACKERS);
}

gint64 peerfrom_get_ltep(JsonObject *pf)
{
    return json_object_get_int_member(pf, TPEERFROM_FROMLTEP);
}

gint64 peerfrom_get_resume(JsonObject *pf)
{
    return json_object_get_int_member(pf, TPEERFROM_FROMRESUME);
}

gint64 peerfrom_get_incoming(JsonObject *pf)
{
    return json_object_get_int_member(pf, TPEERFROM_FROMINCOMING);
}


gint64 peerfrom_get_lpd(JsonObject *pf)
{
    return json_object_has_member(pf, TPEERFROM_FROMLPD) ?
            json_object_get_int_member(pf, TPEERFROM_FROMLPD) : -1;
}
