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
// Example at the bottom of the file (in the EXAMPLE section)
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
#if !defined(ZODAINK_DOUBLY_LINKED_LIST_INCLUDE_H)
#define ZODAINK_DOUBLY_LINKED_LIST_INCLUDE_H


////////////////////////////////////////
//
// INDEX TYPE
//
#if !defined(ZODAINK_DOUBLY_LINKED_LIST_INDEX_TYPE)
#define ZODAINK_DOUBLY_LINKED_LIST_INDEX_TYPE int
#endif


////////////////////////////////////////
//
// EVERYTHING
//
#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC_DEF(def, type, get_count, get_first, get_last, remove, insert_before, insert_after, insert_first, insert_last, move_backward, move_forward, move_first, move_last, bubble_sort) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(get_count, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(get_first, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(get_last, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(remove, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(insert_before, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(insert_after, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(insert_first, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(insert_last, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(move_backward, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(move_forward, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(move_first, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(move_last, type); \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(bubble_sort, type)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_PROC(def, type, prev_member, next_member, get_count, get_first, get_last, remove, insert_before, insert_after, insert_first, insert_last, move_backward, move_forward, move_first, move_last, bubble_sort) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT(get_count, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST(get_first, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST(get_last, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE(remove, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE(insert_before, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER(insert_after, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST(insert_first, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(insert_last, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD(move_backward, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD(move_forward, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST(move_first, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST(move_last, type, prev_member, next_member) \
def ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT(bubble_sort, type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_EVERY_CPP_PROC(def, type, get_count_c, get_count_cpp, get_first_c, get_first_cpp, get_last_c, get_last_cpp, remove_c, remove_cpp, insert_before_c, insert_before_cpp, insert_after_c, insert_after_cpp, insert_first_c, insert_first_cpp, insert_last_c, insert_last_cpp, move_backward_c, move_backward_cpp, move_forward_c, move_forward_cpp, move_first_c, move_first_cpp, move_last_c, move_last_cpp, bubble_sort_c, bubble_sort_cpp) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_COUNT(get_count_c, cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_FIRST(get_first_c, get_first_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_LAST(get_last_c, get_last_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_REMOVE(remove_c, remove_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_BEFORE(insert_before_c, insert_before_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_AFTER(insert_after_c, insert_after_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_FIRST(insert_first_c, insert_first_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_LAST(insert_last_c, insert_last_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_BACKWARD(move_backward_c, move_backward_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FORWARD(move_forward_c, move_forward_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FIRST(move_first_c, move_first_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_LAST(move_last_c, move_last_cpp, type) \
def ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_BUBBLE_SORT(bubble_sort_c, bubble_sort_cpp, type)


////////////////////////////////////////
//
// COUNT
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_INDEX_TYPE name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_BODY(type, prev_member, next_member) {\
	ZODAINK_DOUBLY_LINKED_LIST_INDEX_TYPE count = 0;\
	if(node) {\
		count += 1;\
		if(node->##prev_member) {\
			type * n = node->##prev_member;\
			while(n) {\
				count += 1;\
				n      = n->##prev_member;\
			}\
		}\
		if(node->##next_member) {\
			type * n = node->##next_member;\
			while(n) {\
				count += 1;\
				n      = n->##next_member;\
			}\
		}\
	}\
	return count;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_COUNT(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_COUNT_DEF(cpp_name, type) {return c_name##(node);}


////////////////////////////////////////
//
// GET FIRST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(name, type) \
type * name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_FIRST(type, node, first_node, prev_member, next_member) \
type * first_node = node;\
while(first_node && first_node##->##prev_member) {\
	first_node = first_node##->##prev_member;\
}


#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_BODY(type, prev_member, next_member) {\
	ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_FIRST(type, node, first_node, prev_member, next_member)\
	return first_node;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_FIRST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_FIRST_DEF(cpp_name, type) {return c_name##(node);}


////////////////////////////////////////
//
// GET LAST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(name, type) \
type * name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_LAST(type, node, last_node, prev_member, next_member) \
type * last_node = node;\
while(last_node && last_node##->##next_member) {\
	last_node = last_node##->##next_member;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_BODY(type, prev_member, next_member) {\
	ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_LAST(type, node, last_node, prev_member, next_member) \
	return last_node;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_GET_LAST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_GET_LAST_DEF(cpp_name, type) {return c_name##(node);}


////////////////////////////////////////
//
// REMOVE
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(name, type) \
void name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_REMOVE(type, node, prev_member, next_member) \
if(node##->##prev_member) {\
	node##->##prev_member##->##next_member = node##->##next_member;\
}\
if(node##->##next_member) {\
	node##->##next_member##->##prev_member = node##->##prev_member;\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_BODY(type, prev_member, next_member) {\
	if(node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_REMOVE(type, node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_REMOVE(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_REMOVE_DEF(cpp_name, type) {c_name##(node);}


////////////////////////////////////////
//
// INSERT BEFORE
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(name, type) \
void name##(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_BEFORE(type, node, new_node, prev_member, next_member) \
new_node##->##next_member = node;\
if(node##->##prev_member) {\
	new_node##->##prev_member              = node##->##prev_member;\
	node##->##prev_member##->##next_member = new_node;\
} else {\
	new_node##->##prev_member = 0;\
}\
node##->##prev_member = new_node;\

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_BODY(type, prev_member, next_member) {\
	if(node && new_node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_BEFORE(type, node, new_node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_BEFORE(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_BEFORE_DEF(cpp_name, type) {c_name##(node, new_node);}


////////////////////////////////////////
//
// INSERT AFTER
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(name, type) \
void name##(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_AFTER(type, node, new_node, prev_member, next_member) \
new_node##->##prev_member = node;\
if(node##->##next_member) {\
	new_node##->##next_member              = node##->##next_member;\
	node##->##next_member##->##prev_member = new_node;\
} else {\
	new_node##->##next_member = 0;\
}\
node##->##next_member = new_node;

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_BODY(type, prev_member, next_member) {\
	if(node && new_node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_AFTER(type, node, new_node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_AFTER(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_AFTER_DEF(cpp_name, type) {c_name##(node, new_node);}


////////////////////////////////////////
//
// INSERT FIRST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(name, type) \
void name##(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_BODY(type, prev_member, next_member) {\
	if(node && new_node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_FIRST(type, node, first_node, prev_member, next_member)\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_BEFORE(type, first_node, new_node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_FIRST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_FIRST_DEF(cpp_name, type) {c_name##(node, new_node);}


////////////////////////////////////////
//
// INSERT LAST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(name, type) \
void name##(type * node, type * new_node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_BODY(type, prev_member, next_member) {\
	if(node && new_node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_LAST(type, node, last_node, prev_member, next_member)\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_AFTER(type, last_node, new_node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_INSERT_LAST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_INSERT_LAST_DEF(cpp_name, type) {c_name##(node, new_node);}


////////////////////////////////////////
//
// MOVE BACKWARD
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(name, type) \
void name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_MOVE_BACKWARD(type, node, prev_node, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_REMOVE(type, node, prev_member, next_member)\
type * prev_node = node->##prev_member;\
ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_BEFORE(type, prev_node, node, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_BODY(type, prev_member, next_member) {\
	if(node && node->##prev_member) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_MOVE_BACKWARD(type, node, prev_node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_BACKWARD(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_BACKWARD_DEF(cpp_name, type) {c_name##(node);}


////////////////////////////////////////
//
// MOVE FORWARD
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(name, type) \
void name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_MOVE_FORWARD(type, node, next_node, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_REMOVE(type, node, prev_member, next_member)\
type * next_node = node->##next_member;\
ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_BEFORE(type, next_node, node, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_BODY(type, prev_member, next_member) {\
	if(node && node->##next_member) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_MOVE_FORWARD(type, node, next_node, prev_member, next_member)\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FORWARD(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FORWARD_DEF(cpp_name, type) {c_name##(node);}


////////////////////////////////////////
//
// MOVE FIRST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(name, type) \
void name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_BODY(type, prev_member, next_member) {\
	if(node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_FIRST(type, node, first_node, prev_member, next_member)\
		if(first_node && first_node != node) {\
			ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_REMOVE(type, node, prev_member, next_member)\
			ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_BEFORE(type, first_node, node, prev_member, next_member)\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_FIRST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_FIRST_DEF(cpp_name, type) {c_name##(node);}


////////////////////////////////////////
//
// MOVE LAST
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(name, type) \
void name##(type * node)

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_BODY(type, prev_member, next_member) {\
	if(node) {\
		ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_LAST(type, node, last_node, prev_member, next_member)\
		if(last_node && last_node != node) {\
			ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_REMOVE(type, node, prev_member, next_member)\
			ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_INSERT_AFTER(type, last_node, node, prev_member, next_member)\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_MOVE_LAST(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_MOVE_LAST_DEF(cpp_name, type) {c_name##(node);}


////////////////////////////////////////
//
// BUBBLE SORT
//
#define ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(name, type) \
void name##(type * node, int (*sort_proc)(type * a, type * b))

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_BODY(type, prev_member, next_member) {\
	if(node) {\
		int unsorted = 1;\
		while(unsorted) {\
			unsorted = 0;\
			ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_GET_FIRST(type, node, first_node, prev_member, next_member)\
			for(type *it = first_node; it; it = it->##next_member) {\
				if(it->##next_member) {\
					type * next_node = it->##next_member;\
					if(sort_proc(it, next_node)) {\
						ZODAINK_DOUBLY_LINKED_LIST_PROTOTYPE_MOVE_BACKWARD(type, next_node, prev_node,\
						prev_member, next_member);\
						it = next_node;\
						unsorted = 1;\
					}\
				}\
			}\
		}\
	}\
}

#define ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT(name, type, prev_member, next_member) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_BODY(type, prev_member, next_member)

#define ZODAINK_DOUBLY_LINKED_LIST_CPP_PROC_BUBBLE_SORT(c_name, cpp_name, type) \
ZODAINK_DOUBLY_LINKED_LIST_PROC_BUBBLE_SORT_DEF(cpp_name, type) {c_name##(node, sort_proc);}


////////////////////////////////////////
//
// EXAMPLE
//
#if 0

#include <stdio.h>
#include <stdlib.h>

#include "zodaink_doubly_linked_list_base.h"

typedef struct My_Struct {
	My_Struct *previous;
	My_Struct *next;
	int        value;
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
// END INCLUDE GUARD
//
#endif // !ZODAINK_DOUBLY_LINKED_LIST_INCLUDE_H
