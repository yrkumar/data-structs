#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

// implementation of sentinel node terminated stack

struct list_node {
	elem data;
	struct list_node* next;
}

struct stack_header {
	node top;
	node bottom;
}

typedef struct list_node* node;
typedef stack_header* stack;

stack stack_new() {
	node p = xcalloc()
}

bool is_complete(stack S) {
}

bool stack_empty(stack S) {
}

void push(stack S, elem e) {
}

elem pop(stack S) {
}

void print_stack(stack S) {
}



