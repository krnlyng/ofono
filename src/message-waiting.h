/*
 *
 *  oFono - Open Source Telephony
 *
 *  Copyright (C) 2008-2009  Intel Corporation. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

void ofono_message_waiting_present_notify(struct ofono_modem *modem,
						enum sms_mwi_type type,
						gboolean present, int profile);
void ofono_message_waiting_count_notify(struct ofono_modem *modem,
					enum sms_mwi_type type, int count,
					int profile);

void ofono_handle_sms_mwi(struct ofono_modem *modem,
				struct sms *sms, gboolean *out_discard);
