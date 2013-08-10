#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

// checks if an array is sorted
bool is_sorted(int* A, int lower, int upper) {
	for (int i = lower + 1; i < upper; i++) {
		if (A[i] < A[i-1]) return false;
	}
	return true;
}

// linsearch on potentially unsorted array from [lower, upper)
int is_in(int x, int* A, int lower, int upper) {
	for (int i = lower; i < upper; i++) {
		if (A[i] == x) return i;
	}
	return -1;
}

// linsearch on sorted array from [lower, upper)
int linsearch(int x, int* A, int lower, int upper) {
	for (int i = lower; i < upper; i++) {
		if (A[i] == x) return i;
		else if (A[i] > x) return -1;
	}
	return -1;
}

// binsearch on sorted array from [lower, upper)
int binsearch(int x, int* A, int lower, int upper) {
	while (lower < upper) {
		int mid = lower + (upper - lower)/2
		if (A[mid] == x) return mid;
		else if (A[mid] > x) upper = mid;
		else lower = mid + 1;
	}
	return -1;
}

bool test_is_sorted(int* A) {
	assert(is_sorted(A, 0, 1));
	assert(is_sorted(A, 0, 5));
	return true;
}

bool test_is_in(int* A) {
	assert(is_in(2, A, 0, 5) == 2);
	assert(is_in(0, A, 1, 5) == -1);
	return true;	
}

bool test_linsearch(int* A) {
	assert(linsearch(1, A, 0, 5) == 1);
	assert(linsearch(5, A, 0, 5) == -1);
	return true;	
}

bool test_binsearch(int* A) {
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
	assert(test_is_sorted(A));
	assert(test_is_in(A));
	assert(test_linsearch(A));
	assert(test_binsearch(A));
	free(A);
	return 0;
}

