/*-------------------------------------------------------------------------
 *
 * int8.h
 *	  Declarations for operations on 64-bit integers.
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id: int8.h,v 1.32 2002/04/21 19:48:31 thomas Exp $
 *
 * NOTES
 * These data types are supported on all 64-bit architectures, and may
 *	be supported through libraries on some 32-bit machines. If your machine
 *	is not currently supported, then please try to make it so, then post
 *	patches to the postgresql.org hackers mailing list.
 *
 *-------------------------------------------------------------------------
 */
#ifndef INT8_H
#define INT8_H

#include "c.h"
#include "fmgr.h"

/* this should be set in pg_config.h, but just in case it wasn't: */
#ifndef INT64_FORMAT
#warning "Broken pg_config.h should have defined INT64_FORMAT"
#define INT64_FORMAT "%ld"
#endif

#ifdef HAVE_LL_CONSTANTS
#define INT64CONST(x)  ((int64) x##LL)
#else
#define INT64CONST(x)  ((int64) x)
#endif

extern Datum int8in(PG_FUNCTION_ARGS);
extern Datum int8out(PG_FUNCTION_ARGS);

extern Datum int8eq(PG_FUNCTION_ARGS);
extern Datum int8ne(PG_FUNCTION_ARGS);
extern Datum int8lt(PG_FUNCTION_ARGS);
extern Datum int8gt(PG_FUNCTION_ARGS);
extern Datum int8le(PG_FUNCTION_ARGS);
extern Datum int8ge(PG_FUNCTION_ARGS);

extern Datum int84eq(PG_FUNCTION_ARGS);
extern Datum int84ne(PG_FUNCTION_ARGS);
extern Datum int84lt(PG_FUNCTION_ARGS);
extern Datum int84gt(PG_FUNCTION_ARGS);
extern Datum int84le(PG_FUNCTION_ARGS);
extern Datum int84ge(PG_FUNCTION_ARGS);

extern Datum int48eq(PG_FUNCTION_ARGS);
extern Datum int48ne(PG_FUNCTION_ARGS);
extern Datum int48lt(PG_FUNCTION_ARGS);
extern Datum int48gt(PG_FUNCTION_ARGS);
extern Datum int48le(PG_FUNCTION_ARGS);
extern Datum int48ge(PG_FUNCTION_ARGS);

extern Datum int82eq(PG_FUNCTION_ARGS);
extern Datum int82ne(PG_FUNCTION_ARGS);
extern Datum int82lt(PG_FUNCTION_ARGS);
extern Datum int82gt(PG_FUNCTION_ARGS);
extern Datum int82le(PG_FUNCTION_ARGS);
extern Datum int82ge(PG_FUNCTION_ARGS);

extern Datum int28eq(PG_FUNCTION_ARGS);
extern Datum int28ne(PG_FUNCTION_ARGS);
extern Datum int28lt(PG_FUNCTION_ARGS);
extern Datum int28gt(PG_FUNCTION_ARGS);
extern Datum int28le(PG_FUNCTION_ARGS);
extern Datum int28ge(PG_FUNCTION_ARGS);

extern Datum int8um(PG_FUNCTION_ARGS);
extern Datum int8up(PG_FUNCTION_ARGS);
extern Datum int8pl(PG_FUNCTION_ARGS);
extern Datum int8mi(PG_FUNCTION_ARGS);
extern Datum int8mul(PG_FUNCTION_ARGS);
extern Datum int8div(PG_FUNCTION_ARGS);
extern Datum int8abs(PG_FUNCTION_ARGS);
extern Datum int8fac(PG_FUNCTION_ARGS);
extern Datum int8mod(PG_FUNCTION_ARGS);
extern Datum int8inc(PG_FUNCTION_ARGS);
extern Datum int8larger(PG_FUNCTION_ARGS);
extern Datum int8smaller(PG_FUNCTION_ARGS);

extern Datum int8and(PG_FUNCTION_ARGS);
extern Datum int8or(PG_FUNCTION_ARGS);
extern Datum int8xor(PG_FUNCTION_ARGS);
extern Datum int8not(PG_FUNCTION_ARGS);
extern Datum int8shl(PG_FUNCTION_ARGS);
extern Datum int8shr(PG_FUNCTION_ARGS);

extern Datum int84pl(PG_FUNCTION_ARGS);
extern Datum int84mi(PG_FUNCTION_ARGS);
extern Datum int84mul(PG_FUNCTION_ARGS);
extern Datum int84div(PG_FUNCTION_ARGS);

extern Datum int48pl(PG_FUNCTION_ARGS);
extern Datum int48mi(PG_FUNCTION_ARGS);
extern Datum int48mul(PG_FUNCTION_ARGS);
extern Datum int48div(PG_FUNCTION_ARGS);

extern Datum int48(PG_FUNCTION_ARGS);
extern Datum int84(PG_FUNCTION_ARGS);

extern Datum int28(PG_FUNCTION_ARGS);
extern Datum int82(PG_FUNCTION_ARGS);

extern Datum i8tod(PG_FUNCTION_ARGS);
extern Datum dtoi8(PG_FUNCTION_ARGS);

extern Datum int8_text(PG_FUNCTION_ARGS);
extern Datum text_int8(PG_FUNCTION_ARGS);

#endif   /* INT8_H */
