#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "search.h"
#include "sort.h"
#include "linkedlist.h"

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

/* TESTS FOR LINKEDLIST.C */
bool test_linkedlist() {
	lin_list L = linlist_new();
	assert(is_empty(L) && is_complete(L));
	append(2, L);
	assert(L->head->data == 2);
	assert(!is_empty(L) && is_complete(L));
	prepend(1, L);
	assert(L->head->data == 1);
	assert(!is_empty(L) && is_complete(L));
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

	/* TESTS FOR SORT.C */
	printf("Testing sort.c functions...\n");
	printf("	bubblesort\n");
	assert(test_bubblesort());
	printf("	quicksort\n");
	assert(test_quicksort());
	printf("	merge_sort\n");
	assert(test_merge_sort());
	printf("All sort.c tests passed!\n\n");

	/* TESTS FOR LINKEDLIST.C */
	printf("Testing linkedlist.c functions...\n");
	printf("	all\n");
	assert(test_linkedlist());
	printf("All linkedlist.c tests passed!\n\n");

	printf("Done! All tests passed!\n");
	return 0;
}

