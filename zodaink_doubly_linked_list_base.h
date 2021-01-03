////////////////////////////////////////
//
// zodaink_doubly_linked_list_base.h - v0.1 - ZodaInk
//
// A header file for your basic doubly linked list functions.
//
// This header assumes that the doubly linked lists are not circular.
// That means that whenever the previous member is 0, that is the first element in the list.
// Likewise if the next member is 0, that is the last element in the list.
//
// Example below this section.
//
// LICENSE
//   This software is dual-licensed to the public domain and under the following
//   license: you are granted a perpetual, irrevocable license to copy, modify,
//   publish, and distribute this file as you see fit.
//
////////////////////////////////////////


////////////////////////////////////////
//
// EXAMPLE
//
#if 0

#include <stdio.h>
#include <stdlib.h>

#include "zodaink_doubly_linked_list_base.h"

typedef struct My_Struct {
	struct My_Struct *previous;
	struct My_Struct *next;
	
	int value;
} My_Struct;

ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(insert_last, My_Struct, previous, next)

int main() {
	size_t     list_count = 8;
	My_Struct *list       = (My_Struct *)malloc(list_count);
	
	for(int i = 0; i < list_count; i += 1) {
		My_Struct *it = list + i;
		
		it->previous = 0;
		it->next     = 0;
		it->value    = i;
		
		if(i > 0) {
			insert_last(list, it);
		}
	}
	
	for(My_Struct *it = list; it; it = it->next) {
		printf("My_Struct{previous = 0x%x, next = 0x%x, value = %d}\n", it->previous, it->next, it->value);
	}
}

#endif


////////////////////////////////////////
//
// BEGIN INCLUDE GUARD
//
#if !defined(ZODAINK_DOUBLY_LINKED_LIST_INCLUDE_H)
#define ZODAINK_DOUBLY_LINKED_LIST_INCLUDE_H


////////////////////////////////////////
//
// CONFIG
//
#if !defined(ZODAINK_EMPTY)
#  define ZODAINK_EMPTY
#endif


////////////////////////////////////////
//
// EVERYTHING PREFIX SUFFIX
//
#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_PREFIX_SUFFIX_DEF(def, prefix, suffix, type, int_t, bool_t) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(prefix##get_count##suffix, type, int_t); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(prefix##get_first##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(prefix##get_last##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(prefix##remove##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(prefix##insert_before##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(prefix##insert_after##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(prefix##insert_first##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(prefix##insert_last##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(prefix##move_backward##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(prefix##move_forward##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(prefix##move_first##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(prefix##move_last##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(prefix##bubble_sort##suffix, type, bool_t)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_PREFIX_SUFFIX(def, prefix, suffix, type, int_t, bool_t, next, prev) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT(prefix##get_count##suffix, type, int_t, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST(prefix##get_first##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST(prefix##get_last##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE(prefix##remove##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE(prefix##insert_before##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER(prefix##insert_after##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST(prefix##insert_first##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(prefix##insert_last##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD(prefix##move_backward##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD(prefix##move_forward##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST(prefix##move_first##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST(prefix##move_last##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT(prefix##bubble_sort##suffix, type, bool_t, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_CPP_PROC_PREFIX_SUFFIX(def, prefix, suffix, type, int_t, bool_t) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_COUNT(prefix##get_count##suffix, cpp, type, int_t) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_FIRST(prefix##get_first##suffix, get_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_LAST(prefix##get_last##suffix, get_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_REMOVE(prefix##remove##suffix, remove, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_BEFORE(prefix##insert_before##suffix, insert_before, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_AFTER(prefix##insert_after##suffix, insert_after, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_FIRST(prefix##insert_first##suffix, insert_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_LAST(prefix##insert_last##suffix, insert_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_BACKWARD(prefix##move_backward##suffix, move_backward, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FORWARD(prefix##move_forward##suffix, move_forward, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FIRST(prefix##move_first##suffix, move_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_LAST(prefix##move_last##suffix, move_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_BUBBLE_SORT(prefix##bubble_sort##suffix, bubble_sort, type, bool_t)


////////////////////////////////////////
//
// EVERYTHING PREFIX
//
#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_PREFIX_DEF(def, prefix, type, int_t, bool_t) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(prefix##get_count, type, int_t); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(prefix##get_first, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(prefix##get_last, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(prefix##remove, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(prefix##insert_before, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(prefix##insert_after, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(prefix##insert_first, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(prefix##insert_last, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(prefix##move_backward, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(prefix##move_forward, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(prefix##move_first, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(prefix##move_last, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(prefix##bubble_sort, type, bool_t)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_PREFIX(def, prefix, type, int_t, bool_t, next, prev) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT(prefix##get_count, type, int_t, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST(prefix##get_first, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST(prefix##get_last, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE(prefix##remove, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE(prefix##insert_before, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER(prefix##insert_after, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST(prefix##insert_first, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(prefix##insert_last, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD(prefix##move_backward, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD(prefix##move_forward, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST(prefix##move_first, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST(prefix##move_last, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT(prefix##bubble_sort, type, bool_t, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_CPP_PROC_PREFIX(def, prefix, type, int_t, bool_t) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_COUNT(prefix##get_count, get_count, type, int_t) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_FIRST(prefix##get_first, get_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_LAST(prefix##get_last, get_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_REMOVE(prefix##remove, remove, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_BEFORE(prefix##insert_before, insert_before, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_AFTER(prefix##insert_after, insert_after, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_FIRST(prefix##insert_first, insert_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_LAST(prefix##insert_last, insert_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_BACKWARD(prefix##move_backward, move_backward, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FORWARD(prefix##move_forward, move_forward, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FIRST(prefix##move_first, move_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_LAST(prefix##move_last, move_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_BUBBLE_SORT(prefix##bubble_sort, bubble_sort, type, bool_t)


////////////////////////////////////////
//
// EVERYTHING SUFFIX
//
#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_SUFFIX_DEF(def, suffix, type, int_t, bool_t) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(get_count##suffix, type, int_t); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(get_first##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(get_last##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(remove##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(insert_before##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(insert_after##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(insert_first##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(insert_last##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(move_backward##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(move_forward##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(move_first##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(move_last##suffix, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(bubble_sort##suffix, type, bool_t)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_SUFFIX(def, suffix, type, int_t, bool_t, next, prev) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT(get_count##suffix, type, int_t, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST(get_first##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST(get_last##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE(remove##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE(insert_before##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER(insert_after##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST(insert_first##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(insert_last##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD(move_backward##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD(move_forward##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST(move_first##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST(move_last##suffix, type, prev, next) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT(bubble_sort##suffix, type, bool_t, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_CPP_PROC_SUFFIX(def, suffix, type, int_t, bool_t) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_COUNT(get_count##suffix, cpp, type, int_t) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_FIRST(get_first##suffix, get_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_LAST(get_last##suffix, get_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_REMOVE(remove##suffix, remove, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_BEFORE(insert_before##suffix, insert_before, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_AFTER(insert_after##suffix, insert_after, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_FIRST(insert_first##suffix, insert_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_LAST(insert_last##suffix, insert_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_BACKWARD(move_backward##suffix, move_backward, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FORWARD(move_forward##suffix, move_forward, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FIRST(move_first##suffix, move_first, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_LAST(move_last##suffix, move_last, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_BUBBLE_SORT(bubble_sort##suffix, bubble_sort, type, bool_t)


////////////////////////////////////////
//
// COUNT
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(name, type, int_t) \
int_t name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_BODY(type, int_t, prev, next) {\
	int_t count = 0;\
	if(node) {\
		count += 1;\
		if(node->prev) {\
			type * n = node->prev;\
			while(n) {\
				count += 1;\
				n      = n->prev;\
			}\
		}\
		if(node->next) {\
			type * n = node->next;\
			while(n) {\
				count += 1;\
				n      = n->next;\
			}\
		}\
	}\
	return count;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT(name, type, int_t, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(name, type, int_t) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_BODY(type, int_t, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_COUNT(c_name, cpp_name, type, int_t) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(cpp_name, type, int_t) {return c_name(node);}


////////////////////////////////////////
//
// GET FIRST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(name, type) \
type * name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_BODY(type, prev, next) {\
	type * first_node = node;\
	while(first_node && first_node->prev) {\
		first_node = first_node->prev;\
	}\
	return first_node;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_FIRST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(cpp_name, type) {return c_name(node);}


////////////////////////////////////////
//
// GET LAST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(name, type) \
type * name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_BODY(type, prev, next) {\
	type * last_node = node;\
	while(last_node && last_node->next) {\
		last_node = last_node->next;\
	}\
	return last_node;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_LAST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(cpp_name, type) {return c_name(node);}


////////////////////////////////////////
//
// REMOVE
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(name, type) \
void name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_BODY(type, prev, next) {\
	if(node) {\
		if(node->prev) {\
			node->prev->next = node->next;\
		}\
		if(node->next) {\
			node->next->prev = node->prev;\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_REMOVE(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(cpp_name, type) {c_name(node);}


////////////////////////////////////////
//
// INSERT BEFORE
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(name, type) \
void name(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_BODY(type, prev, next) {\
	if(node && new_node) {\
		new_node->next = node;\
		if(node->prev) {\
			new_node->prev   = node->prev;\
			node->prev->next = new_node;\
		} else {\
			new_node->prev = 0;\
		}\
		node->prev = new_node;\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_BEFORE(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(cpp_name, type) {c_name(node, new_node);}


////////////////////////////////////////
//
// INSERT AFTER
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(name, type) \
void name(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_BODY(type, prev, next) {\
	if(node && new_node) {\
		new_node->prev = node;\
		if(node->next) {\
			new_node->next   = node->next;\
			node->next->prev = new_node;\
		} else {\
			new_node->next = 0;\
		}\
		node->next = new_node;\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_AFTER(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(cpp_name, type) {c_name(node, new_node);}


////////////////////////////////////////
//
// INSERT FIRST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(name, type) \
void name(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_BODY(type, prev, next) {\
	if(node && new_node) {\
		type * first_node = node;\
		while(first_node && first_node->prev) {\
			first_node = first_node->prev;\
		}\
		\
		new_node->next = first_node;\
		if(first_node->prev) {\
			new_node->prev         = first_node->prev;\
			first_node->prev->next = new_node;\
		} else {\
			new_node->prev = 0;\
		}\
		first_node->prev = new_node;\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_FIRST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(cpp_name, type) {c_name(node, new_node);}


////////////////////////////////////////
//
// INSERT LAST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(name, type) \
void name(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_BODY(type, prev, next) {\
	if(node && new_node) {\
		type * last_node = node;\
		while(last_node && last_node->next) {\
			last_node = last_node->next;\
		}\
		\
		new_node->prev = last_node;\
		if(last_node->next) {\
			new_node->next        = last_node->next;\
			last_node->next->prev = new_node;\
		} else {\
			new_node->next = 0;\
		}\
		last_node->next = new_node;\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_LAST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(cpp_name, type) {c_name(node, new_node);}


////////////////////////////////////////
//
// MOVE BACKWARD
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(name, type) \
void name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_BODY(type, prev, next) {\
	if(node && node->prev) {\
		node->prev->next = node->next;\
		if(node->next) {\
			node->next->prev = node->prev;\
		}\
		\
		type * prev_node = node->prev;\
		node->next = prev_node;\
		if(prev_node->prev) {\
			node->prev   = prev_node->prev;\
			prev_node->prev->next = node;\
		} else {\
			node->prev = 0;\
		}\
		prev_node->prev = node;\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_BACKWARD(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(cpp_name, type) {c_name(node);}


////////////////////////////////////////
//
// MOVE FORWARD
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(name, type) \
void name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_BODY(type, prev, next) {\
	if(node && node->next) {\
		if(node->prev) {\
			node->prev->next = node->next;\
		}\
		node->next->prev = node->prev;\
		\
		type * next_node = node->next;\
		node->prev = next_node;\
		if(next_node->next) {\
			node->next   = next_node->next;\
			next_node->next->prev = node;\
		} else {\
			node->next = 0;\
		}\
		next_node->next = node;\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FORWARD(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(cpp_name, type) {c_name(node);}


////////////////////////////////////////
//
// MOVE FIRST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(name, type) \
void name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_BODY(type, prev, next) {\
	if(node) {\
		type * first_node = node;\
		while(first_node && first_node->prev) {\
			first_node = first_node->prev;\
		}\
		\
		if(first_node && first_node != node) {\
			if(node->prev) {\
				node->prev->next = node->next;\
			}\
			if(node->next) {\
				node->next->prev = node->prev;\
			}\
			\
			node->next = first_node;\
			if(first_node->prev) {\
				node->prev   = first_node->prev;\
				first_node->prev->next = node;\
			} else {\
				node->prev = 0;\
			}\
			first_node->prev = node;\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FIRST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(cpp_name, type) {c_name(node);}


////////////////////////////////////////
//
// MOVE LAST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(name, type) \
void name(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_BODY(type, prev, next) {\
	if(node) {\
		type * last_node = node;\
		while(last_node && last_node->next) {\
			last_node = last_node->next;\
		}\
		\
		if(last_node && last_node != node) {\
			if(node->prev) {\
				node->prev->next = node->next;\
			}\
			if(node->next) {\
				node->next->prev = node->prev;\
			}\
			\
			node->next = last_node;\
			if(last_node->prev) {\
				node->prev   = last_node->prev;\
				last_node->prev->next = node;\
			} else {\
				node->prev = 0;\
			}\
			last_node->prev = node;\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST(name, type, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_BODY(type, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_LAST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(cpp_name, type) {c_name(node);}


////////////////////////////////////////
//
// BUBBLE SORT
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(name, type, bool_t) \
void name(type * node, bool_t (*sort_proc)(type * a, type * b))

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_BODY(type, bool_t, prev, next) {\
	if(node) {\
		bool_t unsorted = 1;\
		while(unsorted) {\
			unsorted = 0;\
			\
			type * first_node = node;\
			while(first_node && first_node->prev) {\
				first_node = first_node->prev;\
			}\
			\
			for(type *it = first_node; it; it = it->next) {\
				if(it->next) {\
					type * next_node = it->next;\
					if(sort_proc(it, next_node)) {\
						{\
							if(next_node->prev) {\
								next_node->prev->next = next_node->next;\
							}\
							if(next_node->next) {\
								next_node->next->prev = next_node->prev;\
							}\
							\
							type * prev_node = next_node->prev;\
							next_node->next = prev_node;\
							if(prev_node->prev) {\
								next_node->prev   = prev_node->prev;\
								prev_node->prev->next = next_node;\
							} else {\
								next_node->prev = 0;\
							}\
							prev_node->prev = next_node;\
						}\
						\
						it = next_node;\
						unsorted = 1;\
					}\
				}\
			}\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT(name, type, bool_t, prev, next) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(name, type, bool_t) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_BODY(type, bool_t, prev, next)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_BUBBLE_SORT(c_name, cpp_name, type, bool_t) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(cpp_name, type, bool_t) {c_name(node, sort_proc);}


////////////////////////////////////////
//
// END INCLUDE GUARD
//
#endif
