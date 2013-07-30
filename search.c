#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

// checks if an array is sorted
bool is_sorted(int* A, int lower, int upper) {
}

// linsearch on unsorted array
int is_in(int x, int* A, int lower, int upper) {
}

// linsearch on sorted array 
int linsearch(int x, int* A, int lower, int upper) {
}

// binsearch on sorted array
int binsearch(int x, int* A, int lower, int upper) {
}

bool test_is_sorted() {
	assert(is_sorted(A, 0, 5));
	return true;
}

bool test_is_in() {
	assert(is_in(1, A, 0, 5) == 1);
	assert(is_in(0, A, 1, 5) == -1);
	return true;	
}

bool test_linsearch() {
	assert(linsearch(1, A, 0, 5) == 1);
	assert(linsearch(5, A, 0, 5) == -1);
	return true;	
}

bool test_binsearch() {
	assert(binsearch(4, A, 0, 5) == 4);
	assert(binsearch(5, A, 0, 5) == -1);
	return true;
}

int main() {
	int* A = calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++) {
		A[i] = i;
	}
	// unit tests
	assert(test_is_sorted);
	assert(test_is_in);
	assert(test_linsearch);
	assert(test_binsearch);
	free(A);
}

