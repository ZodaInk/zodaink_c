////////////////////////////////////////
//
// zodaink_for_loops.h - v0.0 - ZodaInk
//
// A header file with a handful of useful for loops.
//
// Define ZODAINK_FOR_LOOPS_NO_SHORT_NAMES to only define
// the macros with the zi_ prefix.
//
// LICENSE
//   This software is dual-licensed to the public domain and under the following
//   license: you are granted a perpetual, irrevocable license to copy, modify,
//   publish, and distribute this file as you see fit.
//
////////////////////////////////////////


////////////////////////////////////////
//
// BEGIN INCLUDE GUARD
//
#if !defined(ZODAINK_FOR_LOOPS_INCLUDE_H)
#define ZODAINK_FOR_LOOPS_INCLUDE_H



////////////////////////////////////////
//
// FORWARDS
//
#define zi_for_range(type, index_name, from, to) \
for(type index_name = from; index_name < to; index_name += 1)

#define zi_for_inc_range(type, index_name, from, to_inclusive) \
for(type index_name = from; index_name <= to_inclusive; index_name += 1)

#define zi_for_linked(type, it_name, first, member_next) \
for(type * it_name = first; it_name != 0; it_name = it_name->##member_next)

#define zi_for(type, index_name, count) zi_for_range(type, index_name, 0, count)

#define zi_for_array(type, index_name, array) zi_for(type, index_name, array_count(array))

#define zi_for_length(type, index_name, array) zi_for(type, index_name, (array).length)

#define zi_for_plength(type, index_name, array) zi_for(type, index_name, (array)->length)

#define zi_for_count(type, index_name, array) zi_for(type, index_name, (array).count)

#define zi_for_pcount(type, index_name, array) zi_for(type, index_name, (array)->count)


////////////////////////////////////////
//
// BACKWARDS
//
#define zi_rfor_range(type, index_name, from, to) \
for(type index_name = to - 1; index_name >= from; index_name -= 1)

#define zi_rfor_inc_range(type, index_name, from, to_inclusive) \
for(type index_name = to_inclusive; index_name >= from; index_name -= 1)

#define zi_rfor_linked(type, it_name, last, member_previous) zi_for_linked(type, it_name, last, member_previous)

#define zi_rfor(type, index_name, count) zi_rfor_range(type, index_name, 0, count)

#define zi_rfor_array(type, index_name, array) zi_rfor(type, index_name, array_count(array))

#define zi_rfor_length(type, index_name, array) zi_rfor(type, index_name, (array).length)

#define zi_rfor_plength(type, index_name, array) zi_rfor(type, index_name, (array)->length)

#define zi_rfor_count(type, index_name, array) zi_rfor(type, index_name, (array).count)

#define zi_rfor_pcount(type, index_name, array) zi_rfor(type, index_name, (array)->count)


////////////////////////////////////////
//
// SHORT NAMES BEGIN
//
#if !defined(ZODAINK_FOR_LOOPS_NO_SHORT_NAMES)


////////////////////////////////////////
//
// FORWARDS
//
#define For(type, index_name, count) zi_for(type, index_name, count)

#define for_range(type, index_name, from, to) zi_for_range(type, index_name, from, to)

#define for_inc_range(type, index_name, from, to_inclusive) zi_for_inc_range(type, index_name, from, to_inclusive)

#define for_linked(type, it_name, first, member_next) zi_for_linked(type, it_name, first, member_next)

#define for_array(type, index_name, array) zi_for_array(type, index_name, array)

#define for_length(type, index_name, array_name) zi_for_length(type, index_name, array_name)

#define for_plength(type, index_name, array_name) zi_for_plength(type, index_name, array_name)

#define for_count(type, index_name, array_name) zi_for_count(type, index_name, array_name)

#define for_pcount(type, index_name, array_name) zi_for_pcount(type, index_name, array_name)


////////////////////////////////////////
//
// BACKWARDS
//
#define rfor(type, index_name, count) zi_rfor(type, index_name, count)

#define rfor_range(type, index_name, from, to) zi_rfor_range(type, index_name, from, to)

#define rfor_inc_range(type, index_name, from, to_inclusive) zi_rfor_inc_range(type, index_name, from, to_inclusive)

#define rfor_linked(type, it_name, last, member_previous) zi_rfor_linked(type, it_name, last, member_previous)

#define rfor_array(type, index_name, array) zi_rfor_array(type, index_name, array)

#define rfor_length(type, index_name, array_name) zi_rfor_length(type, index_name, array_name)

#define rfor_plength(type, index_name, array_name) zi_rfor_plength(type, index_name, array_name)

#define rfor_count(type, index_name, array_name) zi_rfor_count(type, index_name, array_name)

#define rfor_pcount(type, index_name, array_name) zi_rfor_pcount(type, index_name, array_name)


////////////////////////////////////////
//
// SHORT NAMES END
//
#endif


////////////////////////////////////////
//
// END INCLUDE GUARD
//
#endif // !ZODAINK_FOR_LOOPS_INCLUDE_H
