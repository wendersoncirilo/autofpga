////////////////////////////////////////////////////////////////////////////////
//
// Filename: 	genbus.cpp
//
// Project:	AutoFPGA, a utility for composing FPGA designs from peripherals
//
// Purpose:	
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2019, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of  the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
#include "genbus.h"
#include "msgs.h"
#include "bus/wb.h"
#include "keys.h"
#include "mapdhash.h"

WBBUSCLASS	wbclass;

unsigned	num_bus_classes = 1;
BUSCLASS	*busclass_list[] = { &wbclass };

/*
void	GENBUS::integrity_check(void) {
	if (!m_info) {
		gbl_msg.error("Bus logic generator with no bus info structure\n");
		return;
	}

	if (!m_info->m_plist)
		gbl_msg.error("Bus logic generator with no peripherals attached\n");

	if (!m_info->m_name)
		gbl_msg.error("Bus has no name!\n");

	if (!m_info->m_clock)
		gbl_msg.error("Bus has no assigned clock!\n");
}
*/

bool	BUSCLASS::matches(BUSINFO *bi) {
	PLIST *pl = bi->m_plist;
	if (!pl) {
		gbl_msg.info("No bus class match for empty slave list");
		return false;
	}

	for(unsigned pi = 0; pi < pl->size(); pi++) {
		MAPDHASH::iterator	kvpair, kvname;
		STRINGP			bname;
		PERIPH			*p;
		bool			bfail;

		p = (*pl)[pi];

		if (p->p_phash->end() != (kvpair = findkey(*p->p_phash, KYSLAVE_BUS))) {
			bname = getstring(kvpair->second.u.m_m, KY_NAME);
			if (bname && bname->compare(*bi->m_name)==0) {
				bfail = matchfail(kvpair->second.u.m_m);
				if (bfail)
					return false;
			}
		}

		if (p->p_phash->end() != (kvpair = findkey(*p->p_phash, KYBUS))) {
			bname = getstring(kvpair->second.u.m_m, KY_NAME);
			if (bname && bname->compare(*bi->m_name)==0) {
				bfail = matchfail(kvpair->second.u.m_m);
				if (bfail)
					return false;
			}
		}
	}

	return true;
}