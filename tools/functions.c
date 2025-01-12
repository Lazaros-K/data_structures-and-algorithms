
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

void printarr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void printArrayPart(int arr[],int low,int high) {
    for(int i = low; i <= high; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

double timer() {
    
    static LARGE_INTEGER time_stamp, frequency;
    static bool started = false;

    if(started) {
        LARGE_INTEGER t;
        QueryPerformanceCounter(&t);

        double time_taken = 1000 * ((double)t.QuadPart - (double)time_stamp.QuadPart) / (double) frequency.QuadPart;
        started = false;
        printf("timer %lf\n",time_taken);
        return time_taken;
    }
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&time_stamp);
    started = true;
    return 0;
}