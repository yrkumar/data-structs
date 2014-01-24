#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "queue.h" 

/* TESTS FOR QUEUE.C */
bool test_queue() {
	queue Q = queue_new();
	enq(1, Q);
	assert(peek(Q) == 1);
	assert(deq(Q) == 1);
	assert(is_empty(Q));
	enq(1, Q);
	enq(2, Q);
	assert(peek(Q) == 1);
	assert(deq(Q) == 1);
	enq(3, Q);
	enq(4, Q);
	assert(deq(Q) == 2);
	assert(deq(Q) == 3);
	assert(deq(Q) == 4);
	return true;
}

int main() {
	/* TESTS FOR QUEUE.C */
	printf("Testing queue.c functions...\n");
	printf("	queue_new\n");
	printf("	enq\n");
	printf("	deq\n");
	printf("	peek\n");
	assert(test_queue());
	printf("All queue.c tests passed!\n");
	printf("(* Note: all functions tested together, not individually *)\n\n");
}

