/**
 * Gekko.h - Additional rendering routines for the Gekko platform.
 *
 * Copyright (c) 2009 Rhys "Shareese" Koedijk
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * See 'LICENSE' included within this release
 */ 

#ifndef _GEKKO_H_
#define _GEKKO_H_

#ifdef __cplusplus
extern "C" {
#endif

void gxInit ();
void gxDestroy ();
void gxSwapBuffers ();

#if defined(__wii__)

// Wii disc slot light routines
void wiiLightOn ();
void wiiLightOff ();
bool wiiLightIsOn ();
void wiiLightSetLevel (int level);
int wiiLightGetLevel ();

#endif /* __wii__ */

#ifdef __cplusplus
}
#endif

#endif /* _GEKKO_H_ */
