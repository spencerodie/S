/* Copyright 2021 SamuraiKek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#pragma once


#define EE_HANDS

/* define pins */
#define MATRIX_ROW_PINS { F4, F5, F6, D3, C6 }
#define MATRIX_COL_PINS { D7, B4, B5, B6, F0, D4, D6 }
#define MATRIX_ROW_PINS_RIGHT { F5, F1, B2, B1, C6 }
#define MATRIX_COL_PINS_RIGHT { B6, B5, D6, D5, D3, D7, B4 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW
