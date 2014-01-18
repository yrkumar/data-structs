#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "search.h"
#include "sort.h"

/* TESTS FOR SORT.C */
bool test_bubblesort() {
	int A[5];
	int B[5];
	for (int i = 0; i < 5; i++) {
		A[i] = -i;
		B[i] = -i;
	}
	bubblesort(A, 0, 5);
	assert(is_sorted(A, 0, 5));
	bubblesort(B, 0, 2);
	assert(is_sorted(B, 0, 2));
	assert(!(is_sorted(B, 2, 5)));
	return true;
}

bool test_quicksort() {
	int A[5];
	int B[5];
	for (int i = 0; i < 5; i++) {
		A[i] = -i;
		B[i] = -i;
	}
	quicksort(A, 0, 5);
	assert(is_sorted(A, 0, 5));
	quicksort(B, 0, 2);
	assert(is_sorted(B, 0, 2));
	assert(!(is_sorted(B, 2, 5)));
	return true;
}

bool test_merge_sort() {
	int A[5];
	int B[5];
	for (int i = 0; i < 5; i++) {
		A[i] = -i;
		B[i] = -i;
	}
	merge_sort(A, 0, 5);
	assert(is_sorted(A, 0, 5));
	merge_sort(B, 0, 2);
	assert(is_sorted(B, 0, 2));
	assert(!(is_sorted(B, 2, 5)));
	return true;
}

int main() {
	/* TESTS FOR SORT.C */
	printf("Testing sort.c functions...\n");
	printf("	bubblesort\n");
	assert(test_bubblesort());
	printf("	quicksort\n");
	assert(test_quicksort());
	printf("	merge_sort\n");
	assert(test_merge_sort());
	printf("All sort.c tests passed!\n\n");
}

