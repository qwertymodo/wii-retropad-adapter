/*
* Wii RetroPad Adapter - Nintendo Wiimote adapter for retro-controllers!
* Copyright (c) 2011 Bruno Freitas - bruno@brunofreitas.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCPAD_H_
#define GCPAD_H_

static inline void GCPad_send(byte *cmd, byte length);
static inline void GCPad_recv(byte *buffer, byte bits);
bool GCPad_init(bool disable_ints, bool clear_regs);
bool GCPad_read(bool disable_ints);
bool GCPad_timeouted();
byte *GCPad_data();
bool N64Pad_read(bool disable_ints);
byte *N64Pad_data();

#endif /* GCPAD_H_ */
