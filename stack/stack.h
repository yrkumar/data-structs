#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "linkedlist.h"

typedef lin_list stack;
typedef int s_elem;

/*
 * stack_new - creates a new stack
 * REQUIRES: true
 * ENSURES: stack_new() returns an empty stack
 */
stack stack_new();

/*
 * pop - pops an element off of a stack
 * REQUIRES: S is nonempty
 * ENSURES: pop(S) returns the element at the top of S
 */
void push(s_elem e, stack S);

/* 
 * reverse - reverses a stack 
 * REQUIRES: true
 * ENSURES: reverse(S) flips the order of the elements in S
 */
s_elem pop(stack S);

/*
 * peek - peeks on top of a stack
 * REQUIRES: S is nonempty
 * ENSURES: peek(S) returns the element at the top of S
 */
s_elem peek(stack S);

/* 
 * reverse - reverses a stack 
 * REQUIRES: true
 * ENSURES: reverse(S) flips the order of the elements in S
 */
void reverse(stack S);

/*
 * stack_print - prints elements of a stack in order
 * REQUIRES: true
 * ENSURES: the elements of S are printed from top to bottom
 */
void stack_print(stack S);

