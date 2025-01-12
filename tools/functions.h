#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
/*
 * extern vs static
 * 
 * A function is always extern, meaning global
 * The keyword static makes the function availablle only for
 * current translation unit.
 * 
 * Translation unit:
 * A .c file with all its .h headers.
 * 
 */


// ninja <3
void printarr(int arr[],int n);
void printArrayPart(int arr[],int low,int high);
double timer();


#endif