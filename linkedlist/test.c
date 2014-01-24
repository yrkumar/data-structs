#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "linkedlist.h"

/* TESTS FOR LINKEDLIST.C */
bool test_linkedlist() {
	lin_list L = linlist_new();
	assert(is_complete(L) && is_empty(L));
	append(2, L);
	assert(L->head->data == 2);
	assert(!is_empty(L) && is_complete(L));
	prepend(1, L);
	assert(L->head->data == 1);
	assert(!is_empty(L) && is_complete(L));
	return true;
}

int main() {
	/* TESTS FOR LINKEDLIST.C */
	printf("Testing linkedlist.c functions...\n");
	printf("	linlist_new\n");
	printf("	is_complete\n");
	printf("	is_empty\n");
	printf("	append\n");
	printf("	prepend\n");
	assert(test_linkedlist());
	printf("All linkedlist.c tests passed!\n");
	printf("(* Note: all functions tested together, not individually *)\n\n");
}
