#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "stack.h" 

/*
 * stack_new - creates a new stack
 * REQUIRES: true
 * ENSURES: stack_new() returns an empty stack
 */
stack stack_new() {
	stack S = linlist_new();
	return S;
}

/*
 * push - pushes an element onto a stack
 * REQUIRES: true
 * ENSURES: push(e, S) adds e on top of S
 */
void push(s_elem e, stack S) {
	prepend(e, S);
}

/*
 * pop - pops an element off of a stack
 * REQUIRES: S is nonempty
 * ENSURES: pop(S) removes and returns the element at the top of S
 */
s_elem pop(stack S) {
	s_elem e = S->head->data;
	S->head = S->head->next;
	return e;
}

/*
 * peek - peeks on top of a stack
 * REQUIRES: S is nonempty
 * ENSURES: peek(S) returns the element at the top of S
 */
s_elem peek(stack S) {
	return S->head->data;
}

/* 
 * reverse - reverses a stack 
 * REQUIRES: true
 * ENSURES: reverse(S) flips the order of the elements in S
 */
void reverse(stack S) {
	stack R = stack_new();
	while (!(is_empty(S))) {
		push(pop(S), R);
	}
	S = R;
}

/*
 * stack_print - prints elements of a stack in order
 * REQUIRES: true
 * ENSURES: the elements of S are printed from top to bottom
 */
void stack_print(stack S) {
	linlist_print(S);
}

