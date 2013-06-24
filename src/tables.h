/* libdogma
 * Copyright (C) 2012, 2013 Romain "Artefact2" Dalmaso <artefact2@gmail.com>
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

#pragma once
#ifndef _DOGMA_TABLES_H
#define _DOGMA_TABLES_H 1

#include "dogma.h"
#include "dogma_internal.h"

/* -------- General -------- */

extern array_t types_by_id;
extern array_t attributes_by_id;
extern array_t effects_by_id;
extern array_t expressions_by_id;
extern array_t type_attributes_by_typeid;
extern array_t type_effects_by_typeid;





/* -------- Internal functions -------- */

/* Initialize the indexes. Must only be called once. */
void dogma_init_tables(void);

/* Get a type by its typeid. */
int dogma_get_type(typeid_t, const dogma_type_t**);

/* Get an attribute by its attributeid. */
int dogma_get_attribute(attributeid_t, const dogma_attribute_t**);

/* Get an effect by its effectid. */
int dogma_get_effect(effectid_t, const dogma_effect_t**);

/* Get an expression by its expressionid. */
int dogma_get_expression(expressionid_t, const dogma_expression_t**);



/* Get an array of all overridden attributes of a type. */
int dogma_get_type_attributes(typeid_t, array_t*);

/* Get an attribute of a type. Uses the overridden value (if there is
 * one), or the default value. */
int dogma_get_type_attribute(typeid_t, attributeid_t, double*);



/* Get an array of all effects of a type. */
int dogma_get_type_effects(typeid_t, array_t*);

/* Get a typeeffect of a type. */
int dogma_get_type_effect(typeid_t, effectid_t, const dogma_type_effect_t**);





#endif
