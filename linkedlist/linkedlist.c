#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "linkedlist.h" 

/*
 * linlist_new - creates a new linked list
 * REQUIRES: true
 * ENSURES: linlist_new returns an empty linked list 
 */
lin_list linlist_new() {
	node p = calloc(sizeof(struct list_node), 1);
	p->next = NULL;
	lin_list L = calloc(sizeof(struct linkedlist_header), 1);
	L->head = p;
	L->tail = p;
	return L;
}

/*
 * is_complete - checks if linked list has any broken links
 * REQUIRES: true
 * ENSURES: is_complete(L) returns true iff L is complete
 */
bool is_complete(lin_list L) {
	node p = L->head;
	while (p != L->tail) {
		if (p == NULL) return false;
		p = p->next;
	}
	return true;
}

/* 
 * is_empty - checks if linked list is empty
 * REQUIRES: true
 * ENSURES: is_empty(L) returns true iff L is empty
 */
bool is_empty(lin_list L) {
	return L->head == L->tail;
}

/* 
 * append - appends an element to a linked list
 * REQUIRES: true
 * ENSURES: append(e, L) adds e after the tail of L
 */
void append(elem e, lin_list L) {
	L->tail->data = e;
	node p = calloc(sizeof(struct list_node), 1);
	p->next = NULL;
	L->tail->next = p;
	L->tail = p;
}

/*
 * prepend - prepends an element to a linked list 
 * REQUIRES: true
 * ENSURES: prepend(e, L) adds e before the head of L
 */
void prepend(elem e, lin_list L) {
	node p = calloc(sizeof(struct list_node), 1);
	p->data = e;
	p->next = L->head;
	L->head = p;
}

/*
 * linlist_print - prints elements of linked list in order
 * REQUIRES: true
 * ENSURES: the elements of L are printed from head to tail
 */
void linlist_print(lin_list L) {
	node p = L->head;
	while (p != L->tail) {
		printf("%d->", p->data);
		p = p->next;
	}
	printf("_\n");
}

