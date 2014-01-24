#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "linkedlist.h"

typedef lin_list queue;
typedef int q_elem;

/*
 * queue_new - creates a new queue
 * REQUIRES: true
 * ENSURES: queue_new() returns an empty queue
 */
queue queue_new();

/*
 * enq - enqueues an element onto a queue
 * REQUIRES: true
 * ENSURES: enq(e, Q) adds e to the back of Q
 */
void enq(q_elem e, queue Q);

/*
 * deq - dequeues an element from a queue
 * REQUIRES: true
 * ENSURES: deq(Q) removes and returns the element at the front of Q
 */
q_elem deq(queue Q);

/*
 * peek - peeks in front of a queue
 * REQUIRES: true
 * ENSURES: peek(Q) returns the element at the front of Q
 */
q_elem peek(queue Q);

/* 
 * queue_print - prints elements of a queue in order
 * REQUIRES: true
 * ENSURES: the elements of Q are printed from front to back
 */
void queue_print(queue Q);

