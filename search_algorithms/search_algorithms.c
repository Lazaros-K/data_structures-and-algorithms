#include <stdbool.h>
#include "search_algorithms.h"
#include "../tools/functions.h"

bool sorted(int arr[], int n) {
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1] > arr[i]) {
            return false;
        }
    }
    return true;
}

int binary_search(int arr[], int low, int high, int item) {

    while (low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == item) { return mid; }

        if(item > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}


int linear_search(int arr[], int n, int item) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            return i;
        }
    }
    return -1;
}
