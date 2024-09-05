/* Copyright 2021 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#if defined(KEYBOARD_keebio_sinc_rev1) || defined(KEYBOARD_keebio_sinc_rev2)

    #define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2

#endif

#define VIAL_KEYBOARD_UID {0x89, 0x26, 0xAD, 0x27, 0x0B, 0xD4, 0xE4, 0x2D}

// Press Escape and Enter to unlock security-sensitive settings
#define VIAL_UNLOCK_COMBO_ROWS { 5, 8 }
#define VIAL_UNLOCK_COMBO_COLS { 2, 7 }
