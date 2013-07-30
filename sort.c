#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

// bubblesorts an array from [lower, upper)
void bubblesort(int* A int lower, int upper) {
}

// quicksorts an array from [lower, upper)
void quicksort(int* A, int lower, int upper) {
}

// mergesorts an array from [lower, upper)
void mergesort(int*A, int lower, int upper) {
}

bool test_bubblesort() {
	return true;
}

bool test_quicksort() {
	return true;
}

bool test_mergesort() {
	return true;
}

int main() {
	int* A = calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++) {
		A[i] = i;
	}
	assert(test_bubblesort);
	assert(test_quicksort);
	assert(test_mergesort);
}
