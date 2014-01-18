#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

/*
 * is_sorted - checks whether A is sorted between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A 
 * ENSURES: is_sorted returns true if A is sorted in increasing order
 *			within [lower, upper) and false otherwise
 */
bool is_sorted(int* A, int lower, int upper);

/*
 * is_in - linear search on potentially unsorted array between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: is_in returns the index of the first occurrence of x within 
 *			[lower, upper) of A or -1 if x does not occur in A within [lower, 
 * 			upper)
 */
int is_in(int x, int* A, int lower, int upper); 

/*
 * linsearch - linear search on sorted array from between lower and upper
 * REQUIRES: [lower, upper) is in bounds of A
 * ENSURES: linsearch returns the index of the first occurrence of x within
 *			[lower, upper) of A or -1 if x does not occur in A within [lower, 
 * 			upper)
 */
int linsearch(int x, int* A, int lower, int upper);

/*
 * binsearch - binary search on sorted array from [lower, upper)
 * REQUIRES: lower and upper are in bounds of A and is_sorted(A) == true
 * ENSURES: binsearch returns the index of the first occurrence of x within
 *			[lower, upper) of A or -1 if x does not occur in A within [lower, 
 * 			upper)
 */
int binsearch(int x, int* A, int lower, int upper);

