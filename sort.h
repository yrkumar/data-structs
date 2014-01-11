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
void bubblesort(int* A, int lower, int upper);

/* 
 * quicksort - sorts an array between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: A is sorted from [lower, upper)
 */
void quicksort(int* A, int lower, int upper);

/* 
 * merge_sort - sorts an array between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: A is sorted from [lower, upper)
 */
void merge_sort(int* A, int lower, int upper);

