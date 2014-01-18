#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "search.h"

/* TESTS FOR SEARCH.C */
bool test_is_sorted() {
	int A[5];
	int B[5];
	for (int i = 0; i < 5; i++) {
		A[i] = i;
		B[i] = -i;
	}
	assert(is_sorted(A, 0, 0));
	assert(is_sorted(A, 0, 5));
	assert(!(is_sorted(B, 0, 2)));
	return true;
}

bool test_is_in() {
	int A[5];
	for (int i = 0; i < 5; i++) {
		A[i] = i;
	}
	assert(is_in(2, A, 0, 5) == 2);
	assert(is_in(0, A, 1, 5) == -1);
	return true;	
}

bool test_linsearch() {
	int A[5];
	for (int i = 0; i < 5; i++) {
		A[i] = i;
	}
	assert(linsearch(1, A, 0, 5) == 1);
	assert(linsearch(5, A, 0, 5) == -1);
	return true;	
}

bool test_binsearch() {
	int A[5];
	for (int i = 0; i < 5; i++) {
		A[i] = i;
	}
	assert(binsearch(0, A, 0, 1) == 0);
	assert(binsearch(1, A, 0, 1) == -1);
	assert(binsearch(4, A, 0, 5) == 4);
	assert(binsearch(5, A, 0, 5) == -1);
	return true;
}

int main() {
	/* TESTS FOR SEARCH.C */
	printf("Testing search.c functions...\n");
	printf("	is_sorted\n");
	assert(test_is_sorted());
	printf("	is_in\n");
	assert(test_is_in());
	printf("	linsearch\n");
	assert(test_linsearch());
	printf("	binsearch\n");
	assert(test_binsearch());
	printf("All search.c tests passed!\n\n");
}

