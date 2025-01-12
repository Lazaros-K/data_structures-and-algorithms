#include <stdio.h>
#include "sort_algorithms/sort_algorithms.h"
#include "search_algorithms/search_algorithms.h"
#include "tools/functions.h"
#include "data_structures/sll_plus.h"
#include "data_structures/tests.h"
#include "data_structures/queue.h"
#include "data_structures/sll_queue.h"



int main() {

    qu queue;
    qu_init(&queue,10);
    qu_enqueue(&queue,8);
    qu_enqueue(&queue,7);
    qu_enqueue(&queue,4);
    qu_enqueue(&queue,19);
    qu_enqueue(&queue,2);
    qu_enqueue(&queue,5);

    quicksort(queue.data,0,queue.length-1);
    printarr(queue.data,queue.length);

    int n;
    printf("Select a number: ");
    scanf("%d",&n);
    printf("The index of %d is: %d\n",n,arr_binary_search(queue.data,qu_length(queue),n));

    


    return 0;
}