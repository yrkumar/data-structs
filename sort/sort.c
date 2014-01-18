#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> 
#include <assert.h> 
#include <string.h> 

/*
 * bubblesort - sorts an array between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: A is sorted from [lower, upper)
 */
void bubblesort(int* A, int lower, int upper) {
	int swaps = 1;
	while (swaps) {
		swaps = 0;
		for (int i = lower + 1; i < upper; i++) {
			if (A[i-1] > A[i]) {
				int tmp = A[i-1];
				A[i-1] = A[i];
				A[i] = tmp;
				swaps++;
			}
		}
	}
}

/* 
 * quicksort - sorts an array between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: A is sorted from [lower, upper)
 */
void quicksort(int* A, int lower, int upper) {
	if (upper - lower > 1) {
		int B[upper - lower]; 
		for (int i = 0; i < upper - lower; i++) {
			B[i] = A[i + lower];
		}
		int pivot = A[lower];
		int si = lower;
		int li = upper - 1;
		for (int i = 0; i < upper - lower; i++) {
			if (B[i] < pivot) {
				A[si] = B[i]; 
				si++;
			} else {
				A[li] = B[i];
				li--;
			}
		}
		quicksort(A, lower, si);
		quicksort(A, si, upper);
	} 
}

/*
 * merge - combines two sorted arrays into a bigger sorted array
 * REQUIRES: [lower, mid) is in bounds of A and is sorted AND 
 *			 [mid, upper) is in bounds of A and is sorted
 * ENSURES: A is sorted from [lower, upper)
 */
void merge(int* A, int lower, int mid, int upper) {
	int length = upper - lower;
	int middle = mid - lower;
	int B[length];
	for (int i = 0; i < length; i++) {
		B[i] = A[i + lower];
	}
	int l = 0;
	int m = middle;
	int index = lower;
	while ((l < middle) || (m < length)) {
		if ((m >= length) || ((l < middle) && (B[l] <= B[m]))) {
			A[index] = B[l];
			l++;
		} else {
			A[index] = B[m];
			m++;
		}
		index++;
	}
}

/*
 * merge_sort - sorts an array between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: A is sorted from [lower, upper)
 */ 
void merge_sort(int* A, int lower, int upper) {
	if (upper - lower > 1) {
		int mid = (upper + lower)/2;
		merge_sort(A, lower, mid);
		merge_sort(A, mid, upper);
		merge(A, lower, mid, upper);
	}
} 

