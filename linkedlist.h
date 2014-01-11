#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

struct linkedlist_header {
	struct list_node* head;
	struct list_node* tail;
};

struct list_node {
	int data;
	struct list_node* next;
};

typedef struct linkedlist_header* lin_list;
typedef struct list_node* node; 

/*
 * linlist_new - creates a new linked list
 * REQUIRES: true
 * ENSURES: linlist_new returns an empty linked list 
 */
lin_list linlist_new();

/*
 * is_complete - checks if linked list has any broken links
 * REQUIRES: true
 * ENSURES: is_complete(L) returns true iff L is complete
 */
bool is_complete(lin_list L);

/* 
 * is_empty - checks if linked list is empty
 * REQUIRES: true
 * ENSURES: is_empty(L) returns true iff L is empty
 */
bool is_empty(lin_list L);

/* 
 * append - appends an element to a linked list
 * REQUIRES: true
 * ENSURES: append(i, L) adds i after the tail of L
 */
void append(int i, lin_list L);

/*
 * prepend - prepends an element to a linked list 
 * REQUIRES: true
 * ENSURES: prepend(i, L) adds i before the head of L
 */
void prepend(int i, lin_list L);

/*
 * linlist_print - prints elements of linked list in order
 * REQUIRES: true
 * ENSURES: the elements of L are printed from head to tail
 */
void linlist_print(lin_list L);

