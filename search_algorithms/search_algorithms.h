#ifndef SEARCH_ALGORITHM_H
#define SEARCH_ALGORITHM_H

#include <stdbool.h>

// returns true if sorted
bool sorted(int arr[], int n);

//Divides the array in two when possible (rounds using the float to int conversion) and returns the pivot element.
inline static int div_arr(int arr[], int low, int high) {
    return  low + (high-low)/2;
}

int binary_search(int arr[], int low, int high, int item);

/**
 * Find element in a SORTED array.
 * @return: item's index, -1 (not found), -2(not sorted).
 */ 
inline static int arr_binary_search(int arr[], int n, int item) {
    if (!sorted) { return -2; }
    return binary_search(arr,0,n-1,item);
}

/**
 * Find element in an array and return it's index.
 * Returns -1 if item doesn't exist in an array.
 */
int linear_search(int arr[], int n, int item);

#endif