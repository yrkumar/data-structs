#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "queue.h" 

/*
 * queue_new - creates a new queue
 * REQUIRES: true
 * ENSURES: queue_new() returns an empty queue
 */
queue queue_new() {
	queue Q = linlist_new();
	return Q;
}

/*
 * enq - enqueues an element onto a queue
 * REQUIRES: true
 * ENSURES: enq(e, Q) adds e to the back of Q
 */
void enq(q_elem e, queue Q) {
	append(e, Q);
}

/*
 * deq - dequeues an element from a queue
 * REQUIRES: true
 * ENSURES: deq(Q) removes and returns the element at the front of Q
 */
q_elem deq(queue Q) {
	q_elem e = Q->head->data;
	Q->head = Q->head->next;
	return e;
}

/*
 * peek - peeks in front of a queue
 * REQUIRES: true
 * ENSURES: peek(Q) returns the element at the front of Q
 */
q_elem peek(queue Q) {
	return Q->head->data;
}

/* 
 * queue_print - prints elements of a queue in order
 * REQUIRES: true
 * ENSURES: the elements of Q are printed from front to back
 */
void queue_print(queue Q) {
	linlist_print(Q);
}

