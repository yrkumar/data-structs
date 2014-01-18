#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "stack.h" 

/* TESTS FOR STACK.C */
bool test_stack() {
	stack S = stack_new();
	push(1, S);
	assert(peek(S) == 1);
	assert(pop(S) == 1);
	assert(is_empty(S));
	push(1, S);
	push(2, S);
	assert(peek(S) == 2);
	assert(pop(S) == 2);
	push(3, S);
	push(4, S);
	reverse(S);
	assert(pop(S) == 1);
	assert(pop(S) == 3);
	assert(pop(S) == 4);
	return true;
}

int main() {
	/* TEST FOR STACK.C */
	printf("Testing stack.c functions...\n");
	printf("	all\n");
	assert(test_stack());
	printf("All stack.c tests passed!\n\n");	
}
