/* libdogma
 * Copyright (C) 2012 Romain "Artefact2" Dalmaso <artefact2@gmail.com>
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef _DOGMA_H
#define _DOGMA_H 1

#include <stdint.h>

/* -------- Return codes -------- */

/* Used to indicate success. */
#define DOGMA_OK 0

/* Used when the requested object (type, expression, etc.) does not
 * exist. */
#define DOGMA_NOT_FOUND 1

/* -------- Data types -------- */

typedef uint32_t typeid_t;
typedef uint16_t attributeid_t;

struct dogma_context_s;
typedef struct dogma_context_s dogma_context_t;

/* -------- General functions -------- */

/* Initialize the static state needed by the library. Must only be
 * called exactly once before any other dogma_* function. */
int dogma_init(void);

/* -------- Context manipulation functions -------- */

/* Create a dogma context. A dogma context consists of a character and
 * his skills, a ship, its fitted modules, etc. */
int dogma_init_context(dogma_context_t**);

/* Free a dogma context previously created by dogma_init_context(). */
int dogma_free_context(dogma_context_t*);

/* Set the ship of a dogma context. */
int dogma_set_ship(dogma_context_t*, typeid_t);

/* -------- Attribute getters -------- */

/* Get an attribute of the ship of a dogma context. */
int dogma_get_ship_attribute(dogma_context_t*, attributeid_t, double*);

#endif