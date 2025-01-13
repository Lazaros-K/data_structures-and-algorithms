
#include <stdbool.h>
#include <stdio.h>

#include "sort_algorithms.h"
#include "../tools/functions.h"
// <3
// ninja is my lover
// <3



void swap(int* a,int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low ,int high) {
    int pi = arr[high];
    int i = low;
    
    for(int j = low ; j < high; j++) {
        if(arr[j] < pi) {
            swap(&arr[j],&arr[i]);
            i++;
        }
    }
    
    swap(&arr[i],&arr[high]);
    return i;
}

void bubblesort(int arr[],int n) {
    bool sorted;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i] > arr[i+1]) {
                sorted = false;
                swap(&arr[i],&arr[i+1]);
            }
        }
        n -= 1;
    }
}


void quicksort(int arr[],int low ,int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);
        // printarr(arr,high+1);
        // printf("low: %d high: %d\n",low,high);

        
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int findmin(int arr[],int low,int high) {
    int min_i = low;
    for (int i = low+1; i <= high; i++)
    {
        if(arr[i] < arr[min_i]) { min_i = i; }
    }
    return min_i;
}

void selectionsort(int arr[],int n) {
    for (int i = 0; i < n-1; i++)
    {
        swap(&arr[i],&arr[findmin(arr,i,n-1)]);
    }
}