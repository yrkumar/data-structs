#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

// checks if an array is sorted
bool is_sorted(int* A);

// linsearch on potentially unsorted array from [lower, upper)
int is_in(int x, int* A, int lower, int upper); 

// linsearch on sorted array from [lower, upper)
linsearch(int x, int* A, int lower, int upper);

// binsearch on sorted array from [lower, upper)
binsearch(int x, int* A, int lower, int upper);

